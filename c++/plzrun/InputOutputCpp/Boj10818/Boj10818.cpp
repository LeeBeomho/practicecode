#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n;
	int input;
	int min=INT_MAX;
	int max=INT_MIN;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;

		if (min > input)
			min = input;
		if (max < input)
			max = input;
	}

	cout << min << " " << max << endl;

	return 0;
}