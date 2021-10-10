#include<bits/stdc++.h>
using namespace std;
const long long maxn=5e5+5;
long long a[maxn],ans[maxn];
int main()
{
    long long i,n,cnt,dd,tmp,l,r,maxx=LLONG_MIN,m;
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    i=1;cnt=0;
    while (i<=n)
    {
        dd=1;
        tmp=a[i];
        l=i-1;
        r=i+1;
        while (l>=1||r<=n)
        {
            if (a[l]%tmp==0&&a[r]%tmp==0&&l>=1&&r<=n) l--,r++,dd+=2;
            else if (a[l]%tmp==0&&l>=1) l--,dd++;
            else if (a[r]%tmp==0&&r<=n) r++,dd++;
            else break;
        }
        if (maxx==dd) cnt++,ans[cnt]=l+1;
        else if (maxx<dd)
        {
            cnt=1;
            ans[cnt]=l+1;
            maxx=dd;
        }
        i=r;
    }
    cout<<cnt<<" "<<maxx-1<<endl;
    for (i=1;i<=cnt;i++) cout<<ans[i]<<" ";
}
