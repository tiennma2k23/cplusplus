#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+1;
vector <ll> v(N);
bool isPrime[N+1];
void sieve() {

    for(ll i = 0; i <= N;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(ll i = 2; i * i <= N; ++i) {
         if(isPrime[i] == true) {
             for(ll j = i * i; j <= N; j += i)
                 isPrime[j] = false;
        }
    }
    for (ll i=2;i<=N;i++)
    {
        if (isPrime[i]) v.push_back(i);
    }
}

int main()
{
    ll t;
        sieve();
        cin>>t;
            while (t--)
            {
                ll d;
                cin>>d;
                ll pos=lower_bound(v.begin(),v.end(),d+1)-v.begin();
                ll snt1=v[pos];
                pos=lower_bound(v.begin(),v.end(),d+snt1)-v.begin();
                ll snt2=v[pos];
                cout<<snt1*snt2<<endl;
            }
}
