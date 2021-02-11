// Codeforces Round #699 (Div. 2)
// problem link: https://codeforces.com/problemset/problem/1481/A

// CODE

#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int x, y;   // final position
	    cin >> x >> y;
	    string s;
	    cin >> s;
	    int r = 0, l = 0, u = 0, d = 0; // initial positions
	    for(int i=0; i<s.length(); i++)
	    {
	        if(s[i] == 'R')
	            r++;
	        if(s[i] == 'L')
	            l--;
	        if(s[i] == 'U')
	            u++;
	        if(s[i] == 'D')
	            d--;
	    }
	    
	    // finding the answer 
	    // if a number is positive we will ignore the moves in the opposite direction and vice versa to check the answer  
	    int flag1 = 0, flag2 = 0;
	    if( (x <= 0 && l <=x ) || (x >= 0 && r >= x) )
	        flag1 = 1;
	    if( (y <= 0 && d <= y) || (y >= 0 && u >= y) )
	        flag2 = 1;
	        
	    // printing final answer
	    if(flag1 == 1 && flag2 == 1)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}

