#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string s;
    cin >> s;

    set<string> result;

    for (int i = 0;i < s.size();i++) {
        string s1 = "";
        for (int j = i;j < s.size();j++) {
            s1 += s[j];
            result.insert(s1);
        }
    }

    cout << result.size();
}
