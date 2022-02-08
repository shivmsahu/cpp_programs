#include <iostream>
#include <vector>
using namespace std;
int subsetSum(vector <int> arr,int n,int sum){
  if(n==0){
    return (sum==0)?1:0;
  }
  return subsetSum(arr,n-1,sum) + subsetSum(arr,n-1,sum-arr[n-1]);
}
int main(){
  cout<<subsetSum({2,3,5,3,45,2,4,2,44},9,3);
  return 0;
}
