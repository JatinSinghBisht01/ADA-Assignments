#include<bits/stdc++.h>
using namespace std;
#define pi pair<int,int> 
bool cmp(pi&a,pi&b){
    return a.second<b.second;
}

vector<pi> solve(vector<pi> &job){
    vector <pi> ans;
    ans.push_back(job[0]);
    for(int i=1; i<job.size(); i++){
    
        if(ans.back().second < job[i].first ){
            ans.push_back(job[i]);
        }
    }
    return ans;

}

int main(){
    vector<pi> job  = {{2,6}, {3,9}, {3,7}, {6, 10}, {5, 9}, {8, 11}, {9, 14}, {3, 5}, {5, 10}, {2,7}};

    sort(job.begin(), job.end(), cmp);
    //  for(auto it: job){
    //     cout<<it.first << ":"<< it.second<<endl;
    // }
    vector<pi> ans = solve(job);
    cout<<"ans"<<endl;
    for(auto it: ans){
        cout<<it.first << ":"<< it.second<<endl;
    }
}