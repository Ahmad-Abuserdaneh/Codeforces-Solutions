/*
problemset: https://codeforces.com/group/Q1MFeozT3I/contest/683116/problem/H
discription: this is kind of a simple but good way and some mgiht think its a bit unorthodox, usualy for a problem like this people use a bool
yet in this one i did it in a way thats easier to understand, the problem asked me to check if those 2 friends can finish a certain game with
one of them being able to do a number of levels and the other being able to do another number of levlels, I let the user enter the number of levels
and I intialized the number of levels the first can finish and the number the second can finish, and then i made a vector array for the first 
player and I will make another for the other a few lines later, I made 2 loops that make the user enter the levels that each of them can finish,
and finaly i made a nested loop to check if any of the levels mach and if they do i minus 1 from the counter(y+x) and I finaly print the counter.
*/

#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	int x, y;
	cin >> x;
	vector<int> wp(x);
	
	for(int i = 0; i < x; i++) {
		cin >> wp[i];
	}
	cin >> y;
	vector<int> wq(y);
	int counter = x + y;
	for(int i = 0; i < y; i++) {
		cin >> wq[i];
	}
	for(int i = 0; i < x; i++) {
		for(int j = 0; j < y; j++) {
			if(wp[i] == wq[j]) {
				counter--;
			}
		}
	}
	if(counter== n) {
		cout << "I become the guy.";
	} else {
		cout << "Oh, my keyboard!";
	}
	
}
