#include <iostream>
#include <string>

using namespace std;

int main() {

	while (true) {
		string str;
		

		getline(cin, str);

		if (str=="")
			break;

		int lower_case = 0, upper_case = 0, number = 0, empty = 0;
		for(int i=0; i<str.size(); i++)
			if (str[i] >= 'a' && str[i] <= 'z')
				lower_case++;
			else if (str[i] >= 'A' && str[i] <= 'Z')
				upper_case++;
			else if (str[i] >= '0' && str[i] <= '9')
				number++;
			else if (str[i] ==' ')
				empty++;

		cout << lower_case << " " << upper_case << " " << number << " " << empty << '\n';
	}

	return 0;
}
//https://blockdmask.tistory.com/233