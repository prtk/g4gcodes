//https://practice.geeksforgeeks.org/problems/search-in-a-matrix/0
//technique
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, n, m;
	cin >> t;

	while ( t-- )
	{
	    cin >> n >> m;
	    int ar[n][m];
	    for ( int i = 0; i < n; i++ )
	        for ( int j = 0; j < m; j++ )
	            cin >> ar[i][j];
	    int ele;
	    cin >> ele;
	    int i, j;

	    int flag = 0;

	    i = 0;
	    j = m - 1;
	    while ( i < n && j >= 0 )
	    {
	        if ( ele == ar[i][j] )
	        {
	            flag = 1;
	            goto L1;
	        }
	        else if ( ele > ar[i][j] )
	            i++;
	        else j--;
	    }

	    L1: cout << flag << endl;
	}
	return 0;
}
