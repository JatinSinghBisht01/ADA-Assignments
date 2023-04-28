// Program 1: Given a Stack 'S'. Write a Python Program to reverse the stack recursively.
// Note: Looping through the stack is not allowed. You need to return a stack that is sorted in decreasing order.

// Example:
// Given stack: 5 1 2 6 4
// Output: 4 6 2 1 5

#include<bits/stdc++.h>
using namespace std;

void reversestack(stack<int> &st)
{
    if(st.empty()==true)
    {
        return;
    }
    
    int a = st.top();
    st.pop();

    reversestack(st);
    st.push(a);
}

//             OR
void reverse(stack<int> &s){
    if(s.size()==1){
        cout<<s.top()<<endl;
        s.pop();
        return;
    }
    cout<<s.top()<<endl;
    s.pop();
    reverse(s); 
}

int main()
{
 stack<int> s;
 s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
 reverse(s);
 
}
