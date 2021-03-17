// Codeforces Round #707 (Div. 2, based on Moscow Open Olympiad in Informatics)
// Problem link: https://codeforces.com/problemset/problem/1501/B
// Problem tags:    dp    implementation    sortings    *900

// CODE

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
	    
	    // to take input for the amount of cream to be poured
	    vector<int> cream(n);
	    for(int i=0; i<n; i++)
	        cin >> cream[i];
	        
        // to calculate answer
        vector<int> ans(n+1, 0);
        int res = 0;
        for(int i=n-1; i>=0; i--)
        {
            res = max(cream[i], res);
            if(res == 0)
                continue;
            ans[i] = 1;
            res--;
        }
        
        // to print answer
        for(int i=0; i<n; i++)
            cout << ans[i] << " ";
        cout << "\n";
	}
	return 0;
}
 


