#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>


void sortColors(vector<int>& nums) {
    // low = 0
    // mid = 1
    // high = 2

    int low = 0, mid = 0, high = nums.size()-1;
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[mid++], nums[low++]);
        }else if(nums[mid] == 1){
            mid++;
        }else{
            swap(nums[mid], nums[high--]);
        }
    }
}


int main()
{
    vector<int> nums = {2,0,2,1,1,0};
    // vector<int> nums = {2,0,1};

    sortColors(nums);    

    for(auto val : nums){
        cout << val <<" ";
    }
    cout << endl;
}