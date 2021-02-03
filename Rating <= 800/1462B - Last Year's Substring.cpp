// Codeforces Round #690 (Div. 3)
// Problem Link:  https://codeforces.com/problemset/problem/1462/B

// CODE

#include <iostream>
using namespace std;

int main() 
{
    int t;
	cin >> t;
	while (t--)
	{
	    int n;
	    cin >> n;
	    char s[n+1];
	    for(int i=1; i<=n; i++)
	        cin >> s[i];
	        
	    int flag = 0;
	    if(s[1] == '2' && s[2] == '0' && s[3] == '2' && s[4] == '0')
	        flag = 1;
	    else if(s[1] == '2' && s[n-2] == '0' && s[n-1] == '2' && s[n] == '0')
	        flag = 1;
	    else if(s[1] == '2' && s[2] == '0' && s[n-1] == '2' && s[n] == '0')
	        flag = 1;
	    else if(s[1] == '2' && s[2] == '0' && s[3] == '2' && s[n] == '0')
	        flag = 1;
	    else if(s[n-3] == '2' && s[n-2] == '0' && s[n-1] == '2' && s[n] == '0')
	        flag = 1;
	   
	    if(flag == 1)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}

