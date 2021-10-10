#include<bits/stdc++.h>
#define ll long long
using namespace std;
ifstream fi ("ABC.inp");
ofstream fo ("ABC.out");
int main()
{
    string s;
    ll l,dd,r,dem=0,d[1000];
    memset(d,0,sizeof(d));
    fi>>s;
    l=0;
    r=1;
    dem++;
    d[s[l]-'A']++;
    dd=LLONG_MIN;
    while (r<s.length())
    {
        if (d[s[r]-'A']==0) dem++;
        d[s[r]-'A']++;
        while (d[s[l]-'A']>1) d[s[l]-'A']--,l++;
        if (dem==26)
        {
            dem--;
            dd=max(dd,r-l+1);
            d[s[l]-'A']=0;
            l++;
        }
        r++;
    }
    fo<<dd<<endl;

}
