#include<bits/stdc++.h>
using namespace std;
int f(int a, vector<int> &b, int i){
    if(i==0){
        return ((int)(a/b[0]));
    }
    int npick = f(a, b, i-1);
    
    int pick = 0;
    if(b[i]<=a){
        
         pick = f(a-b[i], b,  i-1)+1;
    }
    return max(pick, npick);
   
}

int solve(int a, vector<int> &b){
    // vector<int> ans;
    int ans = f(a, b, b.size()-1);
    return ans;

}
int main()
{
    // int a = 12;
  
    // vector<int> b = {3, 4};
    int a = 11;
    vector<int> b = {6, 8, 5, 4, 7};
    cout<<solve(a, b);
    // vector<int> ans = solve(a, b);
    // for(auto it: ans){
    //     cout<<it<<" ";
    // }
 return 0;
}