#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100000],i,tmp,ans=0,dem,j;
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    for (i=1;i<=n-1;i++)
    {
        dem=1;
        tmp=a[i+1];
        for (j=i+2;j<=n;j++)
        {
            if (a[j]>=tmp&&a[i]>=tmp)
            {
                dem++;
                tmp=a[j];
            }
            else if (a[i]<tmp) break;
        }
        ans=ans+dem;
    }
    cout<<ans<<endl;
}
