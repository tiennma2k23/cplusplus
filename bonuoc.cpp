#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int minPrime[N+5],d[N+5];

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

int main()
{
    sieve();
    int n,sl=0;
    cin>>n;
    int ans=0;
    while (n>1)
    {
        int k=minPrime[n];
        n/=k;
        d[k]++;
        if (d[k]==1) sl++;
        else if (d[k]==3) ans++;
    }
    ans+=(sl*(sl-1)/2);
    cout<<ans<<endl;
}
