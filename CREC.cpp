#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<long long, long long> a, pair<long long,long long> b)
{
    return (a.second==b.second);
}
int main()
{
    long long i,n,t,m1,m2,dem,dem1=0,max1,min1,dd,maxd,d=0;
    pair<long long, long long> a[1000];
    cin>>n>>t;
    for (i=1;i<=n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a+1,a+1+n,cmp);
    max1=a[1].first;
    d=1;
    for (i=2;i<=n;i++)
    {
        if (a[i-1].second==a[i].second)
        {
            min1=a[i].first;
            if ((max1-min1)*a[i].second>t)
            {
                d++;
                max1=a[i].first;
            }
        }
        else
        {
            d++;
            max1=a[i].first;
        }
    }
    cout<<d<<endl;
}
