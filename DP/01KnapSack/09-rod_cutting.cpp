#include<bits/stdc++.h>
using namsespace std;
int f(int i, int l, vector<int>& lenght , vector<int>& price, vector<vector<int>>&dp){
if( i==0|| l==0) return dp[i][l]=0;
if( dp[i][j] !=-1) return dp[i][j];
if(lenght[i-1]>l) return dp[i][j]= f(i-1,l,lenght,price),dp;

return max( price[i-1] + f(i,l-lenght[i-1],lenght,price,dp),f(i-1,l,lenght,price,dp))
  }
int main(){
  vector<int> lenght={1,2,3,4,5,6,7,8,10};
  vector<int> price={2,3,4,5,6,7,8,9,11};
  int n= length.size();
  int l;
  vector<vector<int>>dp(n+1,vector<int>(l+1,-1));
  cout<<f(n, l ,lenght,price,dp)<<endl;


  return 0;
}
