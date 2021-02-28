#include <iostream>

using namespace std;

string arr[1001];
string* merge_arr;

void merge(int left, int right) {
	int mid = (left + right) / 2;

	int i = left;
	int j = mid+1;
	int k = left;
	
	while (i <= mid && j <= right)
		if (arr[i].compare(arr[j]) <= 0)
			merge_arr[k++] = arr[i++];
		else
			merge_arr[k++] = arr[j++];

	int temp = i > mid ? j : i;

	while (k <= right)
		merge_arr[k++] = arr[temp++];

	for (int i = left; i <= right; i++)
		arr[i] = merge_arr[i];


	return;
}

void partition(int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		partition(left, mid);
		partition(mid + 1, right);
		merge(left, right);
	}
	return;
}

int main() {
	string str;
	
	cin >> str;

	for (int i = 0; i < str.size(); i++)
		arr[i] = str.substr(i);

	merge_arr = new string[str.size()];

	partition(0, str.size()-1);

	for (int i = 0; i < str.size(); i++)
		cout << arr[i] << '\n';

	return 0;
}

//https://blockdmask.tistory.com/338