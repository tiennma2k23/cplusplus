#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+1;

bool ok(string a, string b)
{
    return (a.length()>b.length()||(a.length()==b.length()&&a>b));
}
string s[maxn];
int32_t main()
{
    vector<int> v;
    for (int i=0;i<=9;i++) v.push_back(i);
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        string s1="";
        while (a>0)
        {
            auto it=lower_bound(v.begin(),v.end(),a);
            if (*it==a)
            {
                s1=char (*it+'0')+s1;
                a=0;
            }
            else
            {
                it--;
                s1=char ((*it)+'0')+s1;
                a-=*it;
            }
        }
        if (ok(s1,s[i-1])) s[i]=s1;
        else
        {
            string tmp="0";
            if (s1.length()==1)
            {
                int im=s1[0]-'0';
                s1="";
                s1+=char(49);
                s1+=(im+'0'-1);
            }
            while (!ok(s1,s[i-1]))
            {
                s1.insert(1,tmp);
            }
            s[i]=s1;
        }
        cout<<s[i]<<endl;
    }
}
