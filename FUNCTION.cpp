#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll slc,sll,tmpc,tmpl,tc,tl;
    slc=(n-2)/2+1;
    sll=(n-1)/2+1;
    tmpc=(n+2)/2;
    tmpl=(n+1)/2;
    tc=tmpc*slc;
    tl=tmpl*sll;
    ll ans=tc-tl;
    cout<<ans<<endl;
}
