// Lab Assignment 6:
// Given an M × N matrix, which is row-wise and column-wise sorted (with all strictly increasing elements in any row or column), write a program in Python to report all occurrences of a given element in it in linear time.

// For example,

// Input:
//  
// [ -4 -3 -1  3  5 ]
// [ -3 -2  2  4  6 ]
// [ -1  1  3  5  8 ]
// [  3  4  7  8  9 ]
//  
// Output:
//  
// Element 3 is found at position (0, 3)
// Element 3 is found at position (2, 2)
// Element 3 is found at position (3, 0)


#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> solve(vector<vector<int>> &grid,int value){
    vector<pair<int,int>>ans;
    int i=0;
    int j =lower_bound(grid[0].begin(),grid[0].end(),value)-grid[0].begin();
    if(grid[i][j]!=value) 
        j--;
    while(j>=0&&i<grid.size()){
        int element=grid[i][j];
        if(element==value){
            ans.push_back({i,j});
            i++;
            j--;
        }
        else if(element>value){
            j--;
        }
        else if(element<value){
            i++;
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> grid = {{-4, -3, -1, 3, 5}, {-3, -2, 2, 4, 6}, {-1, 1, 3, 5, 8}, {3, 4, 7, 8, 9}};
    vector<pair<int, int>> ans  = solve(grid, 3);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i].first<<"," <<ans[i].second<<endl;
    }

}