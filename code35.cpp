//https://practice.geeksforgeeks.org/problems/pattern-searching/0
//string find function
// npos
//KMP O(n) complexity
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	while ( t-- )
	{
	    string s1, s2;
	    cin >> s1 >> s2;
	    int found = s1.find(s2);
	    if ( found != string::npos )
	        cout << "found\n";
	    else cout << "not found\n";
	}
	return 0;
}
