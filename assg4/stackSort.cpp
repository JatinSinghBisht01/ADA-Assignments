#include<bits/stdc++.h>
using namespace std;
void sort(stack<int> &s, vector<int> &v){
    if(v.empty()){
        return;
    }
    if(s.empty()){
        int val = v[0];
        s.push(val);
        v.erase(v.begin(), v.begin()+1);
    }
    
    else if(s.top()>v[0]){
        int top = s.top();
        s.pop();
        v.push_back(top);
    }
    else if(s.top()<=v[0]){
        s.push(v[0]);
        v.erase(v.begin(), v.begin()+1);
    }
    sort(s, v);
}

void stackToVector(stack<int> &s, vector<int> &v){
    if(s.empty()){
        return;
    }
    v.push_back(s.top());
    s.pop();
    stackToVector(s, v);
}

void printStack(stack<int> &s, vector<int> &v){
    if(s.empty()){
        return;
    }
    cout<<s.top()<<" ";
    s.pop();
    printStack(s, v);
}

int main()
{
    stack<int> s;
    int val;
    cin>>val;
    while(val!=-1){
        s.push(val);
        cout<<val<<" ";
        cin>>val;
        
    }
    cout<<endl;
    vector<int> v;
    stackToVector(s, v);
    // while(!s.empty()){
    //     v.push_back(s.top());
    //     s.pop();
    // }
    sort(s, v);  
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }  
    printStack(s, v);
 return 0;
}