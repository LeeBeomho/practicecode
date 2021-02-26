#include <iostream>
//merge sort후 count

using namespace std;

long long card[100001];
long long* merge_card;

void merge(int left, int right) {
	int mid = (left + right) / 2;

	int i = left;
	int j = mid + 1;
	int k = left;


	while (i <= mid && j <= right) //
		if (card[i] <= card[j])// 왼쪽과 오른쪽 비교
			merge_card[k++] = card[i++];
		else
			merge_card[k++] = card[j++];
	int temp = i > mid ? j : i;

	while (k <= right)
		merge_card[k++] = card[temp++];

	for (int i = left; i <= right; i++)
		card[i] = merge_card[i];

	return;
}

void partition(int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		partition( left, mid);
		partition( mid + 1, right);
		merge( left, right);
	}

	return;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int number;

	cin >> number;

	int k = 1;
	for (int i = 1; i <= number; i++)
		cin >> card[i];

	merge_card = new long long[number+1];

	partition(1, number);

	delete[] merge_card;

	int max_count = 1, max = 1;
	long long maxCountMinValue=card[1];
	for (int i = 2; i <= number; i++) {
		if (card[i - 1] == card[i])
			max_count++;
		else
			max_count = 1;
		if (max<max_count) {
			max = max_count;
			maxCountMinValue = card[i];
		}
	}

	cout << maxCountMinValue;


	return 0;
}

//https://code-kh-studio.tistory.com/75
//최대한 n번만 하게하자 n!이나 n^2 하지말걸