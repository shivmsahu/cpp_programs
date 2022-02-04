#include <iostream>
using namespace std;
void subSet(
  string &s,string curr = "",int i = 0){
  if(i==s.length()){
    cout<<curr<<"\n";
    return;
  }
  subSet(s,curr,i+1);
  subSet(s,curr+s[i],i+1);
}
int main(){
  string s;
  cin>>s;
  subSet(s);
  return 0;
}
