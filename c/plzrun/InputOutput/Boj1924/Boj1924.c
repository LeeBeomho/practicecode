#include <stdio.h>
#include <string.h>

int main() {
	int month, day;
	char *week[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	char *year[13][32];
	int startday;

	year[1][1] = "MON";

	for (int i = 0; i < 7; i++)
		if (strcmp(week[i], year[1][1])==0)
			startday = i;

	int date[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for (int i = 1; i <= 12; i++) {
		for (int j = 1; j <= date[i]; j++) {
			year[i][j] = week[startday % 7];
			startday++;
		}
	}


	scanf_s("%d %d", &month, &day);

	printf("%s", year[month][day]);

	return 0;
}