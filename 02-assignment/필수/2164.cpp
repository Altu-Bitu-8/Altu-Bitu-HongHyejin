#include <iostream>
#include <deque>

using namespace std;

int card(int n) {
    deque<int> card;
    //순서대로 입력
    for (int i = 1;i <= n;i++) {
        card.push_back(i);
    }
    //카드가 2개 이상일 때
    while (card.size() > 1) {
        card.pop_front();
        int front = card.front();
        card.pop_front();
        card.push_back(front);
    }
    return card.front();
}

int main() {
    int n;
    cin >> n;
    int result = card(n);
    cout << result;
    return 0;
}