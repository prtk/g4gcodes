//https://practice.geeksforgeeks.org/problems/sum-of-middle-elements-of-two-sorted-arrays/0
//declare arrays dynamically
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, n;
	cin >> t;

	while ( t-- )
	{
	    cin >> n;
	    int* a = new int[n];
	    int* b = new int[n];

	    for ( int i = 0; i < n; i++ )
	        cin >> a[i];
	    for ( int i = 0; i < n; i++ )
	        cin >> b[i];

	    int i, j, count, sum;
	    i = j = count = sum = 0;

	    while ( count <= n + 1 && i < n && j < n )
	    {
	        if ( a[i] < b[j] )
	        {
	            i++;
	            if ( count == n - 1 || count == n )
	                sum += a[i - 1];
	        }
	        else
	        {
	            j++;
	            if ( count == n - 1 || count == n )
	                sum += b[j - 1];
	        }
	        count++;
	    }

	    if ( count <= n + 1 )
	    {
	        if ( i == n )
	            sum += b[0];
	        else sum += a[0];
	    }

	    cout << sum << endl;

	    delete [] a;
	    delete [] b;
	}
	return 0;
}
