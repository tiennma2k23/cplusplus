#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<long long int,long long int> x, pair<long long int,long long int> y)
{
    return y.first<y.second;
}
int main()
{
    pair<int,int> a[100100];
    long long n,i,m1,m;
    double min1=999999;
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i].first;
    for (i=1;i<=n;i++) cin>>a[i].second;
    sort (a+1,a+1+n);
    for (i=1;i<n;i++)
    {
        if (min1>(double (a[i].second+a[i+1].second))/(double (a[i].first+a[i+1].first)))
        {
            min1=(double (a[i].second+a[i+1].second))/(double (a[i].first+a[i+1].first));
            m=i;m1=i+1;
        }
    }
    //for (i=1;i<=n;i++) cout<<a[i].first<<a[i].second;
    cout<<a[m].first+a[m1].first<<" "<<a[m].second+a[m1].second<<endl;

}
