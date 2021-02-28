#include <iostream>
#include <string>
#include <stack>
//리스트, 스택

using namespace std;

stack<char> head, tail;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string str;
	int number;

	cin >> str;

	for (int i = 0; i < str.length(); i++)
		head.push(str[i]);

	cin >> number;

	for (int i = 0; i < number; i++) {
		char command;

		cin >> command;

		switch (command) {
		case 'L':
			if (!head.empty()) {
				tail.push(head.top());
				head.pop();
			}
			break;
		case 'D':
			if (!tail.empty()) {
				head.push(tail.top());
				tail.pop();
			}
			break;
		case 'B':
			if (!head.empty())
				head.pop();
			break;
		case 'P':
			char c;
			cin >> c;
			head.push(c);
			break;
		}
	}

	while (!head.empty()) {
		tail.push(head.top());
		head.pop();
	}

	while (!tail.empty()) {
		cout << tail.top();
		tail.pop();
	}

	return 0;
}

//https://jaimemin.tistory.com/1048