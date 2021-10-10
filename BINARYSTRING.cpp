#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while (q--){
    ll n,l=-1,ans=0;
    string s;
    cin>>s;
    n=s.length();
    for (ll i=0;i<n;i++)
    {
        char ch=s[i];
        if (ch=='1')
        {
            if (l!=-1) ans+=i-l-1;
            l=i;
        }
    }
    if (l==-1) cout<<-1<<endl;
    else cout<<ans<<endl;
    }
}
