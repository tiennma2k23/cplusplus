#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf=1e18+1;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    priority_queue<int, vector<int>, greater<int> > q;
    int n,k,sum=0;
    cin>>n>>k;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        q.push(a);
        sum+=a;
    }
    int ans=0;
    while (q.size()>1)
    {
        int k1=k;
        int minn=inf,maxx=0,s=0;
        int tmp=q.size();
        while (k1>0&&q.size()>0)
        {
            minn=min(minn,q.top());
            maxx=max(maxx,q.top());
            s+=q.top();
            q.pop();
            k1--;
        }
        q.push(s);
        ans+=maxx-minn;
    }
    cout<<q.top()<<endl;
    cout<<ans<<endl;
}
