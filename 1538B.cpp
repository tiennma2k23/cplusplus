#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200001];
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n,t=0;
        cin>>n;
        for (int i=1;i<=n;i++)
        {
            cin>>a[i];
            t+=a[i];
        }
        if (t%n!=0)
        {
            cout<<-1<<endl;
        }
        else
        {
            int tmp=t/n,ans=0;
            for (int i=1;i<=n;i++) ans+=(a[i]>tmp);
            cout<<ans<<endl;
        }
    }
}
