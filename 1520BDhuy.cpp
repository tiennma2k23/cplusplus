#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while (t--){
        cin >> n;
        if (n<10) cout << n << endl;
        else{
        int t = log(n)/log(10);
        int tg = 1;
        for (int i = 1;i <= t;i++) tg*=10;
        int k = n / tg;
        int cmp = (tg*10-1)/9*k;
        if (n < cmp) k--;
        cout <<9*t+k<< endl;
        }
    }
}
