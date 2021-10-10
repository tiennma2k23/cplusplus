
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e7;
vector<int> mP(N+1),t(N+1),res(N+1);
vector<int> v;
void sang()
{
    for (int i = 2; i * i <= N;i++) {
    if (mP[i] == 0) {
        for (int j = i * i; j <= N; j += i) {
            if (mP[j] == 0) {
                mP[j] = i;
            }
        }
    }
}
for (int i = 2; i <= N; i++) {
    if (mP[i] == 0) {
        mP[i] = i;
    }
}
}

void create()
{
    t[0]=0;
    for (int i=1;i<=N;i++)
    {
        int x=i;
        v.clear();
        while (x>1)
        {
            int tmp=mP[x];
            if (res[tmp]==tmp) v.push_back(tmp);
            res[tmp]*=tmp;
            x/=tmp;
        }
        int ans=1;
        for (auto val:v)
        {
            ans*=((res[val]-1)/(val-1));
            res[val]=val;
        }
        ans-=i;
        t[i]=t[i-1]+abs(i-ans);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    for (int i=1;i<=N;i++) res[i]=i;
    sang();
    create();
    int l,r;
    cin>>l>>r;
    int ans=t[r]-t[l-1];
    cout<<ans<<endl;
}
