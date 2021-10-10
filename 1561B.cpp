#include<bits/stdc++.h>
using namespace std;

void solve()
{
    set<int> st;
    int a,b;
    cin>>a>>b;
    int ga=(a+b)/2;
    int gb=a+b-ga;
    for (int i=0;i<=b;i++)
    {
        if (i<=ga&&a+i>=ga) st.insert(a+2*i-ga);
        if (i<=gb&&a+i>=gb) st.insert(a+2*i-gb);
    }
    cout<<st.size()<<endl;
    for (auto val:st) cout<<val<<" ";
    cout<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
