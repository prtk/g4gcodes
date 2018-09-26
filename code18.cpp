//https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-3/0
//automata, bhasad at above link, very probably better solution?? in comments
//https://math.stackexchange.com/questions/140283/why-does-this-fsm-accept-binary-numbers-divisible-by-three
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, len, state;
	cin >> t;

	while ( t-- )
	{
	    state = 0;
	    string s;
	    cin >> s;

	    len = s.size();

	    bitset <100> bin(s);

	    for ( int i = len - 1; i >=0; i-- )
	    {
	        switch(state)
	        {
	            case 0: if ( bin[i] == 0 )
	                    state = 0;
	                    else state = 1;
	                    break;
	           case 1: if ( bin[i] == 0 )
	                    state = 2;
	                    else state = 0;
	                    break;
	           case 2: if ( bin[i] == 0 )
	                    state = 1;
	                    else state = 2;
	                    break;
	        }
	    }

	    if ( state == 0 )
	        cout << '1' << endl;
	    else cout << '0' << endl;

	}

	return 0;
}
