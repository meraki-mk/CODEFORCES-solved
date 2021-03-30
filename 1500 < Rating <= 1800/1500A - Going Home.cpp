
// Codeforces Round #707 (Div. 1, based on Moscow Open Olympiad in Informatics)
// Problem link: https://codeforces.com/problemset/problem/1500/A
// Problem tags:     brute force    hashing    implementation    math    *1800


// CODE

#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>
using namespace std;
 

int main()
{
    // input
    int n;
    cin >> n;
    n = min(n, 2000);
    vector<int> arr(n+1);
    for(int i=1; i<=n; i++)
        cin >> arr[i];
    int flag = 0;
    // to find the pairs
    unordered_map<int, pair<int, int> > ans;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            int sum = arr[i] + arr[j];
            if(ans.find(sum) != ans.end())
            {
                if(ans[sum].first != i && ans[sum].first != j && ans[sum].second != i && ans[sum].second != j)
                {
                    cout << "YES\n";
                    cout << i << " " << j << " " << ans[sum].first << " " << ans[sum].second;
                    flag = 1;
                    break;
                }
            }
            ans[sum] = {i, j};
        }
        if(flag == 1)
            break;
    }
    if(flag == 0)
        cout << "NO\n";
    return 0;
}
 


