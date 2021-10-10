#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+5;
ll a[maxn];
int main()
{
    ll n,i,t=0,dem,l,r;
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i],t+=a[i];
    sort (a+1,a+1+n);
    l=1;r=n;dem=0;
    while (t!=0)
    {
        if (t>0) t-=a[r],r--;
        else t-=a[l],l++;
        dem++;
    }
    cout<<dem<<endl;
}
