#include <iostream>
//merge sort

using namespace std;

int arr[1000001];
int* merge_arr;

void merge(int left, int right) {
	int mid = (left + right) / 2;

	int i = left;
	int j = mid + 1;
	int k = left;

	while (i <= mid && j <= right) //
		if (arr[i] <= arr[j]) // ���ʰ� ������ ��
			merge_arr[k++] = arr[i++]; //
		else
			merge_arr[k++] = arr[j++];

	int temp = i > mid ? j : i;

	while (k <= right) 
		merge_arr[k++] = arr[temp++];

	for (int i = left; i <= right; i++) 
		arr[i] = merge_arr[i];
}

void partition(int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		partition(left, mid);
		partition(mid + 1, right);
		merge(left, right);
	}

}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int number;

	cin >> number;

	merge_arr=new int[number+1];

	for (int i = 1; i <= number; i++)
		cin >> arr[i];

	partition(1, number);

	for (int i = 1; i <= number; i++)
		cout << arr[i] <<'\n';


	return 0;
}