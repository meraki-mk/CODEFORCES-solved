// Codeforces Round #690 (Div. 3)
// Problem Link: https://codeforces.com/problemset/problem/1462/C

// CODE

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
  int t;
	cin >> t;
	while (t--)
	{
	      int x;
	      cin >> x;
        if(x > 45)
        {
            cout << "-1\n";
            continue;
        }
        if(x % 10 == x)
        {
            cout << x << "\n";
            continue;
        }
        int num = 9, sum=0, temp = x, flag = 0;
        vector<int> ans;
        while(true)
        {
            ans.push_back(num);
            sum += num;
            temp -= num;
            if(sum == x)
            {
                flag = 1;
                break;
            }
            num--;
            if(temp < num)
                num = temp;
            
            if(num == 0)
                break;
        }
        if(flag == 0)
        {
            cout << "-1\n";
            continue;
        }
        for(int i=ans.size()-1; i>=0; i--)
            cout << ans[i];
        cout << "\n";
	}
	return 0;
}

