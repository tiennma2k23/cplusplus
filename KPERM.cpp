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
    #define task "tenbai"
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
}


const int maxn=2e5+5,mod=1e9+7,oo=INFINITY,maxval=1e9+5;
const double pi=atan2(0,-1);

int n,k;


int32_t main()
{
    input();
    fastio();

    cin>>n>>k;
    if(k==1){
        for(int i=1;i<=n;++i) cout<<i<<' ';
        return 0;
    }

    set<int> s;
    int r=n-1,l=1;
    vector<int> ans;

    ans.push_back(n);

    while(s.size()+1<k){
        s.insert(abs(ans[ans.size()-1]-l));
        ans.push_back(l);
        l++;
        if(s.size()+1==k) break;
        s.insert(abs(ans[ans.size()-1]-r));
        ans.push_back(r);
        r--;
    }


    int p=ans[ans.size()-1];

    if(p+1==l){
        for(int i=l;i<=r;++i) ans.push_back(i);
    }
    else{
        for(int i=r;i>=l;--i) ans.push_back(i);
    }



    for(int v:ans) cout<<v<<' ';



    return 0;
}
