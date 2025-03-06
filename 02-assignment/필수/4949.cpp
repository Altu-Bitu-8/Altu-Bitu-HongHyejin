#include <iostream>
#include <deque>
#include <string>

using namespace std;

bool ±ÕÇü(string s) {
    deque <char> q;
    for (char c : s) {
        if (c == '[' || c == '(') {
            q.push_back(c);
        }
        else if (c == ']' || c == ')') {
            if (q.empty()) return false;
            if ((c == ']' && q.back() == '[') || (c == ')' && q.back() == '(')) {
                q.pop_back();
            }
            else {
                return false;
            }
        }
    }
    return q.empty();
}
int main() {
    string s = "";
    while (true) {
        getline(cin, s);
        if (s == ".") break;
        bool result = ±ÕÇü(s);
        if (result) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}