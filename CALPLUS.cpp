#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100000],i,n,t=0;
    unsigned long long kq=0;
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    t=a[1];
    for (i=2;i<=n;i++)
    {
        t=t+a[i];
        kq=kq+t*t;
    }
    cout<<kq<<endl;
}
