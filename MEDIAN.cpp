#include<bits/stdc++.h>
using namespace std;
const long long maxn=1e6+7;
long long a[maxn];
int main()
{
    freopen("MEDIAN.inp","r",stdin);
    freopen("MEDIAN.out","w",stdout);
    long long n,x,k,i,tmp,l=0,d=0,cnt_smaller=0,cnt_equal=0;
    cin>>n>>x;
    for (i=1;i<=n;i++)
    {
        cnt_smaller+=(a[i]<x);
        cnt_equal+=(a[i]==x);
    }
    d=0;
    while (cnt_smaller+1>(n+1)/2) d++,n++;
    while ((n+1)/2>cnt_smaller+cnt_equal) cnt_equal++,n++,d++;
    cout<<d<<endl;
}
