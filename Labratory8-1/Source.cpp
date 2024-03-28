
// getline.cpp - John K. Estell - 07 October 2011
// demo of reading in a string from the keyboard
#include <iostream>
#include <string>
using namespace std;

int countVowels(const string& str) {
	int count = 0;
	for (char ch : str) {
		
		char lowercaseCh = tolower(ch);
		if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u') {
			count++;
		}
	}
	return count;
}

int main(void) {
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;
		
		int stringCount = countVowels(input);
		cout << stringCount << endl; 


		
	}
	return 0;
}