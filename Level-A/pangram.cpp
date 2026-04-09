#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string p;
	cin >> p;
	int count[26] = { 0 };
	bool pangram = true;
	for (int i = 0;i < p.length();i++) {
		if (isupper(p[i])) {
		    p[i] = tolower(p[i]);
		}
		for (int j = 0;j < 26;j++) {
			if (p[i] == j + 'a') {
				count[j]++;
			}
			for (int k = 0;k < 26;k++) {
				if (count[k] > 0) {
					pangram = true;

				}
				else {
					pangram = false;
					break;
				}
			}
		}
		
	}

		if (pangram) {
		cout << "YES";
	}
	else {
		cout << "NO";
		}
	
}