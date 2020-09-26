#include <iostream>
#include <string>

using namespace std;

int main() {
	int month, day;
	string week[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	int date[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int startday;

	string firstday = "MON";

	int totalday=0;

	
	for (int i = 0; i < 7; i++)
		if (firstday.compare(week[i]) == 0)
			startday = i;

	cin >> month >> day;

	for (int i = 1; i < month; i++)
		totalday += date[i];
	totalday += day;
	

	cout << week[(startday+totalday-1)%7] << endl;


	return 0;
}