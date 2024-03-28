
// getline.cpp - John K. Estell - 07 October 2011
// demo of reading in a string from the keyboard
#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str) {
	int length = str.size();
	return length; 

}

int main(void) {
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;
		
		int stringLength = countCharacter(input);
		cout << stringLength << endl; 

		
	}
	return 0;
}