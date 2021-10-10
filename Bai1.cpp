#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1,inf=LLONG_MAX;

int n,a[maxn],pre[maxn],suf[maxn],f[maxn];
set<int> s;
void truoc()
{
    memset(f,0,sizeof(f));
    reverse(a+1,a+1+n);
    s.clear();
    pre[n]=0;
    f[n]=inf;
    s.insert(n);

    for(int i=n-1; i>=1; i--)
    {
        pre[i]=pre[i+1];
        if(a[i]>a[i+1])
        {
            int x=a[i+1],cnt=0;
            while(x<a[i])
            {
                x*=4;
                cnt++;
            }
            int pos=i+1;
            while(cnt>0)
            {
                int it=*s.lower_bound(pos);
                pre[i]+=cnt*(it-pos+1);
                if(f[it]>cnt)
                {
                    f[it]-=cnt;
                    cnt=0;
                    break;
                }
                else
                {
                    cnt-=f[it];
                    f[it]=0;
                    pos=it+1;
                    s.erase(s.find(it));
                }
            }
        }
        else
        {
            int x=a[i],cnt=0;
            while(x*4<=a[i+1])
            {
                x*=4;
                ++cnt;
            }
            f[i]=cnt;
            if(f[i]>0) s.insert(i);
        }
    }
    reverse(pre+1,pre+1+n);
}

void sau()
{
    suf[n]=0;
    f[n]=inf;
    s.clear();
    s.insert(n);

    for(int i=n-1; i>=1; i--)
    {
        suf[i]=suf[i+1];
        if(a[i]>a[i+1])
        {
            int x=a[i+1],cnt=0;
            while(x<a[i])
            {
                x*=4;
                cnt++;
            }
            int pos=i+1;
            while(cnt>0)
            {
                int it=*s.lower_bound(pos);
                suf[i]+=cnt*(it-pos+1);
                if(f[it]>cnt)
                {
                    f[it]-=cnt;
                    cnt=0;
                    break;
                }
                else
                {
                    cnt-=f[it];
                    f[it]=0;
                    pos=it+1;
                    s.erase(s.find(it));
                }
            }
        }
        else
        {
            int x=a[i],cnt=0;
            while(x*4<=a[i+1])
            {
                x*=4;
                ++cnt;
            }
            f[i]=cnt;
            if(f[i]>0) s.insert(i);
        }
    }
}
int32_t main()
{
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    truoc();
    sau();
    for(int i=1; i<=n; ++i)
    {
        pre[i]=pre[i]*2+i;
        suf[i]*=2;
    }
    int ans=inf;
    for(int i=1; i<=n+1; i++)
    {
        ans=min(ans,pre[i-1]+suf[i]);
    }
    cout<<ans<<endl;
}
