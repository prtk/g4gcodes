//https://practice.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string/0
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while ( t-- )
	{
	    string str, smallstr;
	    cin >> str >> smallstr;
	    
	    int min, wl, wr, w1, w2, len, count, start, flag;
	    
	    unordered_map<char,int> small;
	    unordered_map<char,int> big;
	    //unordered_map<char,int> :: iterator itr;
	    
	    for ( int i = 0; i < str.size(); i++ )
	        big[str[i]] = -1;
	    
	    for ( int i = 0; i < smallstr.size(); i++ )
	    {
	        if ( big[smallstr[i]] == 0 )
	        {
	            cout << "-1\n";
	            goto L1;
	        }
	        big[smallstr[i]] = 1;
	        small[smallstr[i]]++;
	    }
	   // cout << "hello";
	   // for ( itr = small.begin(); itr != small.end(); itr++ )
	   //     cout << itr -> first << ' ' << itr -> second << endl;
	    count = start = flag = 0;
	    wr = wl = -1;
	    min = INT_MAX;
	    
	    //last waale pr bhi dekhna hai agar string end mein hua to...
	    
	    for ( int i = 0; i < str.size(); i++ )
	    {   
	        if ( big[str[i]] == -1 ) //extra badha dia
	        {
	            if ( start == 0  )
	            {
	                //start = 1;
	                wl++;
	            }
	            wr++;
	        }
	        else if ( small[str[i]] <= 0 )
	        {
	            small[str[i]]--; //count > size hua toh???
	            wr++;
	        }
	        else if ( small[str[i]] > 0 )
	        {
	            small[str[i]]--;
	            count++;
	            if ( start == 0 )
	            {
	                start = 1;
	                wl++;
	            }
	            wr++;
	        }
	       // else //( small[str[i]] < 0 )
	       // {
	       //     wr++;
	       // }
	        
	        if ( count == smallstr.size() )
	        {   
	            flag = 1;
	            while ( small[str[wl]] < 0 || big[str[wl]] == -1 )
	            {
	                if ( small[str[wl]] < 0 )
	                    small[str[wl]]++;
	                wl++;
	            }
	            
	            len = wr - wl;
	            if ( len < min )
	            {
	                min = len;
	                w1 = wl;
	                w2 = wr;
	            }	            
	        }
	    }
	    
	    if ( flag == 1 )
	    {
	        for ( int i = w1; i <= w2; i++ )
	            cout << str[i];    
	    }
	    else cout << "-1";
	    
	    cout << endl;
	    
	    L1:;
	}
	 
	return 0;
}