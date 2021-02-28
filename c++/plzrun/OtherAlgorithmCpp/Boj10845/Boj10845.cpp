#include <iostream>
#include <queue>
//queue ť
using namespace std;

int main() {
	int number;

	cin >> number;

	queue<int> que;
	string str;


	for (int i = 0; i < number; i++) {
		cin >> str;

		if (str == "push") {
			int num;
			cin >> num;
			que.push(num);
		}
		else if (str == "pop") {
			if (!que.empty()) {
				cout << que.front()<< '\n';
				que.pop();
			}
			else
				cout << -1 << '\n';
		}
		else if (str == "size")
			cout << que.size() << '\n';
		else if (str == "empty") {
			if (que.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (str == "front") {
			if (!que.empty())
				cout << que.front() << '\n';
			else
				cout << -1 << '\n';
		}
		else if (str == "back") {
			if (!que.empty())
				cout << que.back()<< '\n';
			else
				cout << -1 << '\n';
		}
	}

	return 0;
}