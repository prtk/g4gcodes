//https://practice.geeksforgeeks.org/problems/non-repeating-character/0
//maps, pair, maps of pairs, iterators, quite a lot stuff
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, len;
	cin >> t;

	unordered_map <char, pair <int, int>> mymap;

	while ( t-- )
	{
	    string s;
	    int i, min, flag, val;
	    flag = -1;
	    min = INT_MAX;

	    cin >> len;
	    cin >> s;
	    for ( i = 0; i < len; i++ )
	    {
	        //int val = mymap[s[i]].first;
	        //val++;
	        //mymap[s[i]] = make_pair( val, i );
	       mymap[s[i]].first += 1;;
	       mymap[s[i]].second = i;
	    }

	    unordered_map <char, pair <int, int>> :: iterator itr;

	   // cout << mymap.size() << endl;

	   // for ( itr = mymap.begin(); itr != mymap.end(); itr++ )
	   // {
	   //     cout << itr->first << ":(" << (itr -> second).first << ',' << s[(itr -> second).second] << ')' << endl;
	   // }

	    for ( itr = mymap.begin(); itr != mymap.end(); itr++ )
	    {
	        if ( (itr -> second).first == 1 )
	        {
	            flag = 1;
	            if ( min > (itr -> second).second )
	                min = (itr -> second).second;
	        }
	    }

	    if ( flag == -1 )
	        cout << flag << endl;
	    else cout << s[min] << endl;

	    mymap.clear();
	}
	return 0;
}
