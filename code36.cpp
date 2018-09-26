//https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram/0
//ternary operator https://www.geeksforgeeks.org/cc-ternary-operator-some-interesting-observations/
//stack
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, max, area, temp, n, ar[100];
	cin >> t;

	while ( t-- )
	{
	    max = area = INT_MIN;
	    cin >> n;
	    for ( int i = 0; i < n; i++ )
	        cin >> ar[i];

	    stack<int> mystack;
	    mystack.push(0);

	    for ( int i = 1; i < n; i++ )
	    {
	        while ( !mystack.empty() && ar[mystack.top()] > ar[i] )
	        {
	                temp = mystack.top();
	                mystack.pop();
	                area = mystack.empty() ? i * ar[temp] : (i - mystack.top() - 1) * ar[temp];
	                max = area > max ? area : max;
	        }
	        mystack.push(i);
	    }

	    while ( !mystack.empty() )
	    {
	       temp = mystack.top();
	       mystack.pop();
	       area = mystack.empty() ? (n) * ar[temp] : (n - mystack.top() - 1) * ar[temp];
	       max = area > max ? area : max;
	    }
	    cout << max << endl;
	}
	return 0;
}
