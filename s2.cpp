//https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/0/?ref=self
// elements in a map are ordered on the basis of the key
//auto& size_t auto?????
//at operator, iterator, []
//swap
// precedence of *
// sort vector, vector of pairs, descending order
#include <bits/stdc++.h>
using namespace std;

void quicksort ( unordered_map <int, int>*, int, int );
int partition ( unordered_map <int, int>*, int, int );
void swap ( int*, int* );
int compare ( int, int );

int main() {

	int t, n, ar[130];
	cin >> t;

	unordered_map <int, int> mymap;

	while ( t-- )
	{
	    cin >> n;
	    for ( int i = 0; i < n; i++ )
	    {
	        cin >> ar[i];
	        mymap[ar[i]]++;
	    }

        quicksort( &mymap, 0, mymap.size() - 1 )


	    mymap.clear();
	}

	return 0;
}

void quicksort ( unordered_map <int, int>* mymap, int low, int high )
{
    int pivot;
    if ( low < high )
    {
        pivot = partition ( &mymap, low, high );
        quicksort ( &mymap, low, pivot - 1 );
        quicksort ( &mymap, pivot + 1, high );
    }

}

int partition ( unordered_map <int, int>* mymap, int low, int high )
{
    int index, pivot, i;
    pivot = mymap.begin() -> second;

    index = low;



    for ( i = low + 1; i < high; i++ )
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
