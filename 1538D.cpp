#include <bits/stdc++.h>
#define int long long
using namespace std;

map<int,int> cnt;

int get(int x)
{
    if(x<2) return 0;
    int k=x;
    if(cnt[x]) return cnt[x];
    int d=0;
    for(int i=2; i*i*i<=x; i++)
    {
        if(x%i==0)
        {
            while(x%i==0)
            {
                d++;
                x/=i;
            }
        }
    }
    if(x==1)
    {
        cnt[k]=d;
        return d;
    }
    for(int i=2; i*i<=x; i++)
    {
        if(x%i==0)
        {
            while(x%i==0)
            {
                d++;
                x/=i;
            }
        }
    }
    if(x!=1) d++;
    cnt[k]=d;
    return d;
}

void solve()
{
    int a,b,k;
    cin>>a>>b>>k;
    if(a>b) swap(a,b);
    int ucln=__gcd(a,b);
    if(a!=b)
    {
        int x=get(a),y=get(b);
        if(x+y>=k)
        {
            if(k==1)
            {
                if(ucln==min(a,b)) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                return;
            }
            else
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    else
    {
        int x=get(a);
        if(x*2>=k)
        {
            if(k==1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        return;
    }
}

int32_t main()
{
    int q;
    cin>>q;
    while(q--) solve();
}
