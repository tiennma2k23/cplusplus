#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    if(n<=m){
            if(n%2==1){
                for(int i=1;i<=n;i++){
                    if(i==1 || i==n){
                        for(int j=1;j<=m;j++) cout<<j%2;
                        cout<<endl;
                    }
                    else{
                        cout<<i%2;
                        for(int j=2;j<m;j++) cout<<0;
                        cout<<i%2<<endl;
                    }
                }
            }
            else{
                for(int j=1;j<=m;j++) cout<<j%2;
                cout<<endl;
                for(int i=2;i<=n-2;i++){
                    cout<<i%2;
                    for(int j=2;j<m;j++) cout<<0;
                    cout<<i%2<<endl;
                }
                for(int j=1;j<=m;j++) cout<<0;
                cout<<endl;
                for(int j=1;j<=m;j++) cout<<j%2;
                cout<<endl;

            }
        }
    cout<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
