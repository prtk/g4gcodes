//https://practice.geeksforgeeks.org/problems/add-binary-strings/0

//bitset, full adder formula, vector<bool>, vector<char>
//see editorial

#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, l1, l2, max;
	string A, B;
	bool inc;
	cin >> t;

	while (t--)
	{
	    inc = 0;
	    cin >> A >> B;

	    l1 = A.size();
	    l2 = B.size();

	    bitset<200> a(A);
	    bitset<200> b(B);
	    bitset<201> result;

	    max = l1 > l2 ? l1 : l2;

                for ( int i = 0; i < max; i++ )
                {
                	result[i] = a[i] ^ b[i] ^ inc;
                	inc = ( a[i] & b[i] ) | ( inc & ( a[i] ^ b[i] ) );
                	//cout << a[i] << ' ' << b[i] << ' ' << result[i] << ' ' << inc << endl;
                }

                if ( inc == 1 )
	    {
	    	result[max] = 1;
	    	for ( int i = max; i >= 0; i-- )
	    		cout << result[i];
	    }

	    else
	    {
	    	for ( int i = max - 1; i >= 0; i-- )
	    		cout << result[i];
	    }

                cout << '\n';

	}
	return 0;
}
