/*
problemset:https://codeforces.com/problemset/problem/71/A
discription: in this code it asks me to switch the uppercase letters to lowercase if the whole word is in uppercase and to make the 
first letter lowercase if the whole word is in uppercase but the first letter,I used a simple way to do it,I had 3 strings and made them
equal and used 2 bools, first bool is for the case of the first letter being lower but the rest is in uppercase, and the selcond is
for the case of the whole word being in uppercase, and made 2 loops that go through the whole word to check if any of the conditions are
met for it to change, if none of the conditions are met the word is printed unchaged.
*/


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string word1,word2,word3;
	cin >> word1;
	word3 = word1;
	word2 = word1;
	int n;
	n = word1.length();
	bool allmetconditions = true;
	bool allcaps = true;
	for (int i = 1;i < n;i++) {

		if (islower(word1[0])&&isupper(word1[i])) {
			word1[i] = tolower(word1[i]);
		}
		else {
			
				allmetconditions = false;
			break;
		}
	}
	for (int i = 0;i < n;i++) {
		if ((n == 1) ) {
			if(isupper(word1[0]))
			allmetconditions = false;
		}
		if (isupper(word2[i])) {
			word2[i] = tolower(word2[i]);
		}
		else {
			allcaps = false;
			break;
		}
	}
	if (allmetconditions) {
		word1[0] = toupper(word1[0]);
		cout << word1;
	}
	else if (allcaps) {
		cout << word2;
	}
	else {
		cout << word3;
	}
	
}
