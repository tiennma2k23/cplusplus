#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        string s;
        cin>>s;
        ll ans=0;
        for (ll i=0;i<s.length();i++) ans+=(s[i]!='a');
        if (ans!=0)
        {
            cout<<"YES"<<endl;
            string s1='a'+s,s2="";
            for (ll i=s1.length()-1;i>=0;i-- ) s2+=s1[i];
            if (s1!=s2)
            {
                cout<<s1<<endl;
            }
            else cout<<s<<"a"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
