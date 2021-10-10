#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,n,i,a[200010];
    bool kt;
    cin>>q;
    while (q--)
    {
        cin>>n;
        kt=true;
        for (i=1;i<=n;i++)
        {
            cin>>a[i];
            if (a[i]!=a[i-1]&&i!=1) kt=false;
        }
        if (kt) cout<<n<<endl;
        else cout<<1<<endl;
    }
}
