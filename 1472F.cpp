#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<ll,ll> check1,check2;
int main()
{
    ll m,n;
    vector<ll> gr[3];
    cin>>n>>m;
    bool ans=true;
    for (ll i=1;i<=m;i++)
    {
        ll r,c;
        cin>>r>>c;
        gr[r].push_back(c);
    }
    for (auto key:gr[1])
    {
        ll k=key+1;
        bool ck=binary_search(gr[1].begin(),gr[1].end(),k+1);
        bool ck1=binary_search(gr[2].begin(),gr[2].end(),k);
        if (!ck1&&!check2[k]) check2[k]=true;
        else if (!ck&&!check1[k+1]&&k+1<=n) check1[k+1]=true;
        else ans=false;
         k=key;
                 ck=binary_search(gr[1].begin(),gr[1].end(),k);
         //ck1=binary_search(gr[2].begin(),gr[2].end(),k+1);
        if (!ck&&!check1[k]) check1[k]=true;
        //else if (!ck1&&!check2[k+1]&&k+1<=n) check2[k+1]=true;
        else ans=false;
         k=key-1;
         ck=binary_search(gr[1].begin(),gr[1].end(),k+1);
         ck1=binary_search(gr[2].begin(),gr[2].end(),k);
        if (!ck1&&!check2[k]) check2[k]=true;
        else if (!ck&&!check1[k+1]&&k+1<=n) check1[k-1]=true;
        else ans=false;
    }
    for (auto key:gr[2])
    {
        ll k=key+1;
         bool ck=binary_search(gr[1].begin(),gr[1].end(),k);
         bool ck1=binary_search(gr[2].begin(),gr[2].end(),k+1);
        if (!ck&&!check1[k]) check1[k]=true;
        else if (!ck1&&!check2[k+1]&&k+1<=n) check2[k+1]=true;
        else ans=false;
        k=key;
         //ck=binary_search(gr[1].begin(),gr[1].end(),k+1);
         ck1=binary_search(gr[2].begin(),gr[2].end(),k);
        //if (!ck1&&!check2[k]) check2[k]=true;
        if (!ck&&!check1[k+1]&&k+1<=n) check1[k+1]=true;
        else ans=false;
         k=key-1;
          ck=binary_search(gr[1].begin(),gr[1].end(),k);
          ck1=binary_search(gr[2].begin(),gr[2].end(),k-1);
        if (!ck&&!check1[k]) check1[k]=true;
        else if (!ck1&&!check2[k+1]&&k+1<=n) check2[k+1]=true;
        else ans=false;
    }
    if (ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
