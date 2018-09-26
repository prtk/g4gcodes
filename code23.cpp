//https://practice.geeksforgeeks.org/problems/nearest-multiple-of-10/0
// for loop will not run even once; it checks the condition first. ascii values. type casting
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
	    string s;
	    cin >> s;
	    int len = s.size();
	    int carry = 0;
	    int num = s[len - 1];

	    if ( len == 1 )
	    {
	        if ( num > 53 )
	        {
	            carry = 1;
	            goto L1;
	        }
	    }

	    if ( num != 48 )
	    {
	        if ( num > 53 )
	        {
	           for ( int i = len - 2; i >= 0; i-- )
	           {
	               int temp = s[i];

	               if ( temp == 57 )
	               {
	                   carry = 1;
	                   s[i] = '0';
	               }
	               else
	               {
	                   temp++;
	                   s[i] = char(temp);
	                   carry = 0;
	                   goto L1;
	               }
	           }
	        }
	    }
	    L1: s[len - 1] = '0';
	    if ( carry == 1 )
	        cout << '1';
	    cout << s << endl;
	}
	return 0;
}
