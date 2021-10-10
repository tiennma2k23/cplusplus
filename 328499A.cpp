#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,k;
vector<int> create(int n,int k)
{
    if(k==1){
        vector<int> ans;
        for(int i=1;i<=n;++i) ans.push_back(i);
        return ans;
    }
    vector<int> cnt=create(n-1,(k+1)/2);
    if(k%2){
        cnt.push_back(n);
        return cnt;
    }
    else{
        vector<int> ans;
        for(int i=0;i<cnt.size();++i){
            if(cnt[i]==n-1){
                ans.push_back(n);
            }
            ans.push_back(cnt[i]);
        }
        return ans;
    }
}

void solve()
{
    cin>>n>>k;
        int x=1;
        for (int i=1;i<n;i++)
        {
            x*=2;
            if (x>=k) break;
        }
        if (x<k)
        {
            cout<<-1<<endl;
            return ;
        }
        vector<int> ans=create(n,k);
        for(int x:ans) cout<<x<<" ";
        cout<<endl;
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--) solve();
}
