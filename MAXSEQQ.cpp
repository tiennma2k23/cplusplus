#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,kq1=-10000000000,i,a,sum=0,sum1=0,kq2=10000000000000;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        sum=max(sum+a,a);
        kq1=max(kq1,sum);
        sum1=min(sum1+a,a);
        kq2=min(kq2,sum1);
    }
    cout<<max(abs(kq1),abs(kq2))<<endl;
}
