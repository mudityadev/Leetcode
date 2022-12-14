#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{

    int i = m - 1;
    int j = n - 1;
    int k = (m + n) - 1;

    while (j >= 0)
    {
        if (i < 0 || nums1[i] < nums2[j])
        {
            nums1[k--] = nums2[j--];
        }
        else
        {
            nums1[k--] = nums1[i--];
        }
    }
}

int main()
{
    // nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);

    for (auto x : nums1)
    {
        cout << x << " ";
    }
    cout << endl;
}