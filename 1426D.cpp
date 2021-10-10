#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n , a , t, vt = 0 , kq;
map<ll,ll> m;
int main(){
   cin >> n;
   for(ll i = 1 ; i <= n ; i ++){
    cin >> a;
    t += a;
    if(((t == 0 && m[t] == 0) || m[t]) && m[t] >= vt - 1){
        kq ++;
        vt = i;
    }
    m[t] = i;
   }
   cout << kq << endl;
}
