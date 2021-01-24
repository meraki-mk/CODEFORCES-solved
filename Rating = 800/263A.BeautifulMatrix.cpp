//  Codeforces Round #161 (Div. 2)
// Problem Link: https://codeforces.com/problemset/problem/263/A

// CODE

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int x=0, y=0, num;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cin >> num;
            if(num == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    int ans = abs(3-x) + abs(3-y);
    cout << ans;
    return 0;
}
 
