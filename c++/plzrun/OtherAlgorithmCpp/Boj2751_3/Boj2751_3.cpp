#include <iostream>
//bubble sort

using namespace std;

int arr[1000001];

int main() {
	int number;

	cin >> number;

	for (int i = 1; i <= number; i++)
		cin >> arr[i];

	for(int i=1; i<number; i++)
		for(int j=1; j<number-i+1; j++)
			if (arr[j] < arr[j + 1]) {
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = arr[j];
			}
				

	for (int i = 1; i <= number; i++)
		cout << arr[i] << endl;


	return 0;
}