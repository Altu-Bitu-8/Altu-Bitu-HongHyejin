#include <iostream>
#include <vector>

using namespace std;

void ȸ����(int n, int k) {
    vector <char> v(n, '?'); //�� ?�� �ʱ�ȭ
    int now = n - 1; //���� ����Ű�� �ִ� �ε��� ��ȣ

    while (k--) {
        int s; char c;
        cin >> s >> c;
        now = (now + s) % n;

        if (v[now] == '?' || v[now] == c) {
            //�迭 ���� ����ְų� �������� ���ڿ� ���� ���ڰ� ������� ��
            v[now] = c;
        }
        else {
            //�迭 �ȿ� �̹� �ٸ� ���ڰ� ������ ��
            cout << "!";
            return;
        }
    }
    //������ Ȯ��
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
    ȸ����(n, k);
    return 0;
}