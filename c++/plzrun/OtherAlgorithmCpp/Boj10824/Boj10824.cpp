#include <iostream>

using namespace std;

int main() {
	string str[2];
	long long result=0;

	for (int i = 0; i < 2; i++) {
		string input;
		cin >> input;
		str[i]=input;
		cin >> input;
		str[i] += input;
	}

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < str[i].size(); j++) {
			long long decimal_number=1;
			for (int k = 0; k < str[i].size()-j-1; k++)
				decimal_number *= 10;
			result += (long long)(str[i][j]-'0') * decimal_number;
		}

	cout << result;

	return 0;
}

//https://kih0902.tistory.com/31
//자료형이 틀림