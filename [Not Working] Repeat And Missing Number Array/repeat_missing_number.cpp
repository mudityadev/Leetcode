// ! not completed

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

void repeatedNumber(vector<int> &nums){
    
    int missing_element = 0;    
    int repeating_element = 0;    
    for (int index = 0; index < nums.size(); index++)
    {
        if(nums[abs(nums[index] - 1)] < 0){
            missing_element = abs(nums[index]);
        }else{
            nums[abs(nums[index] - 1)] = -nums[abs(nums[index] - 1)];
        }
    }

    for (int index = 0; index < nums.size(); index++)
    {
        if(nums[index] > 0){
            repeating_element = index + 1;
            break;
        }
    }

    cout << "missing element = " << missing_element << "\n";
    cout << "repeating element = " << repeating_element << "\n";
    
    cout << "hello";
    
}

// Input:[3 1 2 5 3] 
// Output:[3, 4] 
int main()
{
    vector<int> nums = {3,1,2,5,3};
    repeatedNumber(nums);
}