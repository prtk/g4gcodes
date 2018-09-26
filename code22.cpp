//atoi and stoi and ascii value of A and 0 and a
// a lot of concepts
//https://practice.geeksforgeeks.org/problems/sum-of-numbers-or-number/0
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, l1, l2, min, large, n1, n2, s, c;

	vector<char> sum;

	cin >> t;

	while ( t-- )
	{
	    c = s = n1 = n2 = 0;
	    string a, b;
	    cin >> a >> b;
	    l1 = a.size();
	    l2 = b.size();
	    min = l1 < l2 ? l1 : l2;

	    if ( min == l1 )
	        large = 2;
	    else large = 1;

	    for ( int i = 1; i <= min; i++ )
	    {
	        n1 = int(a[l1 - i]) - 48;
	        n2 = int(b[l2 - i]) - 48;
	        s = n1 + n2 + c;
	        if ( s >= 10 )
	        {
	            c = 1;
	            s = s - 10;
	        }
	        else c = 0;
	        sum.push_back(char(s + 48));
	    }

	    if ( large == 1 )
	    {
	        for ( int i = min + 1; i <= l1; i++ )
	        {
	            n1 = int(a[l1 - i]) - 48;
	            s = n1 + c;
	            if ( s >= 10 )
	            {
	                c = 1;
	                s = s - 10;
	            }
	            else c = 0;
	            sum.push_back(char(s + 48));
	        }
	    }

	    else if ( large == 2 )
	    {
	        for ( int i = min + 1; i <= l2; i++  )
	        {
	            n2 = int(b[l2 - i]) - 48;
	            s = n2 + c;
	            if ( s >= 10 )
	            {
	                c = 1;
	                s = s - 10;
	            }
	            else c = 0;
	            sum.push_back(char(s + 48));
	        }
	    }

	    if ( c == 1 )
	        sum.push_back('1');

	    if ( sum.size() == a.size() )
	    {
	        for ( int i = sum.size() - 1; i >= 0; i-- )
	        cout << sum.at(i);
	    }

	    else cout << a;

	    cout << '\n';
	    sum.clear();
	}
	return 0;
}
