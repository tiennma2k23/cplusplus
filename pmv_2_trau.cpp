#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int inf=1e9+1,maxn=1e4;
int a[30001],tr[30001],p[30001],ans[30001];
int n,c;
set<II> l,r,both;
void solve1()
{
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        ans[i]=inf;
        int pos=0;
        for (int j=1;j<i;j++)
        {
            if (a[j]>a[i])
            {
                if (!tr[j])
                {
                    if (ans[i]>ans[j]+1)
                    {
                        ans[i]=ans[j]+1;
                        pos=j;
                    }
                }
            }
            else
            {
                if (!p[j])
                {
                    if (ans[i]>ans[j]+1)
                    {
                        ans[i]=ans[j]+1;
                        pos=j;
                    }
                }
            }
        }
        if (a[pos]>a[i]) tr[pos]=1;
        else p[pos]=1;
        if (i==1) ans[i]=0;
        c+=ans[i];
        cout<<c<<endl;
    }
}

void solve2()
{
    cin>>a[1];
    c=0;
    cout<<0<<endl;
    ans[1]=0;
    both.insert(II(a[1],0));
    for (int i=2;i<=n;i++)
    {
        cin>>a[i];
        int res=inf,pos;
         if (!l.empty())
        {
            auto it=l.begin();
            if (a[i]<(*it).fi)
            {
                if (res>(*it).se+1)
                {
                    res=(*it).se+1;
                    pos=(*it).fi;
                }
            }
        }
        if (!r.empty())
        {
            auto it=r.lower_bound(II(a[i]+1,0));
            if (it==r.end()) continue;
            if (a[i]>(*it).fi)
            {
                if (res>(*it).se+1)
                {
                    res=(*it).se+1;
                    pos=(*it).fi;
                }
            }
        }
        if (!both.empty())
        {
            auto it=both.begin();
                if (res>(*it).se+1)
                {
                    res=(*it).fi+1;
                    pos=(*it).se;
                }
        }
        if (pos==(*l.begin()).fi)
        {
            l.erase(l.begin());
        }
        else if (r.count(II(pos,res-1)))
        {
            r.erase(r.lower_bound(II(pos,res-1)));

        }
        else
        {
            auto it=both.begin();
            if (a[i]>pos)
            {
                l.insert (II((*it).se,(*it).fi));
            }
            else r.insert (II((*it).se,(*it).fi));
            both.erase(it);
        }
        c+=res;
        cout<<c<<endl;
        both.insert(II(res,a[i]));
    }
}

int32_t main()
{
    cin>>n;
    if (n<=maxn) solve2();
    else solve2();
}
