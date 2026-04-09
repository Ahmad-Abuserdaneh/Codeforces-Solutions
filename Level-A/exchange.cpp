#include <iostream>
using namespace std;
int main() {
	int t,n, a, b;
	cin >> t;
	int z;
	for (int i = 0;i < t;i++) {
		cin >> n >> a >> b;
		if(a>b){
			z = (n / a) + 1;
		}
		else {
			z = (n / b) + 1;
		}
		cout << z << endl;
	}

}