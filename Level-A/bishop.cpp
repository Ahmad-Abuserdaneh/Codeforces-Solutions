
#include <iostream>
using namespace std;

int main()
{
	string b[8];

	int t;
	cin >> t;
	for (int z = 0;z < t;z++) {
		int count[8] = { 0 };
		int count2[8] = { 0 };
		for (int i = 0;i < 8;i++) {
			cin >> b[i];
		}
		for (int i = 0;i < 8;i++) {
			for (int j = 0;j < 8;j++) {
				if (b[i][j] == '#') {
					count[i]++;
				}
			}
		}
		for (int i = 0;i < 8;i++) {
			if ((count[i] == 2) && (count[i + 1] == 1) && (count[i + 2] == 2)) {
				cout << i + 2 << " ";
			}
		}
		for (int i = 0;i < 8;i++) {
			for (int j = 0;j < 8;j++) {
				if (b[j][i] == '#') {
					count2[i]++;
				}
			}
		}
		for (int i = 0;i < 8;i++) {
			if ((count2[i] == 2) && (count2[i + 1] == 1) && (count2[i + 2] == 2)) {
				cout << i + 2<<endl;
			}
		}
	}

}