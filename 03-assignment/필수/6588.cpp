#include <iostream>
#include <vector>

using namespace std;

void program(int num, vector <bool>& is_prime) {

    for (int i = 2;i <= num / 2;i++) {
        if (is_prime[i] && is_prime[num - i]) {
            cout << num << " = " << i << " + " << num - i << "\n";
            return;
        }
    }
    cout << "Goldbach's conjecture is wrong.";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int max_num = 1000000;

    //소수찾기 (에라토스테네스의 체)
    vector <bool> is_prime(max_num + 1, true);
    is_prime[0] = is_prime[1] = false; //0, 1은 소수가 아님
    for (int i = 2;i * i <= max_num;i++) {
        if (is_prime[i]) {
            for (int j = 2 * i;j <= max_num;j += i) {
                is_prime[j] = false;
            }
        }
    }

    int num = 1;
    while (true) {
        cin >> num;
        if (num == 0) return 0;
        program(num, is_prime);
    }
    return 0;
}