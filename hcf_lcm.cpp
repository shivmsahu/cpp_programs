#include <iostream>
#include <vector>
using namespace std;

int hcf(int a,int b){
  if(b==0){
    return a;
  } else {
    return hcf(b,a%b);
  }
}
int main() {
  int a,b;
  cin>>a>>b;
  int hc = hcf(a,b);
  cout<<"HCF"<<hc<<"\n";
  cout<<"LCM"<<(a*b)/hc;
}
