#include<iostream>
#include<vector>
using namespace std;

int f1(vector<int>&arr , int i , int target , vector<vector<int>> &dp){
    if(target < 0)
        return 0;
    if(target==0) return   dp[i][target]=1;
    if(i==0) return dp[i][target]=0;

   
    if(dp[i][target]!=-1) return dp[i][target];
   return dp[i][target]=f1( arr,i-1, target,dp)+f1(arr,i-1,target-arr[i-1],dp);

}
 int f( vector<int> & arr, int i , int target){

    if( i==0){
        if( target==0) return 1;
        return 0;
    }
    return f( arr , i-1, target)+ f(arr,i-1, target-arr[i-1]);
 }
int main(){
    vector<int> arr= { 1,3,5,1,8,9,10};
    vector<vector<int>> dp(7+ 1, vector<int>(10 + 1, -1));
    cout<< f(arr, 7,10)<<endl;
    cout<<f1(arr,7,10,dp);
}