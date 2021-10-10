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
        bool ck=true;
        cin>>s;
        for (ll i=0;i<s.length()-1;i++)
        {
            if (s[i]==s[i+1])
            {
                cout<<"YES"<<endl;
                ck=false;
                break;
            }
        }
        if (ck)cout<<"NO"<<endl;
    }
}
