#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll l,r;
    cin>>l>>r;
    if (l%2==0) l++;
    if (r%2==0) r--;
    ll ssh=(r-l)/2+1;
    ll ans=(l+r)/2;
    ans*=ssh;
    cout<<ans<<endl;
}
