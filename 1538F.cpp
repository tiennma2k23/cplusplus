#include<bits/stdc++.h>
#define int long long
using namespace std;
int f[100];
void create()
{
    f[1]=1;
    for(int i=2;i<=10;++i) f[i]=f[i-1]*10;
}


int32_t main()
{
    create();
    int q;
    cin>>q;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        int ans=0;
        for(int i=1;i<=10;i++) ans+=abs(r/f[i]-l/f[i]);
        cout<<ans<<endl;
    }
}
