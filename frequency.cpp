#include<bits/stdc++.h>
using namespace std;
long long d[500000],a[500000];
int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long i,l,r,n,q,j;
    freopen("FREQUENCY.inp","r",stdin);
    freopen("FREQUENCY.out","w",stdout);
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    cin>>q;
    for (j=1;j<=q;j++)
    {
        for (i=1;i<=500000;i++) d[i]=0;
        cin>>l>>r;
        int vt=0;
        for (i=l;i<=r;i++) d[a[i]]++;
        for (i=l;i<=r;i++) if (d[a[i]]==1) vt=i;
        if (vt!=0) cout<<a[vt]<<endl;
        else cout<<0<<endl;
    }
}
