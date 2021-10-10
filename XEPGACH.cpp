#include<bits/stdc++.h>
using namespace std;
typedef pair<long long,long long> LL;
bool cmp(LL a,LL b)
{
    return a.first-a.second>b.first-b.second;
}
const long long MAXN=1e5+2;
int main()
{
    LL p[MAXN];
    long long i,n,a,b,ans=0;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a>>b;
        p[i]={a,b};
    }
    sort(p+1,p+1+n,cmp);
    for (i=1;i<=n;i++) ans=ans+p[i].first*(i-1)+p[i].second*(n-i);
    cout<<ans<<endl;
}
