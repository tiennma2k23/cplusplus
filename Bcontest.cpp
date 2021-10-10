#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,a,b,tmp,ans,m1,m2;
cin>>n;
while (n--)
{
    cin>>a>>b;
    m1=min(a,b);m2=max(a,b);
    a=m1;b=m2;
    if ((a*2-b)%3!=0||2*a-b<0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
}
