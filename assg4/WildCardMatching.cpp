#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

bool solveRec(string &s,string &p,int i,int j)
{
    //base case
    if(i<0 && j<0)
    {
        return true; 
    }

    if(i>=0 && j<0)
    {
        return false;
    }

    if(i<0 && j>=0)
    {
        for(int k=0;k<=j;k++)
        {
            if(p[k]!='*')
            {
                return false;
            }
        }
        return true;
    }

    if(s[i]==p[j] || p[j]=='.')
    {
        return solveRec(s,p,i-1,j-1);
    }
    else if(p[j]=='*')
    {
        return (solveRec(s,p,i,j-1) || solveRec(s,p,i-1,j));
    }
}

bool solveMemo(string &s,string &p,int i,int j,vector<vector<int> > &dp)
{
    if(i<0 && j<0)
    {
        return true; 
    }
    if(i>=0 && j<0)
    {
        return false;
    }

    if(i<0 && j>=0)
    {
        for(int k=0;k<=j;k++)
        {
            if(p[k]!='*')
            {
                return false;
            }
        }
        return true;
    }

    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }

    if(s[i]==p[j] || p[j]=='.')
    {
        dp[i][j] = solveRec(s,p,i-1,j-1);
        return dp[i][j];
    }
    else if(p[j]=='*')
    {
        dp[i][j] = (solveRec(s,p,i,j-1) || solveRec(s,p,i-1,j));
        return dp[i][j];
    }
    else
    {
        return false; 
    }
}


bool isMatch(string s,string p)
{
    int n = s.length();
    int m = p.length();

    //recuresive solution
    // return solveRec(s,p,n-1,m-1);

    //memoizing the solution
    vector<vector<int> > dp(n,vector<int>(m,-1));
    return solveMemo(s,p,n-1,m-1,dp);
}
 
int main()
{
    string s,p;
    cin >> s >> p;

    cout << isMatch(s,p);
}