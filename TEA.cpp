#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q,i,l,r,a;
    freopen("TEA.INP","r",stdin);
    freopen("TEA.OUT","w",stdout);
    cin>>n>>q;
    for (i=1;i<=n;i++) cin>>a;
    for (i=1;i<=q;i++) cin>>l>>r;
    cout<<q<<endl;
    for (i=1;i<=n;i++)
    {
        if (i%2==1) cout<<'C';
        else cout<<'S';
    }
}
