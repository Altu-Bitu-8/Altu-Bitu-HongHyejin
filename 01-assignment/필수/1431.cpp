#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(string s1, string s2) {
    //길이가 다르면
    if (s1.size() != s2.size()) {
        return s1.size() < s2.size(); //s1이 먼저 오면 true, 그렇지 않으면 false
    }
    else { //길이가 같으면
        int a = 0, b = 0;
        for (int i = 0;i < s1.size();i++) {
            if (s1[i] - '0' >= 0 && s1[i] - '0' <= 9) {
                a += s1[i] - '0';
            }
        }
        for (int i = 0;i < s2.size();i++) {
            if (s2[i] - '0' >= 0 && s2[i] - '0' <= 9) {
                b += s2[i] - '0';
            }
        }
        if (a != b) {
            return a < b;
        }
        else {
            return s1 < s2;
        }
    }
}

int main() {
    vector<string> ser_no;
    int n;
    cin >> n;
    for (int i = 0;i < n;i++) {
        string s;
        cin >> s;
        ser_no.push_back(s);
    }
    sort(ser_no.begin(), ser_no.end(), compare);

    for (int i = 0;i < ser_no.size();i++) {
        cout << ser_no[i] << endl;
    }

    return 0;
}