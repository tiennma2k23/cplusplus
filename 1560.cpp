#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k;
vector<int> v;
bool ok(int m)
{
    set<int> st;
    int x=m;
    while (x)
    {
        st.insert(x%10);
        x/=10;
    }
    return (st.size()<=k);
}
void solve()
{
    if (ok(n))
    {
        cout<<n;
        return;
    }
    for (int i=v.size()-1; i>=0; i--)
    {
        for (int cs=v[i]+1; cs<10; cs++)
        {
            set<int> st;
            for (int j=0; j<i; j++) st.insert(v[j]);
            st.insert(cs);
            if (st.size()>k) continue;
            for (int j=0; j<i; j++) cout<<v[j];
            cout<<cs;
            if (st.size()<k)
            {
                for (int j=i+1; j<v.size(); j++) cout<<0;
            }
            else
            {
                for (int j=i+1; j<v.size(); j++) cout<<(*st.begin());
            }
            return;
        }
    }
    cout<<1;
    if (k==1)
    {
        for (int j=0; j<v.size(); j++) cout<<1;
    }
    else
    {
        for (int j=0; j<v.size(); j++) cout<<0;
    }
}
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        cin>>n>>k;
        int x=n;
        v.clear();
        while (x)
        {
            v.push_back(x%10);
            x/=10;
        }
        reverse(v.begin(),v.end());
        solve();
        cout<<endl;
    }
}
