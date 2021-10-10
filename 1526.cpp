#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[1000];

void solve()
{
    int n;
    cin>>n;
    for (int i=1;i<=2*n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+2*n);
    int l=1,r=2*n;
    for (int i=1;i<=2*n;i++)
    {
        if (i%2)
        {
            cout<<a[l]<<" ";
            l++;
        }
        else
        {
            cout<<a[r]<<" ";
            r--;
        }
    }
    cout<<endl;
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
