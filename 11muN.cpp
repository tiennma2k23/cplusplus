#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e7+1;
int a[maxn*2+1];
int main()
{
    int n;
    cin>>n;
    int tmp=0;
    for (int i=1;i<=n;i++)
    {
        a[i]=(i+tmp)%10;
        tmp=(tmp+i)/10;
    }
    for (int i=n-1;i>=1;i--)
    {
        a[2*n-i]=(i+tmp)%10;
        tmp=(tmp+i)/10;
    }
    int m=2*n-1;
    while (tmp>0)
    {
        m++;
        a[m]=tmp%10;
        tmp/=10;
    }
    for (int i=m;i>=1;i--) cout<<a[i];
}
