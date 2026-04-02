/*
problemset: https://codeforces.com/problemset/problem/71/A
discription: this is a simple code, in this code I made a for loop that loops as many times as the user inputs and
makes him enter a word for every loop, the question asks that the word should be over 10 leters for the condition to 
be done, so in my code if the word is over 10 letters it has to be printed as (letter number letter) if not over 10 it
just prints the word normaly.
*/



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
