#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
pair<ll,ll> a[100000];
int n;
int BN(long long left,long long right,long long x)
{
    ll mid,pos=left;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid].first<x)
        {
            pos=mid;left=mid+1;
        }
        else right=mid-1;
    }
    return pos;
}
int main()
{
    ll i;
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i].first>>a[i].second;
    sort(a+1,a+1+n);
    ll dem=0;
    for(i=1;i<=n;i++) dem+=BN(i,n,a[i].second)-i;
    cout<<dem<<endl;
}
