#include<bits/stdc++.h>
#define int long long
using namespace std;
deque<int> v,open;
int32_t main()
{
#define TASK "expression"
    freopen(TASK ".inp","r",stdin);
    freopen(TASK ".out","w",stdout);
    string s;
    cin>>s;
    int num=0;
    bool ok=false;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]>='0'&&s[i]<='9')
        {
            num=num*10+s[i]-'0';
            ok=true;
        }
        else
        {
            if (ok)v.push_back(num),ok=false;
            num=0;
            if (s[i]=='(') open.push_back(i);
            else if (s[i]==')')
            {
                int pos=open.back();
                open.pop_back();
                int so1=v.back();
                v.pop_back();
                int so2=v.back();
                v.pop_back();
                string s1="";
                s1+=s[pos-3];s1+=s[pos-2];s1+=s[pos-1];
                //cout<<so1<<" "<<so2<<" "<<s1<<endl;
                if (s1=="MAX") v.push_back(max(so1,so2));
                else if (s1=="GCD") v.push_back(abs(__gcd(so1,so2)));
                else if (s1=="DIF") v.push_back(so2-so1);
                else if (s1=="MIN") v.push_back(min(so1,so2));
                else v.push_back(so1+so2);
                //for (auto val:v) cout<<val<<" ";
            }
        }
    }
    cout<<v.back()<<endl;

}
