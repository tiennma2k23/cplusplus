#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>

using namespace std;

map<II,int> dem;

void solve() {
    int n;
    string s;
    cin>>n>>s;
    dem.clear() ;
    int cntd=0,cntk=0;
    for (int i=0;i<s.size();i++) {
        cntd+=(s[i] == 'D') ;
        cntk+=(s[i] == 'K') ;
        int g = __gcd(cntd,cntk) ;
        cout << dem[II(cntd/g ,cntk/g)]+1 << " " ;
        dem[II(cntd / g , cntk / g)]++;
    }
    cout<<endl;
}

int32_t main() {
    int q;
    cin>>q ;
    while (q--)solve() ;
}
