#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e6;
    long long t[2*MAXN],i,k,d=0,n,a[MAXN];
int main()
{
    freopen("DIVSEQ.inp","r",stdin);
    freopen("DIVSEQ.out","w",stdout);
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    t[1]=0;
    for (i=2;i<=n;i++)
    {
        k=t[i-1];
        while (k>0&&a[i]!=a[k+1]) k=t[k];
        if (a[i]==a[k+1]) k++;
        t[i]=k;
    }
    cout<<n-t[n]<<endl;
}
