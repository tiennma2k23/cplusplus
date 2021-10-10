
#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
using namespace std;
int main()
{
    vector<II> gr;
    bool kt[1000];
    string s;
    while (cin>>s)
    {
        for (char ch='a';ch<='z';ch++) kt[ch]=false;
        while (s.length()>0){
        ll l=0,ck=false,minn=2000,vt;

        for (ll i=0;i<s.length();i++)
        {
            if (s[i]!=s[l])
            {
                if (i-l>1)
                {
                    ck=true;
                    if (minn>i-l) vt=l,minn=i-l;
                }
                l=i;
            }
        }
        if (!ck)
        {
            break;
        }
        s.erase(vt,minn);
    }
    if (s.length()>0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
}
