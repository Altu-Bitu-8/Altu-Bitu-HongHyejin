#include <iostream>
#include <queue>
#include <vector>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> pq; //min_heap���� �ٲ��ش�.  

	for (int i = 0;i < n * n;i++) {
		int x;
		cin >> x;
		if (pq.size() < n) { //n������ �Է¹��� ���̹Ƿ�
			pq.push(x);
		}
		else if (pq.size() == n && pq.top() < x) {
			//�̹� n���� ���ְ� ���� ���� x�� ť�� ����ִ� ���� ���� ������ Ŭ ��
			pq.pop();
			pq.push(x);
		}
		else {
			continue; //�������� ����. 
		}

	}

	cout << pq.top();

	return 0;
}