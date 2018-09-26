//https://practice.geeksforgeeks.org/problems/wave-array/0
//short circuiting is okk
/* w/o lexo => Traverse all even positioned elements of input array, and do following.
….a) If current element is smaller than previous odd element, swap previous and current.
….b) If current element is smaller than next odd element, swap next and current.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, n, ar[1000], temp;

	cin >> t;

	while ( t-- )
	{
	    temp = 0;
	    cin >> n;

	    for ( int i = 0; i < n; i++ )
	        cin >> ar[i];

	    sort ( ar, ar + n );

	    for ( int i = 0; i < n - 1 ; i+=2 )
	    {
	        temp = ar[i];
	        ar[i] = ar[i + 1];
	        ar[i + 1] = temp;
	    }

	    for ( int i = 0; i < n; i++ )
	        cout << ar[i] << ' ';
	    cout << endl;
	}
	return 0;
}
