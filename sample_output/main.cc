#include <iostream>

int main() {
	// print a string to terminal and make a newline using \n
	std::cout << "Hello World!\n";

	// print a string to terminal and make a new line using std::endl
	std::cout << "Hello World!" << std::endl;

	// print a one line rect with hello inside
	std::cout << "+-------+\n| Hello |\n+-------+\n";

	// print a multiline rect with hello world inside
	std::cout << 
		"+-------------+\n"
		"|             |\n"
		"| hello world |\n"
		"|             |\n"
		"+-------------+\n";

	return 0;
}
