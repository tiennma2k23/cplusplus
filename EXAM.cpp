#include<bits/stdc++.h>
#define ll long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
int ans[4];
int main()
{
    int d;
    int a[4];
    II p[4];
    cin>>a[1]>>a[2]>>a[3]>>d;
    p[1]={a[1],1};
    p[2]={a[2],2};
    p[3]={a[3],3};
    sort(p+1,p+1+3);
    int l=1;
    while (d>0&&l<=3)
    {
        ll k=min(p[l].fi,d);
        ans[p[l].se]=k;
        d-=k;
        l++;
    }
    for (ll i=1;i<=3;i++) cout<<ans[i]<<" ";
}
