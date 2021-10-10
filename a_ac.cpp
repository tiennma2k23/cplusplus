#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int , int> II;
const int N = 2e5 + 3;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
int n , t;
void process(){
    cin >> n;
    string ans = "989";
    for(int i = 4 ; i <= n ; i ++) ans += char((i - 4) % 10 + '0');
    for(int i = 0 ; i < n ; i ++) cout << ans[i];
    cout << "\n";
}
int main(){
   ios_base::sync_with_stdio(false);
   cin >> t;
   while(t --) process();
}
