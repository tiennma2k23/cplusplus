#include<bits/stdc++.h>
using namespace std;
const int N=1e7;
vector<int> minPrime(N,0);
vector<int> t(N,1);
vector<int> tich(N,1);
deque<int> q;
void sangnt()
{
    int i,j;
for (i = 2; i * i <= N; ++i) {
    if (minPrime[i] == 0) {
        for (j = i * i; j <= N; j += i) {
            if (minPrime[j] == 0) {
                minPrime[j] = i;
            }
        }
    }
}
for (i = 2; i <= N; ++i) {
    if (minPrime[i] == 0) {
        minPrime[i] = i;
    }
}
}
long long f(int n)
{
    int i,n1=n;
    long long res=1;
    while (n!=1)
    {
        if (t[minPrime[n]]==1) q.push_back(minPrime[n]);
        tich[minPrime[n]]=tich[minPrime[n]]*minPrime[n];
        t[minPrime[n]]+=tich[minPrime[n]];
        n/=minPrime[n];
    }
    while (!q.empty()){
        int x=q.back();
        q.pop_back();
        res=res*t[x],t[x]=1,tich[x]=1;
    }
    return abs(res-1ll*2*n1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("perfect.inp","r",stdin);
    freopen("perfect.out","w",stdout);
    sangnt();
    int l,r,i;
    long long ans=0;
    cin>>l>>r;
    for (i=l;i<=r;++i)
    {
        ans+=f(i);
    }
    cout<<ans<<endl;
}
