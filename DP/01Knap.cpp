#include<bits/stdc++.h>
using namespace std;
int f(vector<int> & arr, vector<int> & val, int m , int n){
    if(n==0 || m==0) return 0 ;  // if size become zero or  element become 0 return 0

    if(arr[n-1]> m) return f(arr, val, m,n-1);

    return max(  f(arr, val, m,n-1) , val[n-1]+ f(arr, val, m-arr[n-1],n-1));

}

int main(){


vector<int> arr= {2,3,4,5,6,7,10,99};
vector<int> val= {10,15,4,5,6,2,10,9};
cout<<f(arr,val,15,8);

    return 0;
}