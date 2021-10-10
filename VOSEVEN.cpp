#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e6+5;
vector<int> cnt(maxn);
string s;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>s;
    int d=0,maxx=0;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]=='7')
        {
            cnt[++d]++;
            maxx=max(maxx,d);
        }
        else d=0;
    }
    for (int i=maxx-1;i>=1;i--) cnt[i]+=cnt[i+1];
    for (int i=1;i<=maxx;i++) printf("%lld %lld\n",i,cnt[i]);
}
