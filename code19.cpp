//https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem/0

#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, n;
	cin >> t;

	unordered_map <char, int> mymap;

	char ch[] = { '!', '#', '$', '%', '&', '*', '@', '^', '~' };

	while (t--)
	{
	    char ar1[9];
	    char ar2[9];

	    cin >> n;

	    for ( int i = 0; i < n; i++ )
	    {
	        cin >> ar2[i];
	        //mymap[ar2[i]] = 1;
	    }

	    for ( int i = 0; i < n; i++ )
	    {
	        cin >> ar1[i];
	        mymap[ar1[i]] = 1;
	    }

	    for ( int i = 0; i < 9; i++ )
	    {
	        if ( mymap[ch[i]] != 0 )
	            cout << ch[i] << ' ';
	    }

	    cout << endl;

	    for ( int i = 0; i < 9; i++ )
	    {
	        if ( mymap[ch[i]] != 0 )
	            cout << ch[i] << ' ';
	    }

	    cout << endl;
	    mymap.clear();
	}

	return 0;
}
