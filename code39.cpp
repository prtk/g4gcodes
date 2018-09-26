//https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array/0/?ref=self
//https://www.geeksforgeeks.org/quick-sort/
//https://stackoverflow.com/questions/2611081/combine-two-numbers-into-one-example-123-and-456-become-123456
//stoi, to_string, pointers, pointers to functions, array to function
//https://www.geeksforgeeks.org/converting-string-to-number-and-vice-versa-in-c/
//https://www.geeksforgeeks.org/converting-strings-numbers-cc/
// concatenation of strings
//http://www.cplusplus.com/reference/string/string/operator+/
#include <bits/stdc++.h>
using namespace std;

void quicksort ( int*, int, int );
int partition ( int*, int, int );
void swap ( int*, int* );
int compare ( int, int );

int main() {

	int t, ar[100], n;
	cin >> t;

	while ( t-- )
	{
	    cin >> n;
	    for ( int i = 0; i < n; i++ )
	        cin >> ar[i];

	    quicksort( ar, 0, n - 1 );

	    for ( int i = 0; i < n; i++ )
	        cout << ar[i];
	    cout << endl;
	}
	return 0;
}

void quicksort ( int* ar, int low, int high )
{
    int pivot;
    if ( low < high )
    {
        pivot = partition ( ar, low, high );
        quicksort ( ar, low, pivot - 1 );
        quicksort ( ar, pivot + 1, high );
    }

}

int partition ( int* ar, int low, int high )
{
    int index, pivot, i;
    pivot = ar[high];

    index = low - 1; // corrected

    for ( i = low; i < high; i++ )
    {
        if ( compare( ar[i], pivot ) )
        {
            index++;
            swap ( &ar[index], &ar[i] );
        }
    }

    swap ( &ar[high], &ar[index + 1] );
    return index + 1;

}

void swap ( int* a, int* b )
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int compare ( int a, int b )
{
    //return ( a < b ? 1 : 0 );
    string A = to_string(a);
    string B = to_string(b);

    string C = A + B;
    string D = B + A;

    int c = stoi(C);
    int d = stoi(D);

    return ( c < d ? 0 : 1 );

}
