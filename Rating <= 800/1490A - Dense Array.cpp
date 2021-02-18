// Codeforces Round #702 (Div. 3)
// Problem link: https://codeforces.com/problemset/problem/1490/A

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    for(int i=0; i<n; i++)
	        cin >> v[i];
	    
	    int count = 0;
	    for(int i=0; i<n-1; i++)
	    {
	        float a = max(v[i], v[i+1]);
	        float b = min(v[i], v[i+1]);
	    	while(a/b > 2.0)
	    	{
			a /= 2;
			count++;
	    	}
	    }
	    cout << count << "\n";
	}
	return 0;
}

