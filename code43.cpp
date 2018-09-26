//https://practice.geeksforgeeks.org/problems/anagram/0
//crosses initialisation error
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	while ( t-- )
	{
	    string s1, s2;
	    cin >> s1 >> s2;
	    unordered_map<char,int> mymap;
	     unordered_map<char,int> :: iterator itr;
	       int flag = 1;


	    if ( s1.size() != s2.size() )
	    {
	        cout << "NO" << endl;
	       goto L1;
	    }

	    for ( int i = 0; i < s1.size(); i++ )
	        mymap[s1[i]]++;

	    for ( int i = 0; i < s2.size(); i++ )
	        mymap[s2[i]]--;


	    for ( itr = mymap.begin(); itr != mymap.end(); itr++ )
	    {
	        if ( itr -> second > 0 )
	            {flag = 0;
	            break;}
	    }

	    if ( flag == 0 )
	        cout << "NO" << endl;
	    else cout << "YES" << endl;

	    L1: ;
	}
	return 0;
}
