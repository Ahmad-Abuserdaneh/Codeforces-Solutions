

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word1, word2;
	cin >> word1 >> word2;
	int n = word1.length();
	for (int i = 0;i < n;i++) {
		if (isupper(word1[i])) {
			word1[i]=tolower(word1[i]);
		}
		if (isupper(word2[i])) {
			word2[i]=tolower(word2[i]);
		}
	}
	if (word1 == word2) {
		cout << 0;
	}
	else if (word1 > word2) {
		cout << 1;
	}
	else {
		cout << -1;
	}
}
