#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

#define ll long long
#define mod 1000000007

void print2DVector(vector<vector<int>> vect)
{   // Number of rows;
    int m = vect.size();
    // Number of columns
    int n = vect[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << vect[i][j] << " ";
        cout << endl;
    }
}
// pasete class solution 
class Solution 
{
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) 
    {
        if(interval.empty())
            return interval;
        // to store 
        vector<vector<int>> res;
        // sort intervals
        sort(interval.begin(), interval.end());

        // 
        res.push_back(interval[0]);
        for(int i = 1, n = interval.size(), j = 0; i <  n ;i++)
        {
            if( res[j][1] < interval[i][0]  ) 
            {
            res.push_back(interval[i]);
            j++;
            }
            else res[j][1] = max(res[j][1], interval[i][1]);
        }
        return res;
    }
};

void solve()
{
    // take inputs if needed 
    vector<vector<int>> input
    {
        {1,3},{2,6},{8,10},{15,18}
    };
    Solution s;
    print2DVector(s.merge(input));
}
int main() 
{
    
    ll test=1;
//cin>>test;
    while(test--) solve();
    return 0;
}
