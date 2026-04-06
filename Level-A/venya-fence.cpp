#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, h,r=0;
	cin >> n >> h;
	vector<int> a(n);
	for (int i=0;i < n;i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > h) {
			r += 2;
		} else {
			r++;
		}
	}
	cout << r << endl;

}