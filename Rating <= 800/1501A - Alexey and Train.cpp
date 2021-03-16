// Codeforces Round #707 (Div. 2, based on Moscow Open Olympiad in Informatics)
// Problem link: https://codeforces.com/problemset/problem/1501/A


// CODE

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    // input for train schedule
	    vector<pair<int, int> > schedule(n+1);
	    for(int i=1; i<=n; i++)
	    {
	        cin >> schedule[i].first >> schedule[i].second;
	    }
	    
	    // input for tm (delay)
	    vector<int> delay(n+1);
	    for(int i=1; i<=n; i++)
	        cin >> delay[i];
	    
	    // to calculate the stay time of the train at station
	    vector<int> stay(n+1);
	    for(int i=1; i<=n; i++)
	    {
	        stay[i] = (((schedule[i].second)-(schedule[i].first))+1)/2;
	    }
	    
	    // to calculate travel time
	    vector<int> travel(n+1);
	    for(int i=2; i<=n; i++)
	    {
	        travel[i] = schedule[i].first - schedule[i-1].second;
	    }
	    
	    // to calculate answer
	        // for i = i
	    int ans = schedule[1].first + delay[1];
	    int temp = ans + stay[1];
	    if(temp < schedule[1].second)
	        temp = schedule[1].second;
	        // for the i=2 to i=n
        for(int i=2; i<=n; i++)
        {
            ans = temp + delay[i] + travel[i];
            temp = ans + stay[i];
            if(temp < schedule[i].second)
	        temp = schedule[i].second;
        }
	    cout << ans << "\n";
	}
	return 0;
}

