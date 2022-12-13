#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>



 int maxProfit(vector<int>& prices) {
    int profit = 0;
    int buy = INT_MAX;

    for (int day = 0; day < prices.size(); day++)
    {
        buy = min(buy, prices[day]);
        profit = max(profit, prices[day] - buy);   
    }
    return profit;
}

int main()
{
// Input: prices = [7,1,5,3,6,4]
// Output: 5

// Input: prices = [7,6,4,3,1]
// Output: 0

    // vector<int> prices = {7,1,5,3,6,4};
    vector<int> prices = {7,6,4,3,1};

    int mxProfit = maxProfit(prices);
    cout << mxProfit <<" ";
}