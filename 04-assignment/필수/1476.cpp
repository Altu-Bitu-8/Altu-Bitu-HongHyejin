#include <iostream>

using namespace std;

int year(int e, int s, int m) {
    int ans = 1;
    while (true) {
        if ((ans - e) % 15 == 0 && (ans - s) % 28 == 0 && (ans - m) % 19 == 0) {
            return ans;
        }
        ans++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int e, s, m;
    cin >> e >> s >> m;
    cout << year(e, s, m);
    return 0;
}