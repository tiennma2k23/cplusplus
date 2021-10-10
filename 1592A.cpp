#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int a[maxn];
int32_t main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,h;
        cin>>n>>h;
        for (int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+1+n);
        if (h==0)
        {
            cout<<0<<endl;
        }
        else if (h<=a[n])
        {
            cout<<1<<endl;
        }
        else
        {
            int sum=a[n]+a[n-1];
            int ans=(h/sum)*2;
            h%=sum;

            if (h<=a[n]&&h>0) ans++;
            if (h>a[n]) ans+=2;
            cout<<ans<<endl;
        }
    }
}
