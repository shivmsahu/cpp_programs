#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  if(n<=1) return 0;

  while(n%2==0){
    cout<<2<<"\n";
    n=n/2;
  }
  while(n%3==0){
    cout<<3<<"\n";
    n=n/3;
  }
  for(int i=5;i*i<=n;i=i+6){
    while(n%i==0){
      cout<<i<<"\n";
      n=n/i;
    }
  }
 if(n>3) cout<<n<<"\n";
}
