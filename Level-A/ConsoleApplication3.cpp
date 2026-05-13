#include <iostream>
#include <vector>
using namespace std;
int main() {
	int t;
	cin >> t;

	
	for (int i = 0;i < t;i++) {
		bool thisone = true;
		int n, k;
		cin >> n >> k;
		vector<int>f(n);
		for (int z = 0;z < n;z++) {
			cin >> f[z];
		}
		if (k >= 2) {
			thisone = true;
		}
		else {
			for (int x = 0;x <= n - 2;x++) {
				if (f[x] > f[x + 1]) {
					thisone = false;
					break;
				}
			}
		}
		if (thisone) {
			cout << "YES" << endl;
			}
		else {
			cout << "NO" << endl;
		}


	}
}