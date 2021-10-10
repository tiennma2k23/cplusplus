
//╔═╦╗╔╦╗╔═╦═╦╦╦╦╗╔═╗
//║╚╣║║║╚╣╚╣╔╣╔╣║╚╣═╣
//╠╗║╚╝║║╠╗║╚╣║║║║║═╣
//╚═╩══╩═╩═╩═╩╝╚╩═╩═╝

#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

#define nl "\n"
#define ll long long
#define st first
#define nd second
#define rd third
#define PII pair<int,int>
#define TIII tuple<int,int,int>
#define VI vector<int>
#define VVI vector<vector<int>>
#define PPI pair<PII,int>
#define PIP pair<int,PII>


//#define ordered_set tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>


using namespace std;
//using namespace __gnu_pbds;

void input()
{
    freopen("abc.inp","r",stdin);
    freopen("abc.out","w",stdout);
}

void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
}

//#define int ll
const int maxn=2e5+5,mod=1e9+7,oo=1061109567,maxv=1e9+5;
const double pi=atan2(0,-1);

int t,dem[maxn],n,k,c[maxn];


int32_t main()
{
    //input();
    freopen("abc.inp","r",stdin);
    freopen("abc.out","w",stdout);
    fastio();

    cin>>t;
    while(t--){
        cin>>n>>k;
        memset(c,0,sizeof(c));
        memset(dem,0,sizeof(dem));

        set<PII> s;

        for(int i=1;i<=n;++i){
            int a;
            cin>>a;
            ++dem[a];
            if(dem[a]<=k) s.insert({a,i});
        }


        while(s.size()%k!=0){
            s.erase(s.begin());
        }

        int cnt=0;
        for(PII p:s){
            c[p.nd]=cnt%k+1;
            cnt++;
            cnt%=k;
        }


        for(int i=1;i<=n;++i) cout<<c[i]<<' ';
        cout<<nl;
    }


    return 0;
}
