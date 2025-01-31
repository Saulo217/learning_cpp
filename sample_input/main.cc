#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	
	int age, amount_songs;
	string name, amount_songs_string;
	
	cout << "Type your age: \n";
	cin >> age;
	
	cout << "Type your name: \n";
	getline(cin >> ws, name);
	
	cout << "Hi " << name << "!" << endl;
	cout << "Your age is: " << age << "!" << endl;
	cout << "You have a good age\n";

	cout << "Now tell me, how may songs you listen per day?" << endl;
	cin >> amount_songs_string;

	stringstream(amount_songs_string) >> amount_songs;
	cout << "Wow! you listen " << (amount_songs * 30) << " songs per month" << endl;
	cout << "You should have very good taste for music!" << endl;

	return 0;
}
