//https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream/0
// look at other ways????
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, n, index, flag;
	char ar[500];
	unordered_map <char, int> mymap;

	cin >> t;

	while ( t-- )
	{
	    flag = 0;
	    index = 0;
	    cin >> n;
	    for ( int i = 0; i < n; i++ )
	        cin >> ar[i];

	    for ( int i = 0; i < n; i++ )
	    {
	        mymap[ar[i]]++;
	        if ( mymap[ar[index]] == 1 )
	        {
	            flag = 1;
	            cout << ar[index] << ' ';
	        }
	        else if ( mymap[ar[index]] > 1 )
	        {
	            flag = 0;
	            while ( ++index <= i && flag == 0 )
	            {
	                if ( mymap[ar[index]] == 1 )
	                {
	                    flag = 1;
	                    cout << ar[index] << ' ';
	                }
	            }
	            index--;
	        }
	        if ( flag == 0 )
	            cout << "-1" << ' ';
	    }

	    cout << endl;
	    mymap.clear();

	}
	return 0;
}
