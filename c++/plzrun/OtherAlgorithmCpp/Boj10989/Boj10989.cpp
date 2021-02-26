#include <iostream>
//count sort

using namespace std;

int count_number[10001];

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int number, input;
	cin >> number;

	for (int i = 1; i <= number; i++) {
		cin >> input;
		count_number[input]++;
	}

	for (int i = 1; i <= 10000; i++)
		for (int j = 0; j < count_number[i]; j++)
			cout << i << '\n';

	return 0;
}