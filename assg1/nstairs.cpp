// Lab Assignment 1:
// Problem1:
// Simran is running up a staircase with N steps, and can hop(jump) either 1 step, 2 steps or 3 steps at a time. You have to count, how many possible ways Simran can run up to the stairs.
// Input Format:
// Input contains integer N that is number of steps
// Output Format:
// Output for each integer N the no of possible ways w.
// Constraints
// 1≤N≤30
// SAMPLE INPUT: 4
// SAMPLE OUTPUT: 7

#include <bits/stdc++.h>
using namespace std;

int count(int n){
    if(n<=2){
    return n;
    }
    if(n==3){
        return 4;
    }
    
    return count(n-1)+count(n-2)+count(n-3);

     
}

int main(){
    // int n;
    // cin>>n;
    cout<<count(4);
}