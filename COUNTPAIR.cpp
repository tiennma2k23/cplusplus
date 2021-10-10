#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e6+5;
long long vt1[MAXN],vt2[MAXN];
int main()
{
    long long i,d1=0,d2=0,ans=0,tmp;
    string s;
    cin>>s;
    for (i=0;i<s.length();i++)
    {
        if (s[i]=='1')
        {
            d1++;
            vt1[d1]=i;
        }
        else if (s[i]=='2')
        {
            d2++;
            vt2[d2]=i;
        }
    }
    for (i=1;i<=d1;i++)
    {
        long long key=vt1[i];
        tmp=lower_bound(vt2+1,vt2+d2,key)-vt2-1;
        if (vt2[tmp+1]>vt1[i]) ans+=(d2-tmp);
        else break;
    }
    cout<<ans<<endl;
}
