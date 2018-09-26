//https://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array/0
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, n;
	cin >> t;

	while ( t-- )
	{
	    cin >> n;
	    int ar[n];
	    for ( int i = 0; i < n; i++ )
	        cin >> ar[i];

	    for ( int i = 0; i <= n - 3; i+=2 )
	    {
	        if (  ar[i] != ar[i+1]  )
	            { cout << ar[i] << endl; goto L1; }
	    }
	    cout << ar[n-1] << endl;
	 L1:;
	}
	return 0;
}
