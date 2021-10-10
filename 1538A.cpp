#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        long long n,x=0,y=0;
        cin>>n;
        for (int i=1;i<=n;i++)
        {
            long long a;
            cin>>a;
            if (a==1) x=i;
            if (a==n) y=i;
        }
        long long ans=x+n-y+1;
        ans=min(ans,y+n-x+1);
        ans=min(ans,max(x,y));
        ans=min(ans,n-min(x,y)+1);
        cout<<ans<<endl;
    }
}
