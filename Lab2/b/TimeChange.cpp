#include <iostream>
using namespace std;
void enterValues();
void calculate(int, int);
void print(int, int, int);

int main() {
	enterValues();
	return 0;
}
void enterValues() {
	char input=0;
	do {
		int hour, minutes;
		
		cout << "Enter Hour(24 hours notation) and minutes: " << endl;
		cin >> hour;
		cin >> minutes;
		if (hour <= 24 && hour > 0) {
			calculate(hour, minutes);
		}
		else {
			cout << "Invalid input" << endl;
		}
		cout << "Want to repeat? "  << endl;
		cin >> input;
	} while (input == 'Y' || input == 'y');

	
	

}
void calculate(int hour, int minutes) {
	int newHour;
	if (hour > 12) {
		  newHour = hour - 12;
	}
	else {
		newHour = hour;
	}
	
	print(hour, newHour, minutes);
}
void print(int hour, int newHour, int minutes) {
	char format;
	if (hour >= 12) {
		format = 'P';
	}
	else {
		format = 'A';
	}
	cout << "New format: " << newHour << ":" << minutes << format << endl;
	

}
