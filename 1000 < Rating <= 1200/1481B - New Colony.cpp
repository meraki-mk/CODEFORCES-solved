// Codeforces Round #699 (Div. 2)
// problem link: https://codeforces.com/problemset/problem/1481/B
// problem tags :   brute force    greedy    implementation    *1100

// CODE

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int height[n+1];
	    for(int i=1; i<=n; i++) 
	        cin >> height[i];
	        
	    int pos = 0;
	    while(k--)  
	    {
	        pos = 1;
	        for(int i=1; i<=n; i++)
	        {
	            if(i == n)
	                pos = -1;
	            else if(height[i+1] <= height[i])
	                pos++;
	            else if(height[i+1] > height[i])
	            {
	                height[i] += 1;
	                break;
	            }
	        }
	        if(pos == -1)
	            break;
	    }
	    cout << pos << "\n";
	}
	return 0;
}

