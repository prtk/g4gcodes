//https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix/0
//much simpler in editorial
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, m, n, ar[10][10], flag[10][10];
	cin >> t;

	while ( t-- )
	{
		cin >> m >> n;

		for ( int i = 0; i < m; i++ )
			for ( int j = 0; j < n; j++ )
			{
				cin >> ar[i][j];
				flag[i][j] = 0;
			}

		int way = 0;
		int ctr = m * n;
		int i, j, indi;
		i = j = 0;
		indi = 0;
//i >= 0 && i < m && j >= 0 && j < n &&
		while ( i >= 0 && i < m && j >= 0 && j < n && ctr )
		{
			if ( i == 0 && j == n - 1 || i == m - 1 && j == n - 1 || i == m - 1 && j == 0 || flag[i][j] == 1 )
			{
				if ( flag[i][j] == 0 )
				{
					cout << ar[i][j] << ' ';
					ctr--;
					flag[i][j] = 1;

					if( i == 0 && j == n - 1 )
						i++;
					else if(i == m - 1 && j == n - 1)
						j--;
					else if(i == m - 1 && j == 0)
						i--;
					way = ( way + 1 ) % 4;
					goto L1;
				}
				switch ( way )
				{
					case 0: j--;
						i++;
						break;
					case 1: i--;
						j--;
						break;
					case 2: j++;
						i--;
						break;
					case 3: i++;
						j++;
						break;
				}
				way = ( way + 1 ) % 4;
				goto L2;
			}

L1:	if ( i == 0 && j == n - 1 || i == m - 1 && j == n - 1 || i == m - 1 && j == 0 || flag[i][j] == 1 )
			continue;

		flag[i][j] = 1;

    switch( way )
    {
	    case 0:	cout << ar[i][j++] << ' ';
				break;
	    case 1: cout << ar[i++][j] << ' ';
				break;
	    case 2: cout << ar[i][j--] << ' ';
				break;
	    case 3: cout << ar[i--][j] << ' ';
				break;
    }
    ctr--;
L2:;
	//	cout << endl << "i:" << i << "j:" << j << endl;
		}
		cout << endl;
	}
	return 0;
}
