#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,r,b,k,ucln,i;
cin>>t;
for (i=1;i<=t;i++)
{
    cin>>r>>b>>k;
    ucln=__gcd(r,b);
    r=r/ucln;
    b=b/ucln;
    if (r==b||(r+b-2)/min(r,b)<k) cout<<"OBEY"<<endl;
    else cout<<"REBEL"<<endl;
}
}
