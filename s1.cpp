//https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/0/?ref=self
// elements in a map are ordered on the basis of the key
//auto& size_t auto?????
//at operator, iterator, []
//swap
// priority of return /// return a + 1;
#include <bits/stdc++.h>
using namespace std;

void quicksort ( vector <pair <int, int>>&, int, int );
int partition ( vector <pair <int, int>>&, int, int );
//void swap ( pair <int, int>*, pair <int, int>* );
int compare ( pair <int, int> , pair <int, int> );

vector <int> piv;

int main() {

	int t, n, ar[130];
	cin >> t;

	unordered_map <int, int> mymap;
	vector <pair <int, int>> vec;

	while ( t-- )
	{
	    cin >> n;
	    for ( int i = 0; i < n; i++ )
	    {
	        cin >> ar[i];
	        mymap[ar[i]]++;
	    }

        unordered_map <int, int> :: iterator itr;

        for ( itr = mymap.begin(); itr != mymap.end(); itr++ )
            vec.push_back( make_pair( itr -> second, itr -> first ) );

        quicksort( vec, 0, vec.size() - 1 );

	    int index;
	    //flag;

	   // for ( int i = 0; i < piv.size(); i++ )
	   // {
	   //     flag = 0;
	   //     index = piv[i] - 1;
	   //     while ( index >= 0 && vec[i].second < vec[index].second && vec[i].first == vec[index].first)
	   //     {
	   //         index--;
	   //         flag = 1;
	   //     }
	   //     if ( flag == 1 )
	   //         vec[i].swap(vec[index + 1]);
	   // }

	    int count;

	    for ( int i = 0; i < vec.size(); i++ )
	        {
	            count = vec[i].first;
	            for ( int j = 0; j < count; j++ )
	                cout << vec[i].second << ' ';
	        }
	    cout << endl;
	    vec.clear();
	    mymap.clear();
	    piv.clear();
	}

	return 0;
}

void quicksort ( vector <pair <int, int>>& vec, int low, int high )
{
    int pivot;
    if ( low < high )
    {
        pivot = partition ( vec, low, high );
        quicksort ( vec, low, pivot - 1 );
        quicksort ( vec, pivot + 1, high );
    }
}

int partition ( vector <pair <int, int>>& vec, int low, int high )
{
    int index, pivot, i;
    pivot = vec[high].first;

    index = low - 1;

    for ( i = low + 1; i <= high; i++ )
    {
        if ( compare( make_pair(vec[i].first, vec[i].second) , make_pair(vec[high].first, vec[high].second) ) )
        {
            index++;
            vec[index].swap(vec[i]);
            //swap ( &vec[index], &vec[i] );
        }
    }

    vec[high].swap(vec[index + 1]);

	        int flag = 0;
	        int x = index;
	        while ( x >= 0 && vec[x].second > vec[index + 1].second && vec[x].first == vec[index + 1].first)
	        {
	            x--;
	            flag = 1;
	        }
	        if ( flag == 1 )
	            vec[index + 1].swap(vec[x + 1]);
    //piv.push_back(index + 1);
    //swap ( &vec[high], &vec[index + 1] );
    return index + 1; // no need of brackets

}

// void swap ( pair <int, int>* a, pair <int, int>* b  )
// {

//     int temp = *a;
//     *a = *b;
//     *b = temp;
//}


int compare ( pair <int, int> a , pair <int, int> b )
{
    //return ( a < b ? 1 : 0 );

    if ( a.first == b.first )
    {
        if ( a.second < b. second )
            return 1;
        else return 0;
    }

    else if ( a.first > b.first )
        return 1;
    else return 0;
}
