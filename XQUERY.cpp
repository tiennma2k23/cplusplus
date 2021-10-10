#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e6+1,maxx=1e6;
int q,type,x;
int cnt[maxn],cnt1[maxn],typ[maxn],xx[maxn],fen[maxn],fen1[maxn],cntt[4];
set<int> st;
vector<int> v;

void update(int u, int v)
{
    int idx = u;
    while (idx < maxn)
    {
        fen[idx] += v;
        idx += (idx & (-idx));
    }
}

void update1(int u, int v)
{
    int idx = u;
    while (idx <maxn)
    {
        fen1[idx] += v;
        idx += (idx & (-idx));
    }
}

int get(int p)
{
    int idx = p, ans = 0;
    while (idx > 0) {
        ans += fen[idx];
        idx -= (idx & (-idx));
    }
    return ans;
}

int get1(int p)
{
    int idx = p, ans = 0;
    while (idx > 0) {
        ans += fen1[idx];
        idx -= (idx & (-idx));
    }
    return ans;
}

void lucky()
{
    for (int i=1;i<=q;i++)
    {
        int type=typ[i];
        int x=xx[i];
        if (type==0)
        {
            cnt[x]++;
            if (cnt[x]==1) st.insert(x);
        }
        else if(type==1)
        {
            if (cnt[x]==0) continue;
            cnt[x]--;
            if (cnt[x]==0) st.erase(x);
        }
        else if (type==2)
        {
            for (auto val:st)
            {
                cnt1[val^x]+=cnt[val];
                v.push_back(val^x);
            }
            for (auto val:st) cnt[val]=0;
            st.clear();
            for (auto val:v)
            {
                cnt[val]=cnt1[val];
                st.insert(val);
            }
             for (auto val:v) cnt1[val]=0;
             v.clear();
        }
        else
        {
            int ans=0;
            while (x>0)
            {
                for (auto val:st)
                {
                    int sl=min(x,cnt[val]);
                    ans+=val*sl;
                    x-=sl;
                    //cerr<<sl<<val<<endl;
                    if (x==0) break;
                }
            }
            cout<<ans<<'\n';
        }
    }
}

void sub2()
{
    for (int i=1;i<=q;i++)
    {
        int type=typ[i],x=xx[i];
        if (type==0)
        {
            update(x,x);
            cnt[x]++;
            update1(x,1);
        }
        else if (type==1)
        {
            if (cnt[x]==0) continue;
            cnt[x]--;
            update(x,-x);
            update1(x,-1);
        }
        else if (type==3)
        {
            int l=1,r=maxx,res1,res2;
            while (l<=r)
            {
                int mid=(l+r)/2;
                int sl=get1(mid);
                if (sl>x) r=mid-1,res2=mid;
                else l=mid+1,res1=mid;
            }
            int ans=get(res1)+(x-get1(res1))*res2;
            cout<<ans<<'\n';
        }
    }
}
int32_t main()
{
    cin>>q;
    for (int i=1;i<=q;i++) cin>>typ[i]>>xx[i],cntt[typ[i]]++;
    if (cntt[2]==0) sub2();
    else lucky();
}
