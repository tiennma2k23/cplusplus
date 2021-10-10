#include<bits/stdc++.h>
using namespace std;
int main()
{
freopen("EVENSUM.inp","r",stdin);
freopen("EVENSUM.out","w",stdout);
long long int n,i,a,t=0,sum[100000],q,l,r;
cin>>n;
for (i=1;i<=n;i++)
{
    cin>>a;
    if (a%2==0) t=t+a;
    sum[i]=t;
}
cin>>q;
while (q--)
{
    cin>>l>>r;
    cout<<sum[r]-sum[l-1]<<endl;
}
}
