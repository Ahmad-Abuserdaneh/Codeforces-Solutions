#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	int x, y;
	cin >> x;
	vector<int> wp(x);
	
	for(int i = 0; i < x; i++) {
		cin >> wp[i];
	}
	cin >> y;
	vector<int> wq(y);
	int counter = x + y;
	for(int i = 0; i < y; i++) {
		cin >> wq[i];
	}
	for(int i = 0; i < x; i++) {
		for(int j = 0; j < y; j++) {
			if(wp[i] == wq[j]) {
				counter--;
			}
		}
	}
	if(counter== n) {
		cout << "I become the guy.";
	} else {
		cout << "Oh, my keyboard!";
	}
	
}