// kaddens algo
#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int maxsum = INT_MIN;
    for (auto itr : nums)
    {
        sum += itr;
        maxsum = max(sum, maxsum);
        if (sum < 0)
            sum = 0;
    }
    return maxsum;
}

// ********** MAIN FUNCTION *********** //
int main()
{

    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};

    
    cout <<maxSubArray(v)<< endl;
    return 0;
}