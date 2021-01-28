// Codeforces Round #691 (Div. 2)
// Problem Link: https://codeforces.com/problemset/problem/1459/B

// CODE

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    if(n%2 == 0)
        cout << pow((n/2)+1, 2);
    else
        cout << 2*((n/2)+2)*((n/2)+1);
	return 0;
}

