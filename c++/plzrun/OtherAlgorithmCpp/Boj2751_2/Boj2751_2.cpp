#include <iostream>
//insertion sort

using namespace std;

int arr[1000001];

int main(){
	int number;

	cin >> number;

	for (int i = 1; i <= number; i++)
		cin >> arr[i];

	for (int i = 2; i <= number; i++) {
		arr[0] = arr[i];

		for (int j = 1; j <= i; j++)
			if (arr[0] < arr[i - j])
				arr[i - j + 1] = arr[i - j];
			else
				arr[i - j+1] = arr[0];
	}

	for (int i = 1; i <= number; i++)
		cout << arr[i] << endl;


	return 0;
}