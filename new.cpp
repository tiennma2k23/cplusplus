#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fi(type,i,a,b) for ( type i=a ; i<=b ; i++ )
#define fo(type,i,b,a) for ( type i=b ; i>=a ; i-- )

const ll N=4010;
ll a[N];
ll n, l,r;
ll dp[N][5][1030];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    cin >> n >> l >> r;
    ll ans=0;
    fi(ll,i,1,n) cin >> a[i];
    dp[0][0][0] = 1;
    fi(ll,i,1,n)
    {
        fi(ll,j,0,4)
        fi(ll,v,0,1025)
            dp[i][j][v] += dp[i-1][j][v];

        dp[i][1][a[i]]+=dp[i][0][0];

        fi(ll,v,0,1025)
        {
            dp[i][2][v&a[i]] += dp[i-1][1][v];
            dp[i][3][v|a[i]] += dp[i-1][2][v];
            dp[i][4][v^a[i]] += dp[i-1][3][v];
        }
    }

    fi(ll,v,l,r) ans += dp[n][4][v];
    cout << ans << endl;
}
