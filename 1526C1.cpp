#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int> v;
int32_t main()
{
    int n,dem=0,t=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if (a<0)
        {
            v.push_back(a);

        }
        sort(v.rbegin(),v.rend());
        t+=a;
        if (t<0)
        {
            while (!v.empty())
            {
                t-=v.back();
                v.pop_back();
                dem++;
                if (t>=0) break;
            }
            //cerr<<i<<" "<<dem<<" "<<t<<endl;
        }
    }
    cout<<n-dem<<endl;
}
