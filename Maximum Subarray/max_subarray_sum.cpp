#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

int maxSubArray(vector<int>& nums) {
    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int index=0;index<nums.size();index++){
        currentSum += nums[index];
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0) currentSum = 0;
    }

    return maxSum;
}

int main()
{

    // Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
    // Output: 6    

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    int maxSum = maxSubArray(nums);

    cout << maxSum << " ";


}