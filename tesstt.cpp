#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,n1;
int c[110],f[110][110];
int ans[1100];
int cs[1110];
string mul(string x, string y)
{
    string a=x,b=y;
    int l1=a.length(),l2=b.length();
    a=' '+a;
    b=' '+b;
    for (int i=1;i<=l1+l2;i++) cs[i]=0;
    for (int i=1;i<=l1;i++)
        for (int j=1;j<=l2;j++)
    {
        int _tmp=(a[i]-'0')*(b[i]-'0');
        cs[i+j]=_tmp;
    }
    for (int i=l1+l2;i>=3;i--)
    {
        cs[i-1]=cs[i-1]+cs[i]/10;
        cs[i]%=10;
    }
    string res="";
    for (int i=2;i<=l1+l2;i++)
    {
        if (cs[i]<10)
        {
            char ch=char(cs[i]+'0');
            res+=ch;
        }
        else
        {
            char ch=char(cs[i]/10+'0');
            res+=ch;
            ch=char(cs[i]%10+'0');
            res+=ch;
        }
    }
    //cerr<<res<<endl;
    return res;
}
vector <int> posa[1000],posb[1000];
int _prev[1100];
string tich[1100];
int32_t main()
{
    cin>>n;
    //n1=n;
    //for (int i=1;i<=n;i++) cin>>a[i];
    //for (int i=1;i<=n;i++) cin>>b[i];
    //for (int i=1;i<=n;i++) cin>>c[i];
    for (int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        posa[x].push_back(i);
    }
    for (int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        posb[x].push_back(i);
    }
    for (int i=1;i<=n;i++)
    {
        cin>>c[i];
        ans[i]=0;
        tich[i]=to_string(c[i]);
        //cout<<tich[i]<<endl;
        for (int j=1;j<i;j++)
        {
            //if (posa[c[j]].size()*posb[c[j]].size()==0) continue;
            //int pos1=1,pos2=1;
            int pos1=upper_bound(posa[c[j]].begin(),posa[c[j]].end(),i-1)-posa[c[j]].begin();
            int pos2=upper_bound(posb[c[j]].begin(),posb[c[j]].end(),i-1)-posb[c[j]].begin();
            //cerr<<pos1<<" "<<pos2<<endl;
            if (pos1>0&&pos2>0)
            {
                if (ans[i]<ans[j]+1)
                {
                    ans[i]=ans[j]+1;
                    _prev[i]=j;
                    string s1=to_string(c[i]);
                    cerr<<i<<" " << s1<<endl;
                    tich[i]=mul(tich[j],s1);
                    cerr<<tich[i]<<endl;
                }
                else if (ans[i]==ans[j]+1)
                {
                    string s1=to_string(c[i]);
                    string tmp=mul(tich[j],s1);
                    if (tich[i]<=tmp)
                    {
                        ans[i]=ans[j]+1;
                        _prev[i]=j;
                        tich[i]=tmp;
                    }
                }
            }
        }
    }
    int kq=1,pos;
    string m_tich="0";
    for (int i=1;i<=n;i++)
    {
        if (ans[i]>kq)
        {
            kq=ans[i];
            pos=i;
            m_tich=tich[i];
        }
        else if (ans[i]==kq)
        {
            if (m_tich<tich[i])
            {
                pos=i;
                m_tich=tich[i];
            }
        }
    }
    cout<<m_tich<<endl;
}
