#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[10000];
bool cmp(int x, int b)
{
    return x>b;
}

void solve()
{
    int n,x,t=0;
    cin>>n>>x;
    for (int i=1;i<=n;i++) cin>>a[i],t+=a[i];
    if (t==x)
    {
        cout<<"NO"<<endl;
        return;
    }
    bool ck=true;
    sort(a+1,a+1+n);
    t=0;
    for (int i=1;i<=n;i++)
    {
        t+=a[i];
        if (t==x)
        {
            int pos=upper_bound(a+i+1,a+1+n,a[i])-a;
            if (pos<=n&&a[pos]>a[i])
            {
                swap(a[pos],a[i]);
                cout<<"YES"<<endl;
                for (int i=1;i<=n;i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                return;
            }
            ck=false;
        }
    }
    if (ck)
    {
        cout<<"YES"<<endl;
        for (int i=1;i<=n;i++) cout<<a[i]<<" ";
        cout<<endl;
        return;
    }
    ck=true;
    sort(a+1,a+1+n,cmp);
    t=0;
    for (int i=1;i<=n;i++)
    {
        t+=a[i];
        if (t==x)
        {
            int pos=lower_bound(a+i+1,a+1+n,a[i])-a-1;
            if (pos>=1&&a[pos]<a[i])
            {
                swap(a[pos],a[i]);
                cout<<"YES"<<endl;
                for (int i=1;i<=n;i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                return;
            }
            ck=false;
        }
    }
    if (ck)
    {
        cout<<"YES"<<endl;
        for (int i=1;i<=n;i++) cout<<a[i]<<" ";
        cout<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
