
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
    int t;
    string word;
    cin >> t;
    for (int i = 1;i <= t;i++) {
        cin >> word;
        if (word.length() >= 11) {
            cout << word[0];
            cout << (word.length() - 2);
            cout << word.back() << endl;
        }
        else if (word.length()) {
            cout << word << endl;
        }
    }
}