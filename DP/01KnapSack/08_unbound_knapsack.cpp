#include<iostream>
#include<vector>
using namespace std;
int f( int i,int M, vector<int>& wt , vector<int>& val ){

    if( i==0|| M==0) return 0;

    if(wt[i-1]>M) return f(i-1,M,wt,val);

    return max( val[i-1]+f(i-1,M-wt[i-1],wt,val),f(i-1,M,wt,val));
}
int f1( int i,int M, vector<int>& wt , vector<int>& val ){

    if( i==0|| M==0) return 0;

    if(wt[i-1]>M) return f1(i-1,M,wt,val);

    return max( val[i-1]+f1(i,M-wt[i-1],wt,val),f1(i-1,M,wt,val));
}


// recursion + memorization
int f3( int i,int M, vector<int>& wt , vector<int>& val , vector<vector<int>>&dp){

    if( i==0|| M==0) return dp[i][M]=0;
   if(dp[i][M]!=-1) return dp[i][M];
    if(wt[i-1]>M) return dp[i][M]= f1(i-1,M,wt,val);

    return  dp[i][M]= max( val[i-1]+f1(i,M-wt[i-1],wt,val),f1(i-1,M,wt,val));
}


int main(){

    vector<int>wt={3,2,4,5,7,9,20,12};
    vector<int>val={2,3,4,5,6,7,12,13};
    int n=8;
    int w=16;
    cout<<f(n,w,wt,val)<<endl;
    cout<<f1(n,w,wt,val)<<endl;

    vector<vector<int>>dp(n+1,vector<int>(w+1,-1));
    cout<<f3(n,w,wt,val,dp)<<endl;
}