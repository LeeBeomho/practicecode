#include <iostream>
#include <stack>
//stack 선입후출

using namespace std;

int main() {
	int number;

	cin >> number;

	for (int i = 0; i < number; i++) {
		string parenthesis;
		bool check = true;
		stack<char> st;

		cin >> parenthesis;
		

		for (int j = 0; j < parenthesis.size(); j++)
			if (parenthesis[j] == '(')
				st.push('(');
			else if (parenthesis[j] == ')') {
				if (st.empty()) {
					check = false;
					break;
				}
				else
					st.pop();
			}

		if (st.empty()&&check)
			cout << "YES"<<'\n';
		else
			cout << "NO" << '\n';

	}

	return 0;
}