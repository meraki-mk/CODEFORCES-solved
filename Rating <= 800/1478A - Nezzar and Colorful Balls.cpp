// Codeforces Round #698 (Div. 2)
// problem link: https://codeforces.com/problemset/problem/1478/A

// CODE

#include <iostream>
#include <map>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    map<int, int> m;
	    for(int i=0; i<n; i++)
	    {
	        int temp;
	        cin >> temp;
	        m[temp]++;  // to count the frequency of each number
	    }
	    
	    int ans = 0;
	    for(auto i=m.begin(); i != m.end(); i++)
	            if(i->second > ans)
	                ans = i->second;  // to find the maximum occurance of a number
	                
	    if(ans == 0)
	        cout << "1\n";
	    else
	        cout << ans << "\n";
	}
	return 0;
}

