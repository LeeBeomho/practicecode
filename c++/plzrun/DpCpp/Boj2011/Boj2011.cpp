#include <iostream>
#include <string>

using namespace std;

int dp[5001];

int main() {
	string number;

	cin >> number;

	if(number.length()>0)
		dp[0] = 1;
	for (int i = 1; i <=number.length(); i++) {
		if (number[i-1] > '0' && number[i-1] <= '9')
			dp[i] = dp[i - 1];
		
		if (i == 1) continue;

		int temp = number[i-1] - '0' + 10 * (number[i - 2] - '0');
		if (temp >= 10 && temp <= 26)
			dp[i] =(dp[i]+ dp[i - 2])%1000000;
	}

	if (number.length() == 1&& number[0] == '0')
		cout << 0;
	else
		cout << dp[number.length()];


	return 0;
}