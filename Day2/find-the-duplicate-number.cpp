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
    int findDuplicate(vector<int>& arr) 
    {   
        
        int slow = arr[0];
        int fast = arr[0];
        do
        {
            slow = arr[slow];
            fast = arr[arr[fast]];
        }while(slow != fast);
     
        //slow has the variable
        slow = arr[0];
        while(slow !=fast)
        {
            slow = arr[slow];
            fast = arr[fast];
        }
        
        
        
        return slow;
    }
};

void solve()
{
    // take inputs if needed 
    
    Solution s;
    vector<int> arr = {1,3,4,2,2};
    int res = s.findDuplicate(arr);
    cout<<res<<endl;
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
