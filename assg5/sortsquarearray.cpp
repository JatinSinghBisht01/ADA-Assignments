// Given a sorted array A containing N integers both positive and negative.
// You need to create another array containing the squares of all the elements in A and return it in non-decreasing order.
// Write a Python program to implement this in O(N) time.

// Example Input

// Input 1:
// A = [-6, -3, -1, 2, 4, 5] 
// Input 2:
// A = [-5, -4, -2, 0, 1]

// Example Output
// Output 1:
// [1, 4, 9, 16, 25, 36] 
// Output 2:
// [0, 1, 4, 16, 25]

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {-22, -5, -3, -2, -1, 0, 5, 8, 9, 21};
     int n=arr.size();
        for(int i=0;i<n;i++)
        {
            arr[i]=abs(arr[i]*arr[i]);
        }
    sort(arr.begin(),arr.end());
    for(auto it: arr){
        cout<<it<<" ";
    }
}
