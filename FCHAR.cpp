#include<bits/stdc++.h>
using namespace std;
long long da[100010],dd[100010],db[100010],dc[100010],de[100010];
int main()
{
    string s;
    long long i,ans=999999999,dau,cuoi,mid,k;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("FCHAR.inp","r",stdin);
    freopen("FCHAR.out","w",stdout);
    cin>>s>>k;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        {
            db[i+1]=db[i];
            da[i+1]=da[i]+1;
            dc[i+1]=dc[i];
            dd[i+1]=dd[i];
            de[i+1]=de[i];
        }
        else
        if(s[i]=='b')
        {
            db[i+1]=db[i]+1;
            da[i+1]=da[i];
            dc[i+1]=dc[i];
            dd[i+1]=dd[i];
            de[i+1]=de[i];
        }
        else
        if(s[i]=='c')
        {
            db[i+1]=db[i];
            da[i+1]=da[i];
            dc[i+1]=dc[i]+1;
            dd[i+1]=dd[i];
            de[i+1]=de[i];
        }
        else
        if(s[i]=='d')
        {
            db[i+1]=db[i];
            da[i+1]=da[i];
            dc[i+1]=dc[i];
            dd[i+1]=dd[i]+1;
            de[i+1]=de[i];
        }
        else
        if(s[i]=='e')
        {
            db[i+1]=db[i];
            da[i+1]=da[i];
            dc[i+1]=dc[i];
            dd[i+1]=dd[i];
            de[i+1]=de[i]+1;
        }
        else
        {
            db[i+1]=db[i];
            da[i+1]=da[i];
            dc[i+1]=dc[i];
            dd[i+1]=dd[i];
            de[i+1]=de[i];
        }
    }
for (i=1;i<=s.length();i++)
{
    dau=1;cuoi=i;
    while (dau<=cuoi)
    {
        mid=(dau+cuoi)/2;
        if((da[i]-da[mid-1]>=k)&&(db[i]-db[mid-1]>=k)&&(dc[i]-dc[mid-1]>=k)&&(dd[i]-dd[mid-1]>=k)&&(de[i]-de[mid-1]>=k))
        {
            dau=mid+1;
            ans=min(ans,i-mid+1);
        }
        else cuoi=mid-1;
    }
}
if (ans!=999999999) cout<<ans<<endl;
else cout<<-1<<endl;
}
