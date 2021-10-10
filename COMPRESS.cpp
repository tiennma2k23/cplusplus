#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long kn,k,vt,d[1000],b[100000],dem,i;
    string s,s1,s2;
    cin>>s;
    s1="";s2="";
    kn=0;
    for (i=0;i<s.length();i++)
    {
        d[int(s[i])-97]++;
        if (d[int(s[i])-97]==1) kn++;
        b[i]=d[int(s[i])-97];
    }
    dem=0;vt=0;k=1;
    i=0;
    while(i<s.length())
    {
        if(dem<kn)
        {
            s1=s1+s[i];
            if(b[i]==1) dem++;
        }
        else
        {
            if (s[i]==s1[vt])
            {
                vt++;
                s2=s2+s[i];
            }
            else if (s[i]!=s1[vt])
            {
                vt=0;
                if(s2!="") {i--;s1=s1+s2;s2="";}
                else s1=s1+s[i];
            }
            if(vt==s1.length())
            {
                k++;
                vt=0;
                s2="";
            }
        }
        i++;
    }
    cout<<k<<s1<<endl;
}
