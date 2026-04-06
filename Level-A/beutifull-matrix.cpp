#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n[5][5];
	int count=0;
	for (int i = 0;i < 5;i++) {
		for(int j=0;j<5;j++){
			cin>>n[i][j];
		 }
	 }
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++) {
			if (n[i][j] == 1) {
				count=abs(i-2)+abs(j-2);
				cout << count;
			}
		}
	}
}