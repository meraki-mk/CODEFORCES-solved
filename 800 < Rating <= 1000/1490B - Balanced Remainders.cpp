// Codeforces Round #702 (Div. 3)
// Problem Link: https://codeforces.com/problemset/problem/1490/B

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
	    vector<int> v(n), c(3,0);
	    int ans = n/3, res = 0;
	    for(int i=0; i<n; i++)
	    {
	        cin >> v[i];
	        c[v[i] % 3]++;
	    }
	    //cout << "c0 = " << c[0] << " c1 = " << c[1] << " c2 = " << c[2] << "\n";
	    
	    while(min(c[0], min(c[1], c[2])) != ans)
	    {
	        for(int i=0; i<3; i++)
	        {
	            if(c[i] > ans)
	            {
	                int diff = c[i] - ans;
	                res += diff;
	                c[i] = ans;
	                c[(i+1) % 3] += diff;
	            }
	        }
	    }
	    
	    cout << res << "\n";
	}
	return 0;
}

