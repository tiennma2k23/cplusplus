#include<bits/stdc++.h>
using namespace std;

bool ck(string s)
{
    for (int i=0; i<s.length(); i++)
    {
        if (s[i]=='0') return false;
    }
    return true;
}

void solve()
{
    int n,m;
    string s;
    cin>>n>>m;
    cin>>s;
    int d=0;
    int res=0;
    for(int i=0; i<n; ++i) res+=(s[i]-'0');
    if (res==0)
    {
        cout<<s<<endl;
        return ;
    }
    while(d<m)
    {
        d++;
        vector<int> vt;
        for(int i=0; i<n; ++i)
        {
            if(s[i]=='0')
            {
                if(i==0 && s[i+1]=='1')
                {
                    vt.push_back(i);
                    continue;
                }
                if(i==n-1 && s[i-1]=='1')
                {
                    vt.push_back(i);
                    continue;
                }
                int le=s[i-1]-'0';
                int ri=s[i+1]-'0';
                if(le+ri==1) vt.push_back(i);
            }
        }
        for(auto v:vt) s[v]='1',res++;
        if (vt.empty())
        {
            cout<<s<<endl;
            return;
        }
        if(res==n)
        {
            cout<<s<<endl;
            return ;
        }
    }
    cout<<s<<endl;
}

int main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
