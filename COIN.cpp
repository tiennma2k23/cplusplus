#include<bits/stdc++.h>
using namespace std;
pair<long long, long long> p[1000000];
vector<bool> check(1000010),check1(1000010);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,k,i,dem=0,min1,ans;
    char ch;
    cin>>n>>k;
    p[0].first=0;
    p[0].second=0;
    ans=0;
    for (i=1;i<=n;i++)
    {
        cin>>ch;
        if (ch=='O') dem++;
        else dem=dem-k;
        p[i].first=dem;
        p[i].second=i;
    }
    sort (p,p+1+n);
    min1=p[0].second;
    for (i=1;i<=n;i++)
    {
        if (p[i].first!=p[i-1].first)
        {
            ans=max(ans,p[i-1].second-min1);
            min1=p[i].second;
        }
    }
    cout<<ans<<endl;
}
