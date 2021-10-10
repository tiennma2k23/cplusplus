#include<bits/stdc++.h>
using namespace std;
vector<string> v,v1;

bool cmp(string s1, string s2)
{
    if (s1.length()!=s2.length()) return (s1.length()<s2.length());
    return s1<s2;
}
map<string,int> ck;
void create()
{
    string s;
    for (char ch1='a';ch1<='z';ch1++)
    {
        s="";
        s+=ch1;
        v.push_back(s);
        for (char ch2='a';ch2<='z';ch2++)
        {
            s+=ch2;
            v.push_back(s);
            s.erase(s.length()-1,1);
        }
    }
    for (char ch1='a';ch1<='z';ch1++)
    {
        s="";
        s+=ch1;
        for (char ch2='a';ch2<='z';ch2++)
        {
            s+=ch2;
            for (char ch3='a';ch3<='z';ch3++)
            {
                s+=ch3;
                v.push_back(s);
                s.erase(s.length()-1,1);
            }
            s.erase(s.length()-1,1);
        }
    }
    sort(v.begin(),v.end(),cmp);
    //for (int i=0;i<29;i++) cout<<v[i]<<endl;
}

void solve()
{
    int n;
    string s;
     for (auto val:v1) ck[val]=0;
     v1.clear();
    cin>>n;
    cin>>s;
    string s1;
    for (int i=0;i<n;i++)
    {
        s1="";
        s1+=s[i];
        v1.push_back(s1);
        if (i<n-1) s1+=s[i+1];
        v1.push_back(s1);
        if (i<n-2) s1+=s[i+2];
        v1.push_back(s1);
    }
    //sort(v1.begin(),v1.end(),cmp);
    for (auto val:v1) ck[val]=1;
    //for (auto val:v1) cout<<val<<endl;
    //for (auto val:v1) cout<<val<<endl;
    for (auto val:v)
    {
        if (!ck[val])
        {
            cout<<val<<endl;
            return;
        }
    }

}

int main()
{
    create();
    int q;
    cin>>q;
    while (q-- ) solve();
}
