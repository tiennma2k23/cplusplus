#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int N=1e7;

vector<int> mP(2*N+5,0),nt;
vector<II> ans(100000);
void Eratosthenes()
{
    for (int i=2;i*i<=2*N;i++)
    {
        if(mP[i]==0)
        {
            for(int j=i*i;j<=2*N;j+=i)
            {
                if(mP[j]==0)
                {
                    mP[j]=i;
                }
            }
        }
    }
    for(int i=2;i<=2*N;i++)
    {
        if(mP[i]==0)
        {
            mP[i]=i;
            nt.push_back(i);
        }
    }
}
void create()
{
    set<int> s;
    int dem=0;
    for (auto d:nt)
    {
        if (d*2<=N)
        {
            int tmp1=2*d-1;
            while (tmp1>1)
            {
                int d3=mP[tmp1];
                tmp1/=d3;
                if (d3>=d) s.insert(d3);
                else break;
            }
            tmp1=2*d+1;
            while (tmp1>1)
            {
                int d3=mP[tmp1];
                tmp1/=d3;
                if (d3>=d) s.insert(d3);
                else break;
            }
            while (!s.empty())
            {
                auto it = s.begin();
                dem++;
                if (dem>60000) return;
                ans[dem]=II(d,*it);
                s.erase(it);
            }
        }
        else break;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    Eratosthenes();
    int k;
    create();
    cin>>k;
    cout<<ans[k].fi<<" "<<ans[k].fi<<" "<<ans[k].se<<endl;
}
