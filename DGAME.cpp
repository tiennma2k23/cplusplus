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
        ll l=0,ck=false;

        for (ll i=0;i<s.length();i++)
        {
            if (s[i]!=s[l])
            {
                if (i-l>1) gr.push_back(II(l,i)),ck=true;
                l=i;
            }
        }
        ll dd=0;
        for (auto v:gr)
        {
            v.first-=dd,v.second-=dd;
            kt[s[v.first]]=true;
            s.erase (v.first,v.second-v.first);
            dd+=v.second-v.first;
            //cerr<<s[v.first]<<endl;
        }
        gr.clear();
        //cerr<<s<<endl;
        if (!ck)
        {
            while (s.length()>0)
            {
                if (kt[s[0]]) s.erase(0,1);
                //cerr<<s<<endl;
                else break;
            }
            break;
        }
    }
    if (s.length()>0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
}
