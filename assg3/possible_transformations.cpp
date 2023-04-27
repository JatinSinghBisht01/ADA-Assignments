// Given a string 'S'. Write a program to find an array of all possible strings in any order that can be formed by transforming every letter individually to the lowercase or the uppercase.
// Note:
// 1. You can print the array in any order.
// 2. The string 'S' only contains English alphabets and digits.

// Sample Input 1:
// a1b
// Sample Output 1:
// A1B A1b a1B a1b

// Sample Input 2:
// 0
// Sample Output 2:
// 0
// Explanation: There is no alphabet in the string, so we get the output the same as the input string.

#include<bits/stdc++.h>
using namespace std;
vector<string> sol;

void helper(string s,set<string> &ans,int index,string ds)
{
    //if the index we are currently on is the length hence we have traversed the string completely so just store the ans now.
    if(index==s.length())
    {
        ans.insert(ds);
        return;
    }
    
    //if its a number use it as it is.
    if(s[index]-'0'>=0 && s[index]-'0'<=9)
    {
        helper(s,ans,index+1,ds+s[index]);
    }

    //both characters are now ready.
    char u = toupper(s[index]);
    char l = tolower(s[index]);
    
    //now once we will use the lower case of it, and once we will call it with the upper case.
    helper(s,ans,index+1,ds+l);
    helper(s,ans,index+1,ds+u);
}


//                             OR
void transform(string &s, int i){
    if(i==s.size()){
        sol.push_back(s);
        return;
    }

    transform(s, i+1);
    if(s[i]!= 1 || s[i]!= 2||s[i]!= 3||s[i]!= 4||s[i]!= 5 || s[i]!= 6 ||s[i]!= 7|| s[i]!= 8 || s[i]!= 9 || s[i]!= 0){
        if(isupper(s[i])){
            s[i] = tolower(s[i]);
            transform(s, i+1);
        }
        else if(islower(s[i])){
            s[i] = toupper(s[i]);
           
        }
         transform(s, i+1);
    }
    
}


int main()
{
    string s = "a1bc";
    transform(s, 0);
    for(int i=0; i<sol.size(); i++){
        cout<<sol[i]<<endl;
    }
 return 0;
}