#include <iostream>
#include <vector>

using namespace std;

void 회전판(int n, int k) {
    vector <char> v(n, '?'); //다 ?로 초기화
    int now = n - 1; //현재 가리키고 있는 인덱스 번호

    while (k--) {
        int s; char c;
        cin >> s >> c;
        now = (now + s) % n;

        if (v[now] == '?' || v[now] == c) {
            //배열 안이 비어있거나 넣으려는 글자와 같은 글자가 들어있을 때
            v[now] = c;
        }
        else {
            //배열 안에 이미 다른 문자가 들어왔을 때
            cout << "!";
            return;
        }
    }
    //마지막 확인
    for (int i = 0;i < n;i++) {
        for (int j = i + 1;j < n;j++) {
            if (v[i] != '?' && v[i] == v[j]) {
                cout << "!";
                return;
            }
        }
    }

    for (int i = 0;i < n;i++) {
        cout << v[now];
        now--;
        if (now < 0) {
            now += n;
        }
    }

    return;
}

int main() {
    int n, k;
    cin >> n >> k;
    회전판(n, k);
    return 0;
}