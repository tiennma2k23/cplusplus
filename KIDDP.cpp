#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,a[100000],i,b,b1;
    cin>>n>>m;
    for (i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    while (m--)
    {
        cin>>b;
        b1=b;
        for (i=n;i>=1;i--)
        {
            if (b>0){
            if (a[i]<=b)
        {
            b=b%a[i];
        }
            }
            else break;
        }
        for (i=1;i<=n;i++)
        {
            if (b1>0){
            if (a[i]<=b1)
        {
            b1=b1%a[i];
        }
            }
            else break;
        }
        if (b>0&&b1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
