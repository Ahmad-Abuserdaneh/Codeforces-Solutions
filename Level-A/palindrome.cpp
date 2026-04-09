#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string hitler;
	cin >> hitler;
	string stalin;
	stalin = hitler;
	reverse(stalin.begin(), stalin.end());
	int s = hitler.length();
	int counter = 0;
		for (int i = 0;i < s/2;i++) {
			if (hitler[i] != stalin[i]) {
				counter++;
			}
		}
		if (counter > 1) {
			cout << "NO";
	
		}
		else if(counter==1){
			cout << "YES";
		}
		else if (s % 2 != 0 && counter==0) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}

}