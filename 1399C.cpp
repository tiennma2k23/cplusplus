#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MAXN=1e4+10;
int t,n,a[MAXN],f1[MAXN],f2[MAXN],d;
int main()
{
    cin>>t;
    while(t--){
        cin>>n;
        int ans=0,d=0;
        memset(f1,0,sizeof f1);
        memset(f2,0,sizeof f2);
        for(int i=1;i<=n;++i){
            cin>>a[i];
            ++f1[a[i]];
            ++f2[a[i]];
        }

        for(int i=1;i<=100;++i){d=0;
            for(int j=1;j<=n;++j){
                if(i<=a[j]) continue;
                else{

                    if(i-a[j]==a[j]){

                        if(f1[a[j]]>=2) {++d;f1[a[j]]-=2;}

                    }
                    else{
                        if(f1[i-a[j]]>0&&f1[a[j]]>0) {++d;f1[i-a[j]]--;f1[a[j]]--;}
                    }
                }
            }
            ans=max(ans,d);
            memcpy(f1,f2,sizeof f2);
        }
        cout<<ans<<endl;
    }
}
