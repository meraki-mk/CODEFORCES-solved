// Contest: Codeforces Round #197 (Div. 2)
// Problem Link: https://codeforces.com/problemset/problem/339/A

// CODE

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '+')
            continue;
        int temp = s[i]-48;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
    {
        if(i == v.size()-1)
            cout << v[i];
        else
            cout << v[i] << "+";
    }
    return 0;
}
