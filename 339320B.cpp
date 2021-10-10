//╔═════════════════╗
//╠═════════════════╣
//╠═════════════════╣
//╚═════════════════╝

#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

#define nl "\n"
#define ll long long
#define st first
#define nd second
#define PII pair<int,int>



//#define ordered_set tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>


using namespace std;
//using namespace __gnu_pbds;

void input()
{
    #define task "mortpest"
    if(fopen("BACHO.inp","r")){
        freopen("BACHO.inp","r",stdin);
        freopen("BACHO.out","w",stdout);
    }
    else if(fopen("BACHO.in","r")){
        freopen("BACHO.in","r",stdin);
        freopen("BACHO.out","w",stdout);
    }
    else if(fopen(task".inp","r")){
        freopen(task".inp","r",stdin);
        freopen(task".out","w",stdout);
    }
    else if(fopen(task".in","r")){
        freopen(task".in","r",stdin);
        freopen(task".out","w",stdout);
    }
}

void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin.exceptions(cin.failbit);
}

#define int ll
const int maxn=3000+5,mod=1e9+7,oo=1061109567;
//const double pi=atan2(0,-1);

int n,s[maxn],t[maxn],dp[maxn][maxn];

namespace subtask1
{
    void chinh()
    {
        sort(t+1,t+1+n);
        int chaymin=oo,coimax=0,ans=0;
        for(int i=1;i<=n;++i){
            if(s[i]<=t[i]) continue;
            chaymin=min(chaymin,s[i]);
            coimax-max(coimax,t[i]);
        }
        if(chaymin>coimax) ++ans;
        while(next_permutation(t+1,t+1+n)){
            chaymin=oo;
            coimax=0;
            for(int i=1;i<=n;++i){
                if(s[i]<=t[i]) continue;
                chaymin=min(chaymin,s[i]);
                coimax=max(coimax,t[i]);
            }
            for(int i=1;i<=n;++i) cout<<t[i]<<' ';
            if(chaymin>coimax) ++ans;
            cout<<"==> "<<ans<<nl;
        }
        cout<<ans<<nl;
    }
}

namespace subtask2
{
    int dp[maxn<<1][maxn];
    void chinh()
    {
        vector<PII> v;
        v.push_back({-1,-1});
        for(int i=1;i<=n;++i){
            v.push_back({s[i],0});
            v.push_back({t[i],1});
        }
        sort(v.begin(),v.end());
        dp[0][0]=1;
        sort(s+1,s+1+n);
        int x=0;
        vector<int> chuaghep;
        int j=0;
        //dp[1][0]=1;
        for(int o=1;o<=n;++o){
            if(s[o]==x) continue;
            x=s[o];
            for(int i=1;i<=2*n;++i){
                if(v[i].nd==0){
                    if(v[i].st<x) dp[i][j]+=dp[i-1][j-1];
                    else{
                        dp[i][j]+=dp[i-1][j];
                        dp[i][j]+=dp[i-1][j-1];
                        ++j;
                    }
                }
                else{
                    if(v[i].st>=x){
                        if(j==0) continue;
                        dp[i][j]+=dp[i-1][j+1];
                        --j;
                    }
                    else{
                        if(j==0) continue;
                        dp[i][j]+=dp[i-1][j+1];
                        dp[i][j]+=dp[i-1][j];
                        --j;
                    }
                }
            }
        }
        for(int i=1;i<=n+n;++i){
            for(int j=0;j<=n;++j) cout<<dp[i][j]<<' ';
            cout<<nl;
        }

        int ans=0;
        for(int i=0;i<=n;++i) ans+=dp[n+n][i];
        cout<<ans<<nl;
    }
}


int32_t main()
{
    input();
    fastio();

    cin>>n;
    for(int i=1;i<=n;++i) cin>>s[i];
    for(int i=1;i<=n;++i) cin>>t[i];

//    subtask1::chinh();
    subtask2::chinh();


    return 0;
}
