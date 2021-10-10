#include<bits/stdc++.h>
using namespace std;
string csl(string s, string s1)
{
    string kq;
    long long t,nho,i;
    while (s.length()<s1.length()) s='0'+s;
    while (s1.length()<s.length()) s1='0'+s1;
    kq="";nho=0;
    for (i=s.length()-1;i>=0;i--)
    {
        t=int(s[i])-48+int(s1[i])-48+nho;
        nho=t/10;
        kq=char(t%10+48)+kq;
    }
    if (nho>0) kq='1'+kq;
    while (kq.length()>1&&kq[0]=='0') kq.erase(0,1);
    return kq;
}
string tsl(string s,string s1)
{
     string kq;
     long long muon,t,i;
     bool kt=false;
     while (s.length()<s1.length()) s='0'+s;
     while (s1.length()<s.length()) s1='0'+s1;
     kq="";muon=0;
     if (s1>s) {kt=true;swap(s1,s);}
     for (i=s.length()-1;i>=0;i--)
     {
         t=int(s[i])-int(s1[i])-muon;
         if (t<0) {t=t+10;muon=1;}
         else muon=0;
         kq=char(t+48)+kq;
     }
     while (kq.length()>1&&kq[0]=='0') kq.erase(0,1);
     if (kt) kq='-'+kq;
     return kq;
}
void xuli(string a, string b)
{
    if (a[0]=='-'&&b[0]=='-')
    {
        a.erase(0,1);b.erase(0,1);
        cout<<"-"<<csl(a,b)<<endl;
    }
    else if (a[0]=='-'&&b[0]!='-')
    {
        a.erase(0,1);
        cout<<tsl(b,a)<<endl;
    }
    else if (b[0]=='-'&&a[0]!='-')
    {
        b.erase(0,1);
        cout<<tsl(a,b)<<endl;
    }
    else cout<<csl(a,b)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    cin>>a>>b;
    xuli(a,b);
}
