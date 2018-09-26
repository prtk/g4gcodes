//https://practice.geeksforgeeks.org/problems/equal-to-product/0
//float mein typecast
//vector access
// vector iterate
// idiot for ( int i = 0; i < 5 && i !=2 && i != 3; i++ )
// idiot hashing !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <bits/stdc++.h>
using namespace std;

int main() {

	unsigned long int p, n, f, temp;
	int t, flag;

	vector <unsigned long int> ar;

	cin >> t;

	while ( t-- )
	{
	    flag = -1;
	    cin >> n >> p;
	    for ( int i = 0; i < n; i++ )
	        {
	            cin >> f;
	            ar.push_back(f);
	        }

	    sort ( ar.begin(), ar.end() );

	    if ( p == 0 )
	    {
	        if( binary_search ( ar.begin(), ar.end(), 0 ) )
	        {
	            cout << "Yes\n";
	            goto L1;
	        }
	    }

	    if ( n == 1 )
	    {
	        cout << "No\n";
	            goto L1;
	    }

	    for ( int i = 0; (i < n) && (p >= ar[i]); i++ )
	    {
	        if ( (ar[i] != 0) && (p % ar[i]) == 0 )
	        {
	            f = p / ar[i];
	            temp = ar[i];
	            if ( i == ( n - 1 ) )
	                ar[i] = ar[i - 1];
	            else ar[i] = ar[i + 1];
	            //cout << f << endl << ar[i] << endl;
	            if ( binary_search ( ar.begin(), ar.end(), f ) )
                {
                    //cout << endl << ar[i] << endl << f << endl;
                    flag = 1;
                    break;
                }
                ar[i] = temp;
	        }
	    }

	    if ( flag == 1 )
	        cout << "Yes\n";
	    else cout << "No\n";
L1:	    ar.clear();
	}

	return 0;
}
