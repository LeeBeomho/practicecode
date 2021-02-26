#include <iostream>
//count sort+merge sort

using namespace std;

long long card[100001];
int card_number[100001];
long long* merge_card;
int* merge_card_number;

void merge(long long compare_arr[], int left, int right) {
	int mid = (left + right) / 2;

	int i = left;
	int j = mid + 1;
	int k = left;


	while (i <= mid && j <= right) //
		if (compare_arr[i] <= compare_arr[j]) { // 왼쪽과 오른쪽 비교
			merge_card[k] = card[i];
			merge_card_number[k] = card_number[i];
			k++;
			i++;
		}
		else {
			merge_card[k] = card[j];
			merge_card_number[k] = card_number[j];
			k++;
			j++;
		}
	int temp = i > mid ? j : i;

	while (k <= right) {
		merge_card[k] = card[temp];
		merge_card_number[k] = card_number[temp];
		k++;
		temp++;
	}

	for (int i = left; i <= right; i++){
			card[i] = merge_card[i];
			card_number[i] = merge_card_number[i];
	}

	return;
}

void partition(long long compare_arr[], int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		partition(compare_arr, left, mid);
		partition(compare_arr, mid + 1, right);
		merge(compare_arr, left, right);
	}

	return;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int number;
	long long input;

	cin >> number;

	int k = 1;
	for (int i = 1; i <= number; i++) {
		int check = 0;
		cin >> input;
		for (int j = 0; j < k; j++)
			if (input == card[j]) {
				card_number[j]++;
				check = 1;
				break;
			}
		if (check == 0) {
			card[k] = input;
			card_number[k++]++;
		}
	}

	cout << '\n';
	for (int i = 0; i < k; i++)
		cout << card[i] << " " << card_number[i] << '\n';

	int max_count = 0, max = 0;
	for (int i = 0; i < k; i++) {
		if (max == card_number[i]) {
			max_count++;
			card_number[max_count - 1] = max;
			card[max_count - 1] = card[i];
		}
		if (card_number[i] > max) {
			max = card_number[i];
			max_count = 1;
			card_number[max_count - 1] = max;
			card[max_count - 1] = card[i];
		}
	}
	merge_card = new long long[max_count];
	merge_card_number = new int[max_count];

	cout << '\n';
	for (int i = 0; i < k; i++)
		cout << card[i] << " " << card_number[i] << '\n';

	partition(card, 0, max_count - 1);
	
	cout << '\n';
	for (int i = 0; i < k; i++)
		cout << card[i] << " " << card_number[i] << '\n';

	delete[] merge_card;
	delete[] merge_card_number;

	cout << '\n';
	cout << card[0];


	return 0;
}