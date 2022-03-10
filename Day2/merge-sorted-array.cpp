#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

#define ll long long
#define mod 1000000007

// pasete class solution 
class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) 
    {	
      	if(num2.empty()) return;
  
        for(int i=m,j=0 ;i<m+n;i++,j++)
        {
            num1[i] = num2[j];
        }
        
        sort(num1.begin(),num1.end());
        
        
    }
    
};

void solve()
{
    // take inputs if needed 
    
    Solution s;
    vector<int> num1 = {1,2,3,0,0,0};
    vector<int> num2 = {2,5,6};
    int m = 3, n = 3;
    s.merge(num1,m,num2,n);
    // print outputs if needed
    for(auto i:num1)
    {
        cout<<i<<" ";
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll test=1;
//cin>>test;
    while(test--) solve();
    return 0;
}
