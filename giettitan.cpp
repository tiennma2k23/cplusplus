#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,m;
        cin>>n>>m;
        ll sl=n/8+(n%8!=0);
        ll sln=sl/4+(sl%4!=0);
        if (sln<=m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
