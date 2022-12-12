#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

// * 1. Transpose the image
// * 2. reverse the each row

void print(auto &image){
    for(auto img : image){
        for(auto im : img){
            cout << im <<" ";
        }
        cout << endl;
    }
}


void rotate(vector<vector<int>>& image) {
    int n = image.size();

    // transpose
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
            swap(image[i][k], image[k][i]);
    }

    // reverse the row

    for (int i = 0; i < n; i++)
    {
        reverse(image[i].begin(), image[i].end());
    }
    

    
}


int main()
{
    // {1,2,3},{4,5,6},{7,8,9}

    vector<vector<int>> image = {
        {1,2,3},{4,5,6},{7,8,9}
    };

    print(image);
    rotate(image);
    cout << "after rotate \n";
    print(image);


    

}