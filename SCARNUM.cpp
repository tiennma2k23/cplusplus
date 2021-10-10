#include<bits/stdc++.h>
using namespace std;
long long mang[1000];
void khoitao()
{
    long long i;
    for (i=1;i<=127;i++)
    {
        long long n,t,d=0,j,kq[1000];
        memset(kq,0,1000);
        t=0;
        n=i+1;
        while (n!=0)
            {
                d++;
                kq[d]=n%2;
                n=n/2;
            }
        for (j=d-1;j>=1;j--)
        {
            if (kq[j]==0) t=t*10+2;
            else t=t*10+5;
        }
        mang[i]=t;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    khoitao();
    long long m,n,i;
    bool kt;
    freopen("SCARNUM.inp","r",stdin);
    freopen("SCARNUM.out","w",stdout);
    cin>>m;
    while (m--)
    {
        cin>>n;
        kt=false;
        i=1;
        while (i<=126&&mang[i]<=n){
            if (n%mang[i]==0)
            {
                cout<<"YES"<<"\n";
                kt=true;
                break;
            }
            i++;
        }
        if (kt==false) cout<<"NO"<<"\n";
    }
}
