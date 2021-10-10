#include<bits/stdc++.h>
#define ull long long
using namespace std;

const long long maxn=1e5+5;
ull fen[maxn],a[maxn],n;
set<ull> s;
void update(long long p,long long val)
{
    for(int i = p; i <= n; i += i & -i)
        fen[i] += val;
}
ull sum(ull j,ull i)
{
    ull result = 0;
    while (i >= j)
    {
        if (i - (i & -i) >= j)
        {
            result = result + fen[i];
            i = i - (i & -i);
        }
        else
        {
            result = result + a[i];
            i = i - 1;
        }
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ull q;
    cin>>n>>q;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
        update(i,a[i]);
        if (a[i]>1) s.insert(i);
    }
    while (q--)
    {
        ull p,x,y;
        cin>>p>>x>>y;
        if (p==1)
        {
            if (s.empty()) continue;
            auto it1=s.lower_bound(x);
            auto it2=s.lower_bound(y);
            while (it1!=s.end()&&!s.empty())
            {
                ull vt=*it1;
                if (vt<=y)
                {
                    long long val=a[vt];
                    val=sqrt(val);
                    val=val-a[vt];
                    a[vt]=sqrt(a[vt]);
                    update(vt,val);
                    if (a[vt]<=1)
                    {
                        auto it3=it1;
                        it1++;
                        s.erase(it3);
                    }
                    else it1++;
                    //cerr<<vt<<" "<<val<<endl;
                }
                else break;
            }

        }
        else
        {
            ull ans=sum(x,y);
            cout<<ans<<endl;
        }
    }
}
