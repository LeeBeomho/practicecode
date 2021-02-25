#include <iostream>
#include <cstring>
//merge sort

using namespace std;

int arr[3][100001];
string name[100001];
int* merge_arr[3];
string* merge_name;

void merge(int compare_arr[], int left, int right) {
	int mid = (left + right) / 2;

	int i = left;
	int j = mid + 1;
	int k = left;


	while (i <= mid && j <= right) //
		if (compare_arr[i] <= compare_arr[j]) { // 왼쪽과 오른쪽 비교
			for (int z = 0; z < 3; z++)
				merge_arr[z][k] = arr[z][i];
			merge_name[k] = name[i];
			k++;
			i++;
		}
		else {
			for (int z = 0; z < 3; z++)
				merge_arr[z][k] = arr[z][j];
			merge_name[k] = name[j];
			k++;
			j++;
		}
	int temp = i > mid ? j : i;

	while (k <= right) {
		for (int z = 0; z < 3; z++)
			merge_arr[z][k] = arr[z][temp];
		merge_name[k] = name[temp];
		k++;
		temp++;
	}

	for (int i = left; i <= right; i++) {
		for (int z = 0; z < 3; z++)
			arr[z][i] = merge_arr[z][i];
		name[i] = merge_name[i];
	}

}
void merge(string comepare_string[], int left, int right) {
	int mid = (left + right) / 2;

	int i = left;
	int j = mid + 1;
	int k = left;


	while (i <= mid && j <= right) //
		if (comepare_string[j].compare(comepare_string[i])>=0) { // 왼쪽과 오른쪽 비교
			for (int z = 0; z < 3; z++)
				merge_arr[z][k] = arr[z][i];
			merge_name[k] = name[i];
			k++;
			i++;
		}
		else {
			for (int z = 0; z < 3; z++)
				merge_arr[z][k] = arr[z][j];
			merge_name[k] = name[j];
			k++;
			j++;
		}
	int temp = i > mid ? j : i;

	while (k <= right) {
		for (int z = 0; z < 3; z++)
			merge_arr[z][k] = arr[z][temp];
		merge_name[k] = name[temp];
		k++;
		temp++;
	}

	for (int i = left; i <= right; i++) {
		for (int z = 0; z < 3; z++)
			arr[z][i] = merge_arr[z][i];
		name[i] = merge_name[i];
	}

}

void partition(int compare_arr[], int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		partition(compare_arr, left, mid);
		partition(compare_arr, mid + 1, right);
		merge(compare_arr, left, right);
	}

}

void partition(string compare_string[], int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		partition(compare_string, left, mid);
		partition(compare_string, mid + 1, right);
		merge(compare_string, left, right);
	}

}

void inverse_array(int number) {
	int temp;
	string temp_string;

	for (int i = 1; i <= number / 2; i++) {
		for (int z = 0; z < 3; z++) {
			temp = arr[z][i];
			arr[z][i] = arr[z][number - i + 1];
			arr[z][number - i + 1] = temp;
		}
		temp_string = name[i];
		name[i] = name[number - i + 1];
		name[number - i + 1] = temp_string;
	}
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int number;

	cin >> number;
	for (int z = 0; z < 3; z++)
		merge_arr[z] = new int[number+1];
	merge_name = new string[number + 1];

	for (int i = 1; i <= number; i++) {
		cin >> name[i];
		cin >> arr[0][i];
		cin >> arr[1][i];
		cin >> arr[2][i];
	}



	partition(arr[0], 1, number);

	inverse_array(number);

	int left = 1;
	for (int i = 2; i <= number; i++)
		if (arr[0][left] != arr[0][i]) {
			partition(arr[1], left, i - 1);
			left = i;
		}
		else if (i == number)
			partition(arr[1], left, i);

	inverse_array(number);

	left = 1;
	for (int i = 2; i <= number; i++)
		if (arr[0][left] != arr[0][i]||arr[1][left] != arr[1][i]) {
			partition(arr[2], left, i - 1);
			left = i;
		}
		else if (i == number)
			partition(arr[2], left, i);

	inverse_array(number);

	left = 1;
	for (int i = 2; i <= number; i++)
		if (arr[0][left] != arr[0][i] || arr[1][left] != arr[1][i]|| arr[2][left] != arr[2][i]) {
			partition(name, left, i - 1);
			left = i;
		}
		else if (i == number)
			partition(name, left, i);

	for (int i = 1; i <= number; i++)
		cout << name[i]<< '\n';


	return 0;
}