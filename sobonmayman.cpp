
#include<bits/stdc++.h>
using namespace std;
const int N=1e7;
int minPrime[N+5],d[N+5],res[N+5];
vector<int> nt;
void sieve()
{
for (int i = 2; i * i <= N; ++i) {
    if (minPrime[i] == 0) { //if i is prime
        for (int j = i * i; j <= N; j += i) {
            if (minPrime[j] == 0) {
                minPrime[j] = i;
            }
        }
    }
}
for (int i = 2; i <= N; ++i) {
    if (minPrime[i] == 0) {
        minPrime[i] = i;
    }
}
}

void solve()
{
    int l,r;
    int ans=0;
    cin>>l>>r;
    if (l==0) l=1;
    ans=res[r]-res[l-1];
    cout<<ans<<endl;
}

void prepare()
{
    int _tmp=0;
    for (int i=1;i<=N;i++)
    {
        int tmp=i;
        int sl=0,sl1=0;
        while (tmp>1)
        {
            int k=minPrime[tmp];
            tmp/=k;
            d[k]++;
            if (d[k]==1)
            {
                nt.push_back(k);
            }
            if (nt.size()==2&&d[k]==2) break;
            if (nt.size()==1&&d[k]==4) break;
            if (nt.size()==3) break;
        }
        int sls=1;
        for (auto val:nt) sls*=(d[val]+1),d[val]=0;
        nt.clear();
        _tmp+=(sls==4);
        res[i]=_tmp;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    sieve();
    prepare();
    int q;
    cin>>q;
    while (q--) solve();
}
