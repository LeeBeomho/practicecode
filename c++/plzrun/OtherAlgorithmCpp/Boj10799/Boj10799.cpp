#include <iostream>
#include <stack>
//stack 선입후출

using namespace std;

int main() {
	int number=0;
	string parenthesis;
	bool check = true;
	stack<char> st;

	cin >> parenthesis;


	for (int j = 0; j < parenthesis.size(); j++)
		if (parenthesis[j] == '(')
			st.push('(');
		else if (parenthesis[j] == ')'&& parenthesis[j-1] == '('){
			st.pop();
			number += st.size();
		}
		else {
			st.pop();
			number++;
		}
	number += st.size();

	cout << number;

	return 0;
}