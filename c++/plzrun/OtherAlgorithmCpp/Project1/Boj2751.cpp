#include <iostream>
//selection sort 시간초과

using namespace std;

int arr[1000001];

int main(){
	int number;

	cin >> number;

	for (int i = 1; i <= number; i++)
		cin >> arr[i];

	for (int i = 1; i <= number; i++) {
		int min_index = i;
		for (int j = i + 1; j <= number; j++)
			if (arr[min_index] > arr[j])
				min_index = j;
		int temp = arr[min_index];
		arr[min_index] = arr[i];
		arr[i] = temp;
	}

	for (int i = 1; i <= number; i++)
		cout << arr[i] << endl;


	return 0;
}