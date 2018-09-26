//https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/0/?ref=self
// elements in a map are ordered on the basis of the key
//auto& size_t auto?????
//at operator, iterator, []
//swap
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, n, ar[130];
	cin >> t;

	unordered_map <int, int> mymap;
	vector <pair <int, int>> vec;

	while ( t-- )
	{
	    cin >> n;
	    for ( int i = 0; i < n; i++ )
	    {
	        cin >> ar[i];
	        mymap[ar[i]]++;
	    }

        unordered_map <int, int> :: iterator itr;

        for ( itr = mymap.begin(); itr != mymap.end(); itr++ )
            vec.push_back( make_pair( itr -> second, itr -> first ) );

	    sort ( vec.begin(), vec.end(), greater<pair <int, int>>() );
	    vector <pair <int, int>> :: iterator i;

	   // for ( i = vec.begin(); i != vec.end(); i++ )
	   //     cout << (*i).first << ' ' << (*i).second << endl;

	    mymap.clear();
	    vec.clear();
	}

	return 0;
}
