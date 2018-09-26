//https://practice.geeksforgeeks.org/problems/count-distinct-pairs-with-difference-k/0

//look in editorial for million more approaches

#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, n, k, index, count, found;
	int ar[100];

	cin >> t;
	while ( t-- )
	{
	    count = index = found = 0;

	    cin >> n;
	    for ( int i = 0; i < n; i++ )
	        cin >> ar[i];

	    cin >> k;

	    sort ( ar, ar + n );

	    if ( k == 0 )
	    {
	    	for ( int i = 0; i < n - 1; i++ )
	    	{
	    		while ( ar[i] == ar[i+1] )
	    		{
	    			found = 1;
	    			i++;
	    		}
	    		if ( found == 1 )
	    		{
	    			count++;
	    			found = 0;
	    		}
	    	}
	    }

	    else
	    {
		for ( int i = 0; i < n - 1; i++ )
		{
			if ( i > 0 )
			{
				if( ar[i] == ar[i-1] )
	            			continue;

			}

			for ( int j = index + 1; j < n; j++ )
			{
	            		if ( (ar[j] - ar[i]) == k )
	            		{
	            			index = j;
	            			count++;
	            		}
			}
		}
	    }

	    cout << count << endl;
	}
	return 0;
}
