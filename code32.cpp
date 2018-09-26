//https://practice.geeksforgeeks.org/problems/product-array-puzzle/0
//log and antilog and epsilon
// C++ program for product array puzzle
// with O(n) time and O(1) space.
// #include <bits/stdc++.h>
// using namespace std;
//
// // epsilon value to maintain precision
// #define EPS 1e-9
//
// void productPuzzle(int a[], int n)
// {
//     // to hold sum of all values
//     long double sum = 0;
//     for (int i = 0; i < n; i++)
//         sum += (long double)log10(a[i]);
//
//     // output product for each index
//     // antilog to find original product value
//     for (int i = 0; i < n; i++)
//         cout << (int)(EPS + pow((long double)10.00,
//                          sum - log10(a[i]))) << " ";
// }
//
// // Driver code
// int main()
// {
//     int a[] = { 10, 3, 5, 6, 2 };
//     int n = sizeof(a)/sizeof(a[0]);
//     cout << "The product array is: \n";
//     productPuzzle(a, n);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, ar[15];
	cin >> t;

	while ( t-- )
	{
	    int n;
	    long long int prod = 1;
	    cin >> n;
	    for ( int i = 0; i < n; i++ )
	    {
	        cin >> ar[i];
	        prod *= ar[i];
	    }
	    for ( int i = 0; i < n; i++ )
	        cout << prod / ar[i] << ' ';
	    cout << endl;
	}
	return 0;
}
