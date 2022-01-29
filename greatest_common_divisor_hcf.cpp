#include <iostream>
using namespace std;

int hcf(int a,int b){
  if(b==0){
    return a;
  } else {
    return hcf(b,a%b);
  }
}
int main() {
  cout<<hcf(9,10);
}
