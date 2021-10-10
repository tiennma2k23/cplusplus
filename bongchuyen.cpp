#include<iostream>
using namespace std;
int main()
{
long long m,n,k,j,x,y,tg,t,i;
 cin>>t;
 for(j=1;j<=t;j++)
  {
  	cin>>k>>x>>y;
  	if(min(x,y)<k-1) cout<<k-max(x,y)<<endl;
  	else cout<<2-(x-y)<<endl;
  }
}
