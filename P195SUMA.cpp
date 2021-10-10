#include<bits/stdc++.h>
using namespace std;
const long long maxn=2e5+5;
long long a[maxn];
int main()
{
    long long n,k,i,min1=LLONG_MAX;
    cin>>n>>k;
    for (i=1;i<=n;i++) cin>>a[i],min1=min(min1,a[i]);
    sort(a+1,a+1+n);
    a[n+1]=LLONG_MAX;
    if (a[k]!=a[k+1]&&k>0) cout<<a[k]<<endl;
    else if (k==0&&min1>1) cout<<1<<endl;
    else cout<<-1<<endl;
}
