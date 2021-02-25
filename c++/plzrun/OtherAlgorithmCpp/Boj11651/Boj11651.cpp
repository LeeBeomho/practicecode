#include <iostream>
//merge sort

using namespace std;

int arr[2][1000001];
int* merge_arr[2];

void merge(int index, int left, int right) {
	int mid = (left + right) / 2;

	int i = left;
	int j = mid + 1;
	int k = left;


	while (i <= mid && j <= right) //
		if (arr[index][i] <= arr[index][j]) { // 왼쪽과 오른쪽 비교
			for (int z = 0; z < 2; z++)
				merge_arr[z][k] = arr[z][i];
			k++;
			i++;
		}
		else {
			for (int z = 0; z < 2; z++)
				merge_arr[z][k] = arr[z][j];
			k++;
			j++;
		}
	int temp = i > mid ? j : i;

	while (k <= right) {
		for (int z = 0; z < 2; z++)
			merge_arr[z][k] = arr[z][temp];
		k++;
		temp++;
	}

	for (int i = left; i <= right; i++)
		for (int z = 0; z < 2; z++)
			arr[z][i] = merge_arr[z][i];

}

void partition(int index, int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		partition(index, left, mid);
		partition(index, mid + 1, right);
		merge(index, left, right);
	}

}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int number;

	cin >> number;

	merge_arr[0] = new int[number];
	merge_arr[1] = new int[number];

	for (int i = 1; i <= number; i++) {
		cin >> arr[0][i];
		cin >> arr[1][i];
	}

	partition(1, 1, number);

	int left = 1;
	for (int i = 2; i <= number; i++)
		if (arr[1][left] != arr[1][i]) {
			partition(0, left, i - 1);
			left = i;
		}
		else if (i == number)
			partition(0, left, i);

	for (int i = 1; i <= number; i++)
		cout << arr[0][i] << " " << arr[1][i] << '\n';


	return 0;
}