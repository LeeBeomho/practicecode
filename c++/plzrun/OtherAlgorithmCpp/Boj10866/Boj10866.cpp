#include <iostream>
#include <deque>
//queue ť
using namespace std;

int main() {
	int number;

	cin >> number;

	deque<int> dq;
	string str;


	for (int i = 0; i < number; i++) {
		cin >> str;

		if (str == "push_front") {
			int num;
			cin >> num;
			dq.push_front(num);
		}
		else if(str == "push_back") {
			int num;
			cin >> num;
			dq.push_back(num);
		}
		else if (str == "pop_front") {
			if (!dq.empty()) {
				cout << dq.front() << '\n';
				dq.pop_front();
			}
			else
				cout << -1 << '\n';
		}
		else if (str == "pop_back") {
			if (!dq.empty()) {
				cout << dq.back() << '\n';
				dq.pop_back();
			}
			else
				cout << -1 << '\n';
		}
		else if (str == "size")
			cout << dq.size() << '\n';
		else if (str == "empty") {
			if (dq.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (str == "front") {
			if (!dq.empty())
				cout << dq.front() << '\n';
			else
				cout << -1 << '\n';
		}
		else if (str == "back") {
			if (!dq.empty())
				cout << dq.back() << '\n';
			else
				cout << -1 << '\n';
		}
	}

	return 0;
}