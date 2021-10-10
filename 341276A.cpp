#include<bits/stdc++.h>
#define int long long
using namespace std;
map<int,int> d;
const int maxn=1e5+1;
int a[maxn];
int32_t main()
{
    int n,k,ans=0,pos=0;
    cin>>n>>k;
    for (int i=1;i<=n;i++) cin>>a[i];
    int l=1,r=1,kn=0;
    while (r<=n)
    {
        d[a[r]]++;
        if (d[a[r]]==1) kn++;
        while (r-l+1>k)
        {
            d[a[l]]--;
            if (d[a[l]]==0) kn--;
            l++;
        }
        if (r-l+1==k)
        {
            if (ans<kn)
            {
                ans=kn,pos=l;
            }
        }
        r++;
    }
    cout<<pos<<endl;
}
