#include <iostream>
#include <stack>
using namespace std;
void swap(char &a,char &b){
  char temp = a;
  a=b;
  b=temp;
}
void printPerm(string s,int i = 0){
  if(i==s.length()-1){
    cout<<s<<"\n";
    return;
  }
  for(int j=i;j<s.length();j++){
    swap(s[i],s[j]);
    printPerm(s,i+1);
    swap(s[i],s[j]);
  }
}
int main(){
  printPerm("abc");
  return 0;
}
