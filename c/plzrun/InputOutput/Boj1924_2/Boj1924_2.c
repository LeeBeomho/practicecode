#include <stdio.h>
#include <string.h>

int main() {
	int month, day;
	char* week[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	int date[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int startday;
	int totalday = 0;

	char* firstday = "MON"; //1 월 1 일 요일

	for (int i = 0; i < 7; i++)
		if (strcmp(week[i], firstday) == 0)
			startday = i;
	
	scanf_s("%d %d", &month, &day);

	for (int i = 1; i < month; i++) {
		totalday += date[i];
	}
	totalday += day;

	printf("%s", week[(startday + totalday - 1) % 7]);
	

	return 0;
}