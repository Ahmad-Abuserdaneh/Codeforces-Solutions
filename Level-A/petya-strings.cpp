/*
problemset: https://codeforces.com/group/Q1MFeozT3I/contest/683116/problem/E
discription: in this problem they asked me to give every letter a number and gets higher in order a<b<c... and the caps are equal to the 
origenal charecter, so i used a loop that loops as many times as the word's length, and made it that if the letter thats inserted by the 
user is upper case it turns it to lower so that all letters are equal (a and A or b and B) and the math works,and finaly if the first word's value is
higher than the second it prints 1 if equal 0 if the second is bigger -1.
*/

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
