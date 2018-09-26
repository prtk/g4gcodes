// simple ----> https://www.geeksforgeeks.org/move-zeroes-end-array/
//https://practice.geeksforgeeks.org/problems/ease-the-array/0

#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, n, count;
	int ar[100000], buf[100000];

	cin >> t;

	while ( t-- )
	{
	    count = 0;
	    cin >> n;
	    for ( int i = 0; i < n; i++ )
	        cin >> ar[i];

	    for ( int i = 0; i < n - 1; i++ )
	    {
	        if ( ar[i + 1] != 0 && ar[i + 1] == ar[i] )
	        {
	            ar[i + 1] = 0;
	            ar[i] = 2 * ar[i];
	        }
	    }


	    for ( int i = 0; i < n; i++ )
	    {
	        if ( ar[i] != 0 )
	            buf[count++] = ar[i];
	    }

	    for ( int i = count; i < n; i++ )
	        buf[i] = 0;

	    for ( int i = 0; i < n; i++ )
	        cout << buf[i] << ' ';

	    cout << '\n';
	}

	return 0;
}
