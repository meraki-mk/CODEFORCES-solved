// Codeforces Beta Round #63 (Div. 2)
// problem link: https://codeforces.com/problemset/problem/69/A

// CODE

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x=0, y=0, z=0;
    while(n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    
    if(x == y && x == z && x == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

