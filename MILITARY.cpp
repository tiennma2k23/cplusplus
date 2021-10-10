#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,a,b;
    cin>>n>>a>>b;
    if (n==1&&a!=b) cout<<0<<endl;
  	else if(n==1&&a==b) cout<<1<<endl;
  	else if (a>b) cout<<0<<endl;
    else{
    cout<<b*(n-1)+a-a*(n-1)-b+1<<endl;}
}
