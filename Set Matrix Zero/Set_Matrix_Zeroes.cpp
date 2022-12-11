// Given an m x n integer matrix matrix, if an element is 0,
// set its entire row and column to 0's.

// You must do it in place.

// Input: matrix = 
// [[1,1,1],
// [1,0,1],
// [1,1,1]]
// Output:
//        [[1,0,1]
        // [0,0,0],
        // [1,0,1]]

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>


void setZeroes(vector<vector<int>>& matrix) {

    int rows = matrix.size();
    int cols = matrix[0].size();
    int col1 = 1;


    // traverse and check the element and if it is zero then update the array
    for (int i = 0; i < rows; i++)
    {
        if(matrix[i][0] == 0) col1 = 0;
        for (int j = 0; j < cols; j++)
        {
            if(matrix[i][j] == 0){
                matrix[i][0] = matrix[0][j] = 0;  // updating the array
            }
        }
    }


    // traverse backwards and checking the array and update the element

    for (int i = rows-1; i >= 0; i--)
    {
        for (int j = cols-1; j >= 1; j--)
        {
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }

        if(col1 == 0){
        matrix[i][0] = 0;
    }
    
    }

 

    for(auto ma : matrix){
        for(auto m : ma){
            cout << m << " ";
        }
        cout << endl;
    }
    
}

int main()
{
     vector<vector<int>> matrix = {
        // {1,1,1},
        // {1,0,1},
        // {1,1,1},

       {0,1,2,0},
       {3,4,5,2},
       {1,3,1,5}

     };

    setZeroes(matrix);


}
