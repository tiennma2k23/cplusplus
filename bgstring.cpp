#include<bits/stdc++.h>
using namespace std;
string s;
vector<string> ans;
bool ck;
void ok(int x)
{
    if (s.length()%x)
    {
        ck=false;
        return;
    }
    for (int i=0;i<=s.length()-x;i++)
    {
        string st="";
        for (int j=0;j<x;j++) st+=s[i+j];
        string s1=s;
        bool kt=true;
        while (s1.length()||kt)
        {
            kt=false;
            for (int i1=0;i1<=s1.length()-x;i1++)
             {
                 string tmp="";
                 for (int j=0;j<x;j++) tmp+=s1[i1+j];
                 if (tmp==st) {
                        kt=true,s1.erase(i1,x);break;
                 }
             }
        }
        if (s1.length()==0) ans.push_back(st);
    }
    if (ans.empty())
    {
        ck=false;
        return;
    }
    ck=true;
    sort(ans.begin(),ans.end());
    return;
}

int32_t main()
{
    cin>>s;
    for (int id=1;id<=s.length();id++)
    {
        ok(id);
        if (ck)
        {
            cout<<ans[0]<<endl;
            return 0 ;
        }
    }
}
