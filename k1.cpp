
#include <bits/stdc++.h>
#define nl "\n"
#define task "abc"
#define taskname ""

using namespace std;

int main()
{
    //freopen(task".inp","r",stdin);
    //freopen(task".out","w",stdout);
#define int long long
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n;
    scanf("%d",&n);

    int ans=0;
    set<int> s;
    set<int> gtx;

    for(int i=1;i<=n;++i)
    {
        int x,y;
        scanf("%ld",&x);
        scanf("%ld",&y);
        s.insert(x);
        s.insert(y);
        if(x!=y) ans+=2;
        else ans+=1;

        if(ans!=s.size())
        {
            printf("%ld",i);
            return 0;
        }
        if(x==y) continue;

        auto a=s.lower_bound(x);
        auto b=s.lower_bound(y);
        bool kt=true;
        if (a==s.begin())
        {
            kt=true;
            a++;
        }
        else
        {
            a--;
            int key=*a;
            if (gtx.find(key)!=gtx.end()) kt=false;
            else kt=true;
            a++,a++;
        }
        //ck[x]=true;
        gtx.insert(x);
        if(a!=b||!kt)
        {
            printf("%ld",i);
            return 0;
        }
    }
    cout<<-1;

    return 0;
}
