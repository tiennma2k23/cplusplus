#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    unsigned long int n,j;
    cin>>n;
    for (j=1;j<=n;j++)
    {
        string s,s1,s2;
        unsigned long long k,i,so,l;
        cin>>s2;
        //for (i=0;i<s2.length();i++) if (s2[i]!='0') {l=i;break;}
        //for (i=l;i<s2.length();i++) s=s+s2[i];
        if (s.length()%2==0) k=s.length()/2-1;else k=s.length()/2;
        so=int(s[k])-48;
        s1=char(so+48+1);
        if (s.length()%2==0) s1=s1+s1;
        for (i=0;i<k;i++) s1=s1+s[i];
        for (i=k-1;i>0;i--) s1=s[i]+s1;s1=s[0]+s1;
        cout<<s1<<endl;
    }
}
