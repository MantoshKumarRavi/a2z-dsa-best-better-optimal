
#include<bits/stdc++.h>

using namespace std;

int f( vector<int>& arr, int idx , int sum1, int sum2){
    
    if(idx==arr.size()){
        return abs(sum1-sum2);
    }

    return min(f(arr,idx+1,sum1+arr[idx],sum2), f(arr,idx+1,sum1,sum2+arr[idx]));
}

int main(){
  // vector
    vector<int>arr={1,2,3,4,5,6,11,7};
      // printing minimum difference 

    cout<<f(arr,0,0,0) ;
    cout<<endl;


    return 0;
}