#include <iostream>
using namespace std;
int rope(int n,int a,int b,int c){
  if(n==0){
    return 0;
  }
  if(n<0){
    return -1;
  }
  int resA = rope(n-a,a,b,c);
    int resB = rope(n-b,a,b,c);
      int resC = rope(n-c,a,b,c);
  int res = resA;
  if(resB>res){
    res = resB;
  }
  if(resC>res){
    res = resC;
  }
  if(res==-1){
    return -1;
  }
  return res+1;

}
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<rope(n,a,b,c);
    return 0;
}
