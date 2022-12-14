#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> r;

        if(intervals.size() == 0) return intervals;

        // sort the array
        sort(intervals.begin(), intervals.end());
        vector<int> temp_interval = intervals[0];

        for(auto it : intervals){
            if(it[0] <= temp_interval[1]){
                temp_interval[1] = max(it[1], temp_interval[1]);
            }else{
                r.push_back(temp_interval);
                temp_interval = it;
            }
        }
        r.push_back(temp_interval);
        return r;
}

// * intervals[i] = [starti, endi]
// * Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// * Output: [[1,6],[8,10],[15,18]]
// ? Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
int main()
{
    vector<vector<int>> list_merge = {
        {1,3},
        {2,6},
        {8,10},
        {15,18}
    }; 

    vector<vector<int>> r = merge(list_merge);

    for(auto values : r){
        for(auto val : values){
            cout << val <<" ";
        }
        cout << endl;
    }
}