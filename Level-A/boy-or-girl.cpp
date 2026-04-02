

#include <iostream>
using namespace std;

int main()
{
    string word;
    cin >> word;
    int n,m;
    n = word.length();
    m = word.length();
    for (int i = 1;i < m;i++) {
        for (int j = 0;j < i;j++) {
            if ((word[i] == word[j])) {
                n--;
                break;
            }
        }
    }
    if (n % 2 == 0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
}

