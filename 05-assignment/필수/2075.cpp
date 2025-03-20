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
	priority_queue<int, vector<int>, greater<int>> pq; //min_heap으로 바꿔준다.  

	for (int i = 0;i < n * n;i++) {
		int x;
		cin >> x;
		if (pq.size() < n) { //n까지만 입력받을 것이므로
			pq.push(x);
		}
		else if (pq.size() == n && pq.top() < x) {
			//이미 n개가 차있고 새로 넣을 x가 큐에 들어있는 가장 작은 값보다 클 때
			pq.pop();
			pq.push(x);
		}
		else {
			continue; //나머지는 무시. 
		}

	}

	cout << pq.top();

	return 0;
}