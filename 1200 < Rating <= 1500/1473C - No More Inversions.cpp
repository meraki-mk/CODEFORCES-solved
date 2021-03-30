
// Educational Codeforces Round 102 (Rated for Div. 2)
// Problem Link: https://codeforces.com/problemset/problem/1473/C
// Problem tags:    constructive algorithms    math    *1500


// CODE

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n+1];
        int c=1;
        for(int i=1; i<=n; i++)
        {
            if(i < k)
            {
                a[i] = c;
                c++;
            }
            if(i >= k)
            {
                a[i] = c;
                c--;
            }
        }
        vector<int> ans;
        for(int i=n; i>=1; i--)
        {
            auto it = find(ans.begin(), ans.end(), a[i]);
            if(it == ans.end())
                ans.push_back(a[i]);
            if(ans.size() == k)
                break;
        }
        for(int i=ans.size()-1; i>=0; i--)
            cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}

