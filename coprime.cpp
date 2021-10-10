#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e6+1;
multiset<ll> st[maxn],s;
ll dm[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
     ll n,ans=0;
     cin>>n;
     while (n--)
     {
         ll x,y;
         cin>>x>>y;
         if (x==1)
         {
             dm[y]++;
             if (dm[y]==1)
             {
                 auto it=s.begin();
                 while (it!=s.end())
                 {
                     ll val=*it;
                     if (__gcd(val,y)==1) st[y].insert(val),st[val].insert(y),ans++;
                     it++;
                 }
             }
             else ans+=st[y].size();
             s.insert(y);
         }
         else
         {
             dm[y]--;
                 auto it=st[y].begin();
                 while (it!=st[y].end())
                 {
                     auto it1=it;
                     if (it1==st[y].begin())
                     {
                         st[*it1].erase(y);
                         ans-=dm[*it1];
                     }
                     else {
                        it1--;
                     ll val1=*it,val2=*(it1);
                     if (val1!=val2)
                     {
                         st[*it].erase(y);
                         ans-=dm[*it];
                     }
                     }

                     it++;
                 }
                 if (dm[y]==0) st[y].clear();s.erase(y);
             }
            cout<<ans<<endl;
         }
     }
