#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) 
{

    int low=0,mid = 0, high = nums.size() -1;

    while( mid <= high )
    {
        switch(nums[mid])
        {
            // case of 0
            case 0:
                swap(nums[low++],nums[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[high--],nums[mid]);
                break;

        }
    }

    
}

// ********** MAIN FUNCTION *********** // 
int main()
{
    vector<int> nums = {2,0,2,1,1,0}; 
    sortColors(nums);
    for (auto i : nums) cout << i << " ";
    cout<<endl;
    cout<<endl;
    return 0;
}