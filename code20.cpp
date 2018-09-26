//https://practice.geeksforgeeks.org/problems/-regex-matching/0
//strings substring

#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, len_reg, len_pat, flag, result;

	cin >> t;

	while ( t-- )
	{
	    flag = 0;
	    result = 0;
	    string reg, pat, sub_reg, sub_pat;
	    cin >> reg >> pat;

	    len_reg = reg.size();
	    len_pat = pat.size();

	    if ( reg[0] == '^' )
	    {
	        sub_reg = reg.substr ( 1, len_reg - 1 );
	        sub_pat = pat.substr ( 0, len_reg - 1 );
	        if ( sub_pat.compare( sub_reg ) == 0 )
	            cout << "1\n";
	        else cout << "0\n";
	    }

	    else if ( reg[len_reg - 1] == '$' )
	    {
	        sub_reg = reg.substr( 0, len_reg - 2 );
	        sub_pat = pat.substr ( len_pat - len_reg + 1, len_reg - 2 );
	        if ( sub_pat.compare( sub_reg ) == 0 )
	            cout << "1\n";
	        else cout << "0\n";
	    }

	    else
	    {
	        for ( int i = 0; i <= len_pat - len_reg ; i++  )
	        {
	        	//cout <<  << endl;
	            if ( reg.compare( pat.substr( i, len_reg ) ) == 0 )
	                {
	                    flag = 1;
	                    break;
	                }
	        }
	        cout << flag << endl;
	    }
	}

	return 0;
}
