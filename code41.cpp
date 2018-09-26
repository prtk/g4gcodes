//https://practice.geeksforgeeks.org/problems/coin-change/0
// dynamically declaring and passing 2D array
#include <bits/stdc++.h>
using namespace std;

int coinchange( int cost, int* ar, int index, int n, int** cstarr );

int main() {

	int t, n, cost, ar[300];
	cin >> t;

	while ( t-- )
	{
	    cin >> n;
	    for ( int i = 0; i < n; i++ )
	        cin >> ar[i];
	    cin >> cost;

	    int **cstarr;
        cstarr = new int *[cost + 1];
        for(int i = 0; i <= cost; i++)
            cstarr[i] = new int[n + 1];

	    for ( int i = 0; i <= cost; i++ )
	        for ( int j = 0; j <= n; j++ )
	            cstarr[i][j] = -1;
	    int ways = coinchange ( cost, ar, 0, n, cstarr );
	    cout << ways << endl;
	}

	return 0;
}

int coinchange( int cost, int* ar, int index, int n, int** cstarr )
{
    if ( index >= n )
        return 0;

    if ( cost < 0 )
        return 0;

    if ( cost == 0 )
        return 1;

    if ( cstarr[cost][index] != -1 )
        return cstarr[cost][index];

    int ways = 0;

    for ( int i = index; i < n; i++ )
        ways += coinchange( cost - ar[i], ar, i, n, cstarr );

    cstarr[cost][index] = ways;
    return ways;
}
