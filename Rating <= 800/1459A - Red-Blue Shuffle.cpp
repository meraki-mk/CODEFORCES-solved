//  Codeforces Round #691 (Div. 2)
// Problem Link : https://codeforces.com/problemset/problem/1459/A

// CODE

#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string r, b;
        cin >> r >> b;
        int cr=0, cb=0;
        for(int i=0; i<n; i++)
        {
            if(r[i] > b[i]) cr++;
            else if(b[i] > r[i])    cb++;
        }
        if(cr > cb) cout << "RED\n";
        else if(cb > cr)    cout << "BLUE\n";
        else    cout << "EQUAL\n";
    }
	return 0;
}

