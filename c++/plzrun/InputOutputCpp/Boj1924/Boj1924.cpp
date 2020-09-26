#include <iostream>
#include <string>

using namespace std;

int main() {
	int month, day;
	string week[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	int date[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int startday;

	string year[13][32];

	year[1][1] = "MON";

	for (int i = 0; i < 7; i++)
		if (year[1][1].compare(week[i]) == 0)
			startday = i;
	

	for (int i = 1; i < 13; i++)
		for (int j = 1; j <= date[i]; j++) {
			year[i][j] = week[startday % 7];
			startday++;
		}
	
	cin >> month >> day;

	cout<<year[month][day]<<endl;


	return 0;
}