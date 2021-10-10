#include<bits/stdc++.h>
using namespace std;
const long long maxn=1e5+1;
long long a[maxn],b[maxn];
void solve()
{
    long long  n,x,t=0;
        cin>>n>>x;
        for (int i=1;i<=n;i++) cin>>a[i],t+=a[i],b[i]=a[i];
        bool kt=true;
        while (kt){
        for (int i=1;i<=n;i++)
        {
            if (a[i]%x==0)
            {
                t+=b[i];
                a[i]/=x;
            }
            else
            {
                kt=false;
                break;
            }
        }
        }
        cout<<t<<endl;
}
int main()
{
    long long tv;
    cin>>tv;
    while (tv--)
    {
        solve();
    }
}
