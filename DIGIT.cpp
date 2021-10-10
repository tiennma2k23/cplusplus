#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,k,k1,t;
    bool kt=false;
    string s1,s2;
    cin>>a>>b>>k;
    a=a%b;
    while (a%b!=0&&k>=0)
    {
        t=(a*10)/b;
        a=a*10%b;
        if (s1.length()==0) s1=s1+char(t+48);
        else
        {
            s2=s2+char(t+48);
            if (s2[s2.length()-1]!=s1[s2.length()-1]) {s1=s1+s2;s2="";}
        }
        if (a%b==0)
        {
            if (s1!=s2) s1=s1+s2;
            kt=true;
            break;
        }
        if (s1==s2) break;
        k--;
        if (k==0) {cout<<t<<endl;exit(0);}
    }
    if (kt==true)
    {
        if (k>s1.length()) cout<<0<<endl;
        else cout<<s1[k-1]<<endl;
    }
    else
    {
        if (k%s1.length()==0) cout<<s1[s1.length()-1]<<endl;
        else cout<<s1[k%s1.length()-1]<<endl;
    }
}
