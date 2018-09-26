//string funcs

#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, max;
	string final, t1, t2;

	cin >> t;
	while (t--)
	{
	    max = 0;
	    string s;
	    cin >> s;

	    for ( int i = 0; i < s.size(); i++ )
	    {
	       for ( int j = 1; j <= (s.size() - i); j++ )
	       {
	           t1 = s.substr(i,j);
	           t2.assign(t1);
	           reverse(t1.begin(), t1.end());
	           if ( t1.compare(t2) == 0 && t1.size() > max )
	           {
	             final.clear();
	             final = t2;
	             max = t1.size();
	           }
	       }
	       t1.clear();
	       t2.clear();
	    }
	}

	t1.clear();
	t2.clear();
	cout << final << endl;

	return 0;
}
