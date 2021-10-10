#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e3;
unordered_map<ll,ll> ck;
vector<ll> v,v1;

bool check(ll x)
{
    ll x1=x;
    while (x1>=1)
    {
        ll tmp=x1%10;
        if (x%tmp!=0) return false;
        x1=(x1-tmp)/10;
    }
    return true;
}

void prepare()
{
    for (ll i=1;i<=9;i++) v.push_back(i),ck[i]=true;
    //v1.clear();
    while (true)
    {
        ll dem=0;
        for (auto k:v)
        {
            for (ll i=1;i<=9;i++)
            {
                ll tmp=k*10+i;
                if (!ck[tmp]&&tmp<=N&&check(tmp))
                {
                    v1.push_back(tmp);
                    dem++;
                    ck[tmp]=true;
                }
            }
            if (k*10<=N){
            v1.push_back(k*10);
            ck[k*10]=true;
            }
        }
        for (auto k:v1) v.push_back(k);
        v1.clear();
        if (dem==0) break;
    }
}
int main()
{
    prepare();
    cout<<v.size()<<endl;
    //for (auto k:v) cout<<k<<endl;
}
