//https://practice.geeksforgeeks.org/problems/array-to-bst/0
#include <bits/stdc++.h>
using namespace std;

void preorder( int ar[], int low, int high );

int main() {

	int t, ar[1000];
	cin >> t;
	while ( t-- )
	{
	    int n;
	    cin >> n;
	    for ( int i = 0; i < n; i++ )
	        cin >> ar[i];
	    preorder( ar, 0, n - 1 );
	    cout << endl;
	}
	return 0;
}

void preorder( int ar[], int low, int high )
{
    int size = high - low + 1;
    if ( low > high )
        return;
    if ( size == 1 )
    {
        cout << ar[low] << ' ';
        return;
    }
    else
    {   int mid = low+((high-low)/2);
        cout << ar[mid] << ' ';
        preorder( ar, low, mid - 1 );
        preorder( ar, mid + 1, high );
    }
}
