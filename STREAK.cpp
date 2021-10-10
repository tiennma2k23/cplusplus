#include<bits/stdc++.h>
#define ll  long long
using namespace std;
int main()
{
    ll q;
    cin>>q;
    ll maxn=0,maxu=0;
    ll dn=0,du=0;
    while (q--)
    {
        string s;
        cin>>s;
        if (s=="Heads")
        {
            dn++;
            maxu=max(maxu,du);
            du=0;
        }
        else
        {
            du++;
            maxn=max(maxn,dn);
            dn=0;
        }
    }
    maxn=max(maxn,dn);
    maxu=max(maxu,du);
    cout<<maxn<<" "<<maxu<<endl;
}
