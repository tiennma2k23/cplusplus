#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        string d;
        ll n;
        cin>>n;
        string s="";
        cin>>d;
        ll t=0;
        for (ll i=0;i<d.length();i++)
        {
            if (d[i]=='1')
            {
                if (t==2) s+='0',t=1;
                else s+='1',t=2;
            }
            else
            {
                if (t==1) s+='0',t=0;
                else s+='1',t=1;
            }
        }
        cout<<s<<endl;
    }
}
