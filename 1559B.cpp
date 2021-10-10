
#include<bits/stdc++.h>
using namespace std;

int cnt (string s)
{
    int ans=0;
    for (int i=2; i<s.length(); i++) ans+=(s[i]==s[i-1]);
    return ans;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        s=' '+s;
        string s1=s;
        if (s1[1]=='?')
        {
            s1[1]='B';
            char ch='B';
            for (int i=2; i<=n; i++)
            {
                if (s1[i]=='?')
                {
                    if (ch=='B') s1[i]='R';
                    else s1[i]='B';
                }
                ch=s1[i];
            }
            string s2=s;
            s2[1]='R';
            ch='R';
            for (int i=2; i<=n; i++)
            {
                if (s2[i]=='?')
                {
                    if (ch=='B') s2[i]='R';
                    else s2[i]='B';
                }
                ch=s2[i];
            }
            if (cnt(s1)<cnt(s2))
            {
                s1.erase(0,1);
                cout<<s1<<endl;
            }
            else
            {
                s2.erase(0,1);
                cout<<s2<<endl;

            }
        }
        else
        {
            char ch=s[1];
            for (int i=2; i<=n; i++)
            {
                if (s[i]=='?')
                {
                    if (ch=='B') s[i]='R';
                    else s[i]='B';
                }
                ch=s[i];
            }
            s.erase(0,1);
            cout<<s<<endl;
        }
    }
}
