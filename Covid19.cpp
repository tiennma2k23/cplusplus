#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,t,kq,dem,i;
    cin>>n>>k;
    t=1;
    while (t*2<=n) t=t*2;
    kq=n-t;
    dem=1;
    while (kq<k)
    {
        kq=kq+dem*2;
        t=t/2;
        dem=dem*2;
    }
    if (n/t+n%t==k) {cout<<"YES"<<endl;
    for (i=1;i<=n%t;i++) cout<<1<<" ";
    for (i=1;i<=n/t;i++) cout<<t<<" ";
    }
    else cout<<"NO"<<endl;
}
