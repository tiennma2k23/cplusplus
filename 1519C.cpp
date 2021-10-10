//ahihihi
//hkjsdhdjcb
//jkgckudsbjkcb
#include<bits/stdc++.h>
#define int long long
using namespace std ;
const int maxn=2e5+1;
int t, n ;
vector< int > gr[maxn] ;
int u[maxn],tong[maxn], ans[maxn] ;
int32_t main()
{
    int q;
    cin>>q ;
    while (q--)
    {
        int n;
        cin>>n ;
        for (int i=1; i<=n; i++) gr[i].clear(),tong[i]=0,ans[i]=0;
        for (int i = 1 ; i <= n ; ++ i) cin>>u[i] ;
        for (int i = 1, s ; i <= n ; ++ i)
        {
            int v;
            cin >> v ;
            gr[u[i]].push_back(v) ;
        }
        int sz = 0 ;
        for (int i = 1 ; i <= n ; ++ i)
        {
            if (!gr[i].empty())
            {
                sort(gr[i].begin(), gr[i].end()) ;
                sz = gr[i].size() ;
                tong[sz] = 0 ;
                for (int x : gr[i]) tong[sz] += x ;
                for (int j = 1 ; j <= sz ; j++) tong[sz - j] = tong[sz - j + 1] - gr[i][j - 1] ;
                ans[1] += tong[sz] ;
                for (int j = 2 ; j <= sz ; j++) ans[j] += tong[sz - (sz % j)] ;
            }
        }
        for (int i = 1 ; i <= n ; i++) cout << ans[i] << " " ;
        cout<<endl;
    }
}
