// Codeforces Round #689 (Div. 2, based on Zed Code Competition)
// problem: (A) String Generation
// Problem Link: https://codeforces.com/problemset/problem/1461/A

// CODE

#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        char ch = 'a';
        for(int i=0; i<n; i++)
        {
            cout << ch;
            if(ch == 'a')
                ch = 'b';
            else if(ch == 'b')
                ch = 'c';
            else
                ch = 'a';
        }
        cout << "\n";
    }
	return 0;
}

