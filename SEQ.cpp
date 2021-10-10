#include<iostream>
using namespace std;
int main()
{
    long long int i,n,k,j,t,d=0,dem=0,a[200000],dd,min1=10000000000000;
    cin>>n>>k;
    for (i=1;i<=n;i++) cin>>a[i];
    for (i=1;i<=n-k+1;i++)
    {
        if ((a[i]<=1)&&(a[i]>=0))
        {
            d++;t=0;dd=0;
            for (j=i;j<=i+k-1;j++)
            {
                if (a[j]<=j-i+1) {dd++;t=t+j-i+1-a[j];}
                else break;
            }
            if (dd==k) {dem++;min1=min(min1,t);}
        }
    }
    if (d==0||dem==0) cout<<"-1"<<endl;
    else cout<<min1<<endl;
}
