#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

 int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while (slow != fast);

        fast = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }

int main()
{
    vector<int> nums = {1,3,4,2,2};
    
    int duplicateNumbe = findDuplicate(nums);

}