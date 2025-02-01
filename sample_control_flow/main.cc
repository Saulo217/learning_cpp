#include <iostream>
using namespace std;

int main() {
	int guess;
	cout << "+------------------+" << endl;
	cout << "| Guess the number |" << endl;
	cout << "+------------------+" << endl;

	cout << "Type a number between 0 and 10: \n" << endl;
	cin >> guess;

	if(guess == (rand() % 10))
		cout << "Congratulations you've guessed right" << endl;
	else
		cout << "No, this is not  the right number" << endl;
	return 0;
}
