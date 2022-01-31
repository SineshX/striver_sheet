// next-permutation
#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;
void nextPermutation(vector<int> &nums)
{   
    int n = nums.size();
    if(n <2) return;

    int i = n-1; //last index
    //this >= nearly killed my code :_: :)
    while( nums[i-1] >= nums[i])
    {
        i--;
        if(i==0)
        {
            //reverse  vector
            reverse(nums.begin(),nums.end());
            return;
        }
    }
    // i has largest
    //i -1 has small element 

    //find just larger e(i-1)

    int j = n-1;
    while(nums[j] <= nums[i-1])
    {
        j--;
    }

    // j has the just next greater element we need to replace it to small pos
    swap(nums[j] , nums[i-1]);

    //reverse rest of array : i se last tak
    reverse(nums.begin() + i, nums.end());
    return;


}

// ********** MAIN FUNCTION *********** // 
int main()
{
    vector <int>v = { 1,2,2,5,1};
    // int a[] = { 1,2,2,5,1};


    nextPermutation(v);

    // for (auto i : v) cout << i << " ";
    
    for (auto i : v) cout << i << " ";
    cout<<endl;
    return 0;
}