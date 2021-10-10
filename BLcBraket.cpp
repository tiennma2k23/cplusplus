#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    string s;
    bool kt;
    freopen("BLCBRACKETS.inp","r",stdin);
    freopen("BLCBRACKETS.out","w",stdout);
    cin>>n;
    deque<long long> q;
    while (n--)
    {
        cin>>s;
        kt=true;
        for (i=0;i<s.length();i++)
        {
            if (s[i]=='('||s[i]=='['||s[i]=='{') q.push_back(i);
            else
            {
                if (s[i]==')'&&!q.empty()&&s[q.back()]=='(') q.pop_back();
                else if (s[i]==']'&&!q.empty()&&s[q.back()]=='[') q.pop_back();
                else if (s[i]=='}'&&!q.empty()&&s[q.back()]=='{') q.pop_back();
                else {kt=false;break;}
            }
        }
        if (kt&&q.empty()) cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
            q.clear();
        }
    }
}
