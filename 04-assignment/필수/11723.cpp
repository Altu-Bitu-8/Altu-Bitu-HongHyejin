#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <int> s(20);

void program(string type, int num) {
    if (type == "add") {
        if (s[num - 1] == 0) {
            s[num - 1] = num;
            return;
        }
        else {
            return;
        }
    }
    else if (type == "remove") {
        if (s[num - 1] == 0) {
            return;
        }
        else {
            s[num - 1] = 0;
            return;
        }
    }
    else if (type == "check") {
        if (s[num - 1] == num) {
            cout << "1\n";
            return;
        }
        else {
            cout << "0\n";
            return;
        }
    }
    else if (type == "toggle") {
        if (s[num - 1] == num) {
            s[num - 1] = 0;
            return;
        }
        else {
            s[num - 1] = num;
        }
    }
    else if (type == "all") {
        for (int i = 0;i < s.size();i++) {
            s[i] = i + 1;
        }
        return;
    }
    else if (type == "empty") {
        for (int i = 0;i < s.size();i++) {
            s[i] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while (n--) {
        string type; int num;
        cin >> type;
        if (type == "all" || type == "empty") {
            num = 0;
        }
        else {
            cin >> num;
        }
        program(type, num);
    }

    return 0;
}