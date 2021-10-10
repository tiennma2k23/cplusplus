
#include<bits/stdc++.h>
using namespace std;

bool ok(int x)
{
    int tmp=x,res=0;
    while (tmp>0)
    {
        res+=tmp%10;
        tmp/=10;
    }
    if (res==1) return false;
    for (int i=2;i*i<=res;i++)
    {
        if (res%i==0) return false;
    }
    return true;
}

int32_t main()
{
    freopen("PSUM.inp","r",stdin);
     freopen("PSUM.out","w",stdout);
    int a,b,ans=0;
    //cout<<ans<<endl;
    cin>>a>>b;
    for (int i=a;i<=b;i++)
    {
        //if (ok(i)) cout<<i<<endl;
        ans+=ok(i);
    }
    cout<<ans<<endl;
}
