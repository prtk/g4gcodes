// https://practice.geeksforgeeks.org/problems/egg-dropping-puzzle/0
// devilishly simple min and max function
// array declaration easy now
//either declare a global array so that no function call is repeated or declare an aray in each function call
// so that some function calls overall are repeated but the ones inside the function aren't.

#include <bits/stdc++.h>
using namespace std;

int eggdrop ( int, int );
int ar[51][11];

int main() {

	int t, k, n;
	cin >> t;

	while ( t-- )
	{
	    cin >> k >> n;
	    //int ar[n + 1][k + 1]; // assuming its zero by default
	    for ( int i =  0; i <= n; i++ )
	        for ( int j = 0; j <= k; j++ )
	            ar[i][j] = -1;
	    for ( int i = 1; i <= n; i++ )
	        ar[i][1] = i;
	    for ( int i = 1; i <= k; i++ )
	        ar[0][i] = 0;
	    int num = eggdrop( n, k );
	    cout << num << endl;
	}
	return 0;
}

int eggdrop ( int n, int k )
{
    if ( ar[n][k] != -1 )
        return ar[n][k];

    // if ( k == 1 )
    //     return n;

    // if ( n == 1 || n == 0 )
    //     return n;

    int res, min;
    min = INT_MAX;

    for ( int i = 1; i <= n; i++ )
    {
        res = max( eggdrop( n - i, k ), eggdrop( i - 1, k - 1 ) );
        if ( res < min )
            min = res;
    }
    ar[n][k] = min + 1;
    return min + 1;
}
