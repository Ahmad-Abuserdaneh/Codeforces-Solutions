#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		int b[100];
		for (int j = 0; j < i-1; j++) {
			cin >> b[j];
			for (int k = 0; k < j; k++) {
				if (b[j] != b[k]) {
					cout << j + 1 << endl;
				}
			}

		}
		
	}
}