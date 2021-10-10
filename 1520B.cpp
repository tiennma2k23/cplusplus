#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int inf=1e9+1;
vector<int> v;
void create()
{
    for (int i=1;i<=9;i++)
    {
        int tmp=0;
        while (tmp<=inf)
        {
            tmp=tmp*10+i;
            v.push_back(tmp);
        }
    }
    sort(v.begin(),v.end());
}

void solve()
{
    int n;
    cin>>n;
    int pos=upper_bound(v.begin(),v.end(),n)-v.begin();
    cout<<pos<<endl;
}

int32_t main()
{
    create();
    int q;
    cin>>q;
    while (q--) solve();
}
