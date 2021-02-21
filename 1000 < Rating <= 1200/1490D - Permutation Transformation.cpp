// Codeforces Round #702 (Div. 3)
// problem: (D) Permutation Transformation
// problem link : https://codeforces.com/problemset/problem/1490/D
// problem tags :   dfs and similar    divide and conquer    implementation    *1200

// CODE

#include <iostream>
using namespace std;

int a[105], depth[105];

void find_depth(int left, int right, int height)
{
    if(left > right)                        // base condition
        return;
        
    int pos = left;                         // assumed position of max element in the range from left to right
    for(int i=left+1; i<=right; i++)
        if(a[i] > a[pos])
            pos = i;                        // to find the max element
    
    depth[a[pos]] = height;                 // depth of the max element
    
    find_depth(left, pos-1, height+1);      // to find the depth of the elements to the left of max element
    find_depth(pos+1, right, height+1);     // to find the depth of the elements to the right of max element
}

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    for(int i=0; i<n; i++)
	        cin >> a[i];
	    find_depth(0, n-1, 0);          // to find the depth of all elements using recursion
	    
	    for(int i=0; i<n; i++)
	        cout << depth[a[i]] << " ";
	    cout << "\n";
	}
	return 0;
}

