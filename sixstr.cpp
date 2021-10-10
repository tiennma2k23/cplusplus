#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+1;
int cnt[maxn][5];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin>>s;
    int n=s.size();
    int ans=0;
    for(int i=n-1; i>=0; i--)
    {
        int tmp=s[i]-'0';
        int x=tmp;
        for(int j=0; j<3; j++)
        {
            cnt[i][j]=cnt[i+1][(x+j)%3]+((x+j)%3==0 && x%2==0);
        }
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0') ans++;
        else ans+=cnt[i][0];
    }
    cout<<ans<<endl;

}
