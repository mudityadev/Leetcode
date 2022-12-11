#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

// *         1
// *       1   1
// *     1   2   1
// *   1   3   3   1

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> r;

    for(int i=0;i<numRows;i++){
        vector<int> v(i+1, 1);
        for(int j = 1; j < i;j++){
            v[j] = r[i-1][j-1] + r[i-1][j];
        }
        r.push_back(v);
    }

    return r;
}

int main()
{
    int numRow;
    cin>>numRow;

    vector<vector<int>> generatePas = generate(numRow);

    for(auto genPas : generatePas){
        for(auto gp : genPas){
            cout << gp <<" ";
        }
        cout << endl;
    }
}