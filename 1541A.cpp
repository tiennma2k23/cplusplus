
#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int a[110];
        int n;
        cin>>n;
        for (int i=1;i<=n;i++)
        {
            a[i]=i;
            if (i%2==0) swap(a[i],a[i-1]);
        }
        if (n%2==1) swap(a[n],a[n-1]);
        for (int i=1;i<=n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}
