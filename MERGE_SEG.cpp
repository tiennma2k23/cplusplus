#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,min1,max1,t=0,i;
    pair<long long, long long> a[100000];
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i].first>>a[i].second;
    sort (a+1,a+1+n);
    min1=a[1].first;
    max1=a[1].second;
    for (i=2;i<=n;i++)
    {
        if (a[i].first<=a[i-1].second)
        {
            min1=min(min1,a[i].first);
            max1=max(max1,a[i].second);
        }
        else
        {
            t=t+max1-min1;
            min1=a[i].first;
            max1=a[i].second;
        }
    }
    t=t+max1-min1;
    cout<<t<<endl;
}
