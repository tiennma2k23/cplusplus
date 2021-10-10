#include<bits/stdc++.h>
using namespace std;
#define int long long
const int inf=1e12+1,maxn=2e5+1;
void solve(){
        int n;
        cin>>n;
        int ans=inf;
        vector<int> pos;
         for(int i=1;i<=n;i++){
                  int a;
                  cin>>a;
                  if(a%2) pos.push_back(i);
         }
         int pl=(n+1)/2;
         int pc=n-pl;
         if(pos.size() == pl){
                  int res = 0;
                  for(int i=0;i<pl;i ++) res+=abs(pos[i] - (2*i+1));
                  ans=min(ans,res);
         }
         if(pos.size() == pc){
                  int res = 0;
                  for(int i=0;i<pc;i ++) res+=abs(pos[i] - (2*i+2));
                  ans=min(ans,res);
         }
         if (ans==inf)
         {
             cout<<-1<<endl;
             return;
         }
         cout<<ans<<endl;
}

int32_t main(){
   int q;
   cin>>q;
   while (q--) solve();
}
