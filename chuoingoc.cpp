#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<string,ll> ck;
int main()
{
    ll n,k;
    cin>>n>>k;
    string s1,s;
    cin>>s;
    for (ll i=0; i<n; i++)
    {
        s1="";
        s1+=s[i];
        s1+=s[i+1];
        ck[s1]=1;
    }
    while (k--)
    {
        bool kt=false;
        string s,s1;
        cin>>s;
        for (ll i=0; i<n; i++)
        {
            s1="";
            s1+=s[i];
            s1+=s[i+1];
            if (ck[s1])
            {
                kt=true;
                break;
            }
        }
       if (kt) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
}
