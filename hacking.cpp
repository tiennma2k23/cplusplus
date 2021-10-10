#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int t;
    cin>>t;
    while(t--){
       int a, b, c;
       cin>>a>>b>>c;
       int x=a+b+c-3;
       int q=x%9;
       int lmin=min(a, min(b,c));
       if(q==6&&x/9<lmin){
        cout<<"YES"<<endl;
        continue;
       }
       cout<<"NO"<<endl;
    }
}

int main()
{
    solve();
    return 0;
}
