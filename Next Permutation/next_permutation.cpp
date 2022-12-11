#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

void nextPermutation(vector<int>& nums) {
    int n = nums.size(), l,k;

    for (k = n-2; k >= 0; k--)
    {
        if(nums[k] < nums[k+1]){
            break;
        }
    }

    if(k < 0){
        reverse(nums.begin(), nums.end());
    }else{
        for(l=n-1; l < k;l--){
            if(nums[l] > nums[k]){
                break;
            }
        }
    }

    swap(nums[l], nums[k]);
    reverse(nums.begin()+k+1, nums.end());
}


int main()
{
    vector<int> nums = {1,1,5};
    // vector<int> nums = {1,3,6,5};
    nextPermutation(nums);

    for(auto n : nums){
        cout << n <<" ";
    }
    cout << endl;

}