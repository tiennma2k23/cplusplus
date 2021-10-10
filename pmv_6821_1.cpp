#include<bits/stdc++.h>
#define int long long

using namespace std;

set<int> vt[1000];

int32_t main()
{
    string ans="",s;
    int k;
    int key=-1;
    cin>>s>>k;
    for (int i=0;i<s.length();i++) vt[s[i]].insert(i);
    for (int i=1;i<=k;i++)
    {
        for (char ch='a';ch<='z';ch++)
        {
            auto it=vt[ch].upper_bound(key);
            if (it!=vt[ch].end())
            {
                if (*it<=s.length()-1-(k-i))
                {
                    ans+=ch;key=*it;
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
}
