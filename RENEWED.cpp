#include<bits/stdc++.h>
#define int long long
#define uint unsigned long long
using namespace std;
int a,k,b,m;
uint n;
bool ok(int mid)
{
    uint sla,slb;

    if (k==0) sla=1ull*mid*a;
    else sla=1ull*(mid-mid/k)*a;
    if (m==0) slb=1ull*mid*b;
    else slb=1ull*(mid-mid/m)*b;
    //cerr<<mid<<" "<<sla<<endl;
    if (n>=sla)
    {
        if (n-sla<=slb) return true;
    }
    return false;
}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
    cin>>a>>k>>b>>m>>n;
    int l=1,r=1;
    while (!ok(r))
    {
        l=r;
        r*=2;
    }
    int ans=r;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (ok(mid)) ans=mid,r=mid-1;
        else l=mid+1;
    }
    cout<<ans<<endl;
}
