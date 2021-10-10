#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1,mod=1e9+7;
ll a[maxn];
ll f[maxn][11][3][3];
string tru(string a, string b)
{
    string res="";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    bool check=false;
    if(a<b)
    {
        swap(a,b);
        check=true;
    }
    int borrow=0;
    for(int i=a.length()-1; i>=0; i--)
    {
        int tmp=a[i]-b[i]-borrow;
        if(tmp<0)
        {
            tmp+=10;
            borrow=1;
        }
        else borrow=0;
        res=(char)(tmp%10 + 48) + res;
    }
    while(res.length()>1 && res[0]=='0') res.erase(0,1);
    if(check) res="-"+res;
    return res;
}


ll thu(ll i, bool gh, ll dig, bool tang, bool nghia)
{
    if (i<0) return 1;
    if (!gh&&f[i][dig][tang][nghia]>=0) return f[i][dig][tang][nghia];
    ll kq=0;
    bool ghm;
    ll maxc=gh?a[i]:9;
    if (nghia)
    {
        if (tang)
        {
            for (ll c=dig+1; c<=maxc; c++)
            {
                ghm=gh&&(c==maxc);
                kq+=thu(i-1,ghm,c,false,(c!=0)||nghia);
            }
        }
        else
        {
            for (ll c=0; c<=min(dig-1,maxc); c++)
            {
                ghm=gh&&(c==maxc);
                kq+=thu(i-1,ghm,c,true,(c!=0)||nghia);
            }
        }
    }
    else
    {
        ghm=gh&&(maxc==0);
        kq+=thu(i-1,ghm,0,true,false);
        for (ll c=1; c<=maxc; c++)
        {
            ghm=gh&(c==maxc);
            kq+=thu(i-1,ghm,c,true,true);
            if (i>1) kq+=thu(i-1,ghm,c,false,true);
        }
    }
    kq%=mod;
    if (!gh) f[i][dig][tang][nghia]=kq;
    return kq;
}

ll G(string x)
{
    ll n=x.length();
    for (ll i=0; i<n; i++) a[n-1-i]=x[i]-'0';
    if (n==1) return x[0]-47;
    else return thu(n-1,true,-1,true,false);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    memset(f,-1,sizeof(f));
    string l,r;
    ll a,b;
    cin>>a>>b;
    cin>>l>>r;
    string sbt="1";
    string l1=tru(l,sbt);
    cout<<G(r)-G(l1)<<endl;
}
