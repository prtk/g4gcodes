//https://practice.geeksforgeeks.org/problems/relative-sorting/0
// maps and iterators
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, m, n, a1[50], a2[10], res[50];
    map <int,int> mymap;

	map <int,int> :: iterator itr;

	cin >> t;

	while ( t-- )
	{
	    cin >> m >> n;

	    for ( int i = 0; i < m; i++ )
	    {
	        cin >> a1[i];
	        mymap[a1[i]] += 1;
	    }

	    int count = 0;

	    for ( int i = 0; i < n; i++ )
	    {
	        cin >> a2[i];
	        if ( mymap[a2[i]] != 0 )
	        {
	           for ( int x = 0 ; x < mymap[a2[i]]; x++ )
	            res[count++] = a2[i];
	           mymap[a2[i]] = -1;
	        }
	    }

	    for ( itr = mymap.begin(); itr != mymap.end(); itr++ )
	    {
	        if ( itr -> second != -1 )
	        {
	            for ( int i = 0; i < itr -> second; i++ )
	                res[count++] = itr -> first;
	        }
	    }

	    for ( int i = 0; i < count; i++ )
		cout << res[i] << ' ';

	    cout << endl;

	    mymap.clear();
	}


	return 0;
}
