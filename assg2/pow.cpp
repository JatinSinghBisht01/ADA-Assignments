// Write a program that reads in two integers and uses  recursion to compute the first raised to the second power.
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
float power(float  a , float  b){
    if(b==0){
        return 1;
    }
    if(a==0) return 0;
 
    return a*power(a,b-1);


}
int main(){
    float a,b;
    cin>>a;
    cin>>b;
    if(b==0){
        cout<<"1";
    }
    else if(b>0 ){   
    cout<<power(a, b);
    }
    else{
        cout<<1/power(a,-b);
    }
    
    
}
