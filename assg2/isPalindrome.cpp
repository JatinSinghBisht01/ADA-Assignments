
#include <iostream>
using namespace std;
int helper(string str){
    int n = str.size();
    int i = 0 ;
    bool flag=1;
    while(i<n/2){
        if(str[i]==str[n-i-1]){
            i++;

        }else{
            flag=0;
            return flag;
        }

    }
    return flag;
}
int main(){
    string str;
    cin>>str;
    if(helper(str)) cout<<"pal"<<endl;
    else cout<<"not pal"<<endl;

    return 0;
}