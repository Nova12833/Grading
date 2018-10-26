// Grading program exercise
#include <iostream>

int main() {

	using namespace std;
	int grade;

	cout << "Please enter the score(0-100) that you earned\n\n";
	cin >> grade;
	cout << "\n\n\n\n";

	if (grade == 100) {
		cout << "Congratulations you got a perfect score!!!";
	}
	else if (grade >= 90 && grade <= 99) {
		cout << "you got an A";
	}
	else if (grade >= 80 && grade <= 89) {
		cout << "you got an B";
	}
	else if (grade >= 70 && grade <= 79) {
		cout << "you got an C";
	}
	else if (grade >= 60 && grade <= 69) {
		cout << "you got an D";
	}
	else if (grade >= 0 && grade <= 59) {
		cout << "You got an F";
	}
	else {
		cout << "The score you entered was not valid";
	}

	return 0;
}