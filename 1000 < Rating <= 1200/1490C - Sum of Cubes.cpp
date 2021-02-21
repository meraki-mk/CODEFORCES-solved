// Codeforces Round #702 (Div. 3)
// Problem Link : https://codeforces.com/problemset/problem/1490/C
// problem tags : binary search    brute force    brute force    math    *1100

// CODE

#include <iostream>
#include <unordered_set>
using namespace std;

unordered_set<long long int> cube;

void find_cube()
{
    long long int n = 10005;
    for(long long int i = 1; i<n; i++)
        cube.insert(i * i * i);
}

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	find_cube();
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    long long int n;
	    cin >> n;
	    
	    int ans = 0;
	    for(long long int i = 1; i*i*i <= n; i++)
	    {
	        long long int diff = n - i * i * i;
	        if(cube.find(diff) != cube.end())
	        {
	            ans = 1;
	            break;
	        }
	        if(ans)
	            break;
	    }
	    if(ans)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}
