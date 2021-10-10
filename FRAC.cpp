#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e7+1;
int d[maxn],cnt[maxn];
int32_t main()
{
    int n;
    vector<int> v;
    cin>>n;
    if (n==0)
    {
        cout<<"impossible"<<endl;
            return 0 ;
    }
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if (a<=0)
        {
            cout<<"impossible"<<endl;
            return 0 ;
        }
        for (int i=2;i*i<=a;i++)
        {
            if (a%i==0)
            {
                int dem=0;
                while (a%i==0) dem++,a/=i;
                if (d[i]==0) v.push_back(i);
                d[i]=max(d[i],dem);
                cnt[i]+=dem;
            }
        }
        if (a!=1)
        {
            if (d[a]==0) v.push_back(a);
                d[a]=max(d[a],1ll);
                cnt[a]++;
        }
    }
    int ans=1;
    for (auto val:v)
    {
        int tmp=cnt[val]-d[val];
        for (int i=1;i<=tmp;i++) ans*=val;
    }
    cout<<ans<<endl;
}
