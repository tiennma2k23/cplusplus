#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=3e5+1;
ll b[maxn],a[maxn],d[maxn];
int main()
{
    ll n;
    cin>>n;
    for (ll i=1;i<n;i++) cin>>a[i];
    for (ll i=1;i<n;i++)
    {
        if (a[i]==0)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    bool ck;
    for (ll i=1;i<=n;i++)
    {
        b[1]=i;
        d[i]++;
        ck=true;
        for (ll j=2;j<=n;j++)
        {
            b[j]=b[j-1]+a[j-1];
            if (b[j]>0&&b[j]<=n) d[b[j]]++;
            else {
                ck=false;
                break;
            }
            if ((b[j]>0&&b[j]<=n&&d[b[j]]==2)||b[j]<=0||b[j]>n)
            {
                ck=false;
                break;
            }
        }
        for (ll j=1;j<=n;j++) d[j]=0;
        if (ck)
        {
            for (ll j=1;j<=n;j++) cout<<b[j]<<" ";
            return 0;
        }
    }
    cout<<-1<<endl;
}
