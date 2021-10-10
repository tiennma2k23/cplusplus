
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,d=0;
        string s;
        cin>>n;
        cin>>s;
        for (ll i=n-1;i>=0;i--)
        {
            if (s[i]!=')') break;
            else d++;
        }
        if (d>n-d) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
