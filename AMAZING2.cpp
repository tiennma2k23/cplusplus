#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
bool CheckPL(string s){
  string s1=s;
  reverse(s1.begin(),s1.end());
  return (s==s1);
}
long long Siz(string s){
  int n=s.size(),res;
  for(int i=0;i<n;i++){
    if(CheckPL(s.substr(i,n))){
        res=i;
        break;
    }
  }
  return res;
}
int main(){
  string a,b;
  cin>>a>>b;
  if(a==b) cout<<"No Solution."<<endl;
  else {
    string xa=a.substr(0,Siz(a));
  string xb=b.substr(0,Siz(b));
  reverse(xa.begin(),xa.end());
  reverse(xb.begin(),xb.end());
  if(xa.size()<xb.size()) cout<<xa<<endl;
  else if(xa.size()==xb.size()) cout<<min(xa,xb)<<endl;
  else cout<<xb<<endl;
  }
