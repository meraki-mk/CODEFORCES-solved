// Codeforces Round #690 (Div. 3)
// Problem Link: https://codeforces.com/problemset/problem/1462/A

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
	    int a[n+1];
	    for(int i=1; i<=n; i++)
	        cin >> a[i];
	    int start=1, end=n;
	    for(int i=1; i<=n; i++)
	    {
	        if(i%2==1)
	        {
	            cout << a[start] << " ";
	            start++;
	        }
	        else
	        {
	            cout << a[end] << " ";
	            end--;
	        }
	    }
	    cout << "\n";
	 }
	return 0;
}

