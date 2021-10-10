#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
//     g++ -g -o yourexe code.cpp
//     ./yourexe < yourinput.txt > youroutput.txt
//  cd C:users/muzna/My\ Documents/My\ Programs


 // -12, 11, -13, -5, 6, -7, 5, -3, -6
 // -12 -13 -5 -7 -3 -6 11 6 5

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, sum = 0;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin>>v[i];
            sum += v[i];
        }
        if(sum&1){
            cout<<"NO"<<endl;
            continue;
        }
        sum /= 2;
        vector<vector<bool>> dp(n+1, vector<bool> (sum+1, false));
        for(int i = 0; i <= sum; i++) dp[0][i] = false;
        for(int i = 0; i <= n; i++) dp[i][0] = true;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= sum; j++){
                if(v[i-1] <= j){
                    dp[i][j] = dp[i-1][j-v[i-1]] || dp[i-1][j];
                }
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        if(dp[n][sum]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
