#include<bits/stdc++.h>
using namespace std;
long long int n,x,k,i,res,l;
vector<long long int> a;
long long int chatnp(long long int p,long long int key)
{
    long long int dau,cuoi,giua,ans;
    dau=p;cuoi=n-1;ans=-1;
    while (dau<=cuoi)
    {
        giua=(dau+cuoi)/2;
         if (a[giua]<=key)
            {
                ans=giua;
                dau=giua+1;
            }
        else cuoi=giua-1;
    }
    return ans;
}
int main()
{
    freopen("BONPAIR.INP","r",stdin);
    freopen("BONPAIR.OUT","w",stdout);
    cin>>n>>x;
    for (i=0;i<n;i++) {cin>>l;a.push_back(l);}
    res=0;
    for (i=0;i<n;i++)
    {
        k=x-a[i];
        if (chatnp(i+1,k)!=-1) res=res+chatnp(i+1,k)-i;
    }
    cout<<res<<endl;
}
