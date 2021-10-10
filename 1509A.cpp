#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int> c,l;
int32_t main()
{
    int nt;    cin>>nt;
    while (nt--){
            int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if (a%2==0) c.push_back(a);
        else l.push_back(a);
    }
    for (auto v:l) cout<<v<<" ";
    for (auto v:c) cout<<v<<" ";
    cout<<endl;
    l.clear(),c.clear();
    }
}
