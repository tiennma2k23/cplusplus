#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
int minPrime[N + 1],dem[N+1];
void nt()
{
long long i,j;
for ( i = 2; i * i <= N; ++i) {
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
int main()
{
    long long n,a,ans=-1,i,d=0;
    bool kt;
    cin>>n;
    nt();
    for (i=1;i<=n;i++)
    {
        cin>>a;
        kt=false;
        while (a>1)
        {
            if(dem[minPrime[a]]==0) kt=true;
            dem[minPrime[a]]++;
            a=a/minPrime[a];
        }
        if (kt) d++;
        else d=1;
        ans=max(ans,d);
    }
    cout<<ans<<endl;
}
