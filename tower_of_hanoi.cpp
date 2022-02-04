#include <iostream>
using namespace std;
void toh(int n,char a,char b,char c){
  if(n==1){
    cout<<n<<" from "<<a<<" to "<<c<<"\n";
    return;
  }
  toh(n-1,a,c,b);
  cout<<n<<" from "<<a<<" to "<<c<<"\n";
  toh(n-1,b,a,c);
}
int main(){
  toh(7,'a','b','c');
  return 0;
}
