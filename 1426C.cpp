#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool ok(ll m , ll n){
   return ((m) / 2 + 1) * ((m)/ 2 + m % 2 + 1) >= n;
}
int main(){
    ll t;
    cin >> t;
   while(t --){
    ll n , l = 1 , r = 1e9 , res=1e9;
    cin >> n;
    while(l <= r){
        ll mid = l + r >> 1;
        if(ok(mid , n)) res=mid , r = mid - 1;
        else l = mid + 1;
    }
    if(n == 1) cout<<0<<endl;
    else cout << res << endl;
   }
}
