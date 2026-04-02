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
