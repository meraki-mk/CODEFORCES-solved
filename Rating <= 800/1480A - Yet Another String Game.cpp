// Codeforces Round #700 (Div. 2)
// problem link: https://codeforces.com/problemset/problem/1480/A

// CODE

#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    for(int i=0; i<s.length(); i++)
	    {
	        if(i % 2 == 0)  // Alice's turn
	        {
	            if(s[i] != 'a')
	                cout << "a";
	            else
	                cout << "b";
	        }
	        else            // Bob's turn
	        {
	            if(s[i] != 'z')
	                cout << "z";
	            else
	                cout << "y";
	        }
	    }
	    cout << "\n";
	}
	return 0;
}

