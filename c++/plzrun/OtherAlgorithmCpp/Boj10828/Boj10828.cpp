#include <iostream>
#include <stack> //스택
#include <string> //스트링

//stack 선입후출

using namespace std;

int main() {
	int number;
	
	cin >> number;

	stack<int> st;
	string str;


	for (int i = 0; i < number; i++) {
		cin >> str;

		if (str == "push") {
			int num;
			cin >> num;
			st.push(num);
		}
		else if (str == "pop") {
			if (!st.empty()) {
				cout << st.top() << '\n';
				st.pop();
			}
			else
				cout << -1 << '\n';
		}
		else if (str == "size")
			cout << st.size() << '\n';
		else if (str == "empty") {
			if (st.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (str == "top") {
			if (!st.empty())
				cout << st.top() << '\n';
			else
				cout << -1 << '\n';
		}
	}

	return 0;
}

//https://blockdmask.tistory.com/96