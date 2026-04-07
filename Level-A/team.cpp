#include <iostream>
using namespace std;
int main() {
	int n, a[3];
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3;j++) {
			cin >> a[j];
		}
		if (a[0] == 1 && a[1] == 1) {
			sum++;
		}
		else if (a[0] == 1 && a[2] == 1) {
			sum++;
		}
		else if (a[1] == 1 && a[2] == 1) {
			sum++;
		}

	}
	std::
	cout << sum;
}