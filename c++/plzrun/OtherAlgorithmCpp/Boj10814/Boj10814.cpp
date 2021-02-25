#include <iostream>

using namespace std;

int day[100001];
string name[100001];
int* merge_day;
string* merge_name;

void merge(int left, int right) {
	int mid = (left + right) / 2;
	
	int i = left;
	int j = mid+1;
	int k = left;
	
	while(i<=mid&&j<=right)
		if (day[i] <= day[j]) {
			merge_day[k] = day[i];
			merge_name[k] = name[i];
			k++;
			i++;
		}
		else {
			merge_day[k] = day[j];
			merge_name[k] = name[j];
			k++;
			j++;
		}

	int temp = i > mid ? j : i;

	while (k <= right) {
		merge_day[k] = day[temp];
		merge_name[k] = name[temp];
		k++;
		temp++;
	}

	for (int i = left; i <= right; i++) {
		day[i] = merge_day[i];
		name[i] = merge_name[i];
	}

	return;
}

void partition(int left, int right){
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		partition(left, mid);
		partition(mid + 1, right);
		merge(left, right);
	}

	return;
}


int main() {
	int number;

	cin >> number;

	merge_day = new int[number+1];
	merge_name = new string[number + 1];

	for (int i = 1; i <= number; i++) {
		cin >> day[i];
		cin >> name[i];
	}

	partition(1, number);

	delete[] merge_day;
	delete[] merge_name;

	for (int i = 1; i <= number; i++)
		cout << day[i]<<" "<< name[i]<<'\n';

	return 0;
}