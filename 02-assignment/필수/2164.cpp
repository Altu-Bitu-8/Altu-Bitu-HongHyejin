#include <iostream>
#include <deque>

using namespace std;

int card(int n) {
    deque<int> card;
    //������� �Է�
    for (int i = 1;i <= n;i++) {
        card.push_back(i);
    }
    //ī�尡 2�� �̻��� ��
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