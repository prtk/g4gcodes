https://practice.geeksforgeeks.org/problems/majority-element/0
// Moore's Method space efficient
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, n;
	cin >> t;

	unordered_map<int,int> mymap;
	unordered_map<int,int> :: iterator itr;

	while ( t-- )
	{
	    cin >> n;
	    int ar[n];

	    for ( int i = 0; i < n; i++ )
	    {
	        cin >> ar[i];
	        mymap[ar[i]]++;
	    }

	    int max = 0;
	    int value = -1;

	    for ( itr = mymap.begin(); itr != mymap.end(); itr++ )
	    {
	        if ( itr -> second > max )
	        {
	            max = itr -> second;
	            value = itr -> first;
	        }
	    }

	    if ( max > n/2 )
	        cout << value << endl;
	    else cout <<"NO Majority Element\n";

	    mymap.clear();

	}
	return 0;
}
