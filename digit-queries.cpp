
#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        vector<int> res;
        res.clear();
        int k;
        cin>>k;
        int n=1,c=1,d=9;
        while (k>c*d)
        {
            k-=c*d;
            c++;
            d*=10;
            n*=10;
        }
        n+=(k-1)/c;
        while (n!=0)
        {
            res.push_back(n%10);
            n/=10;
        }
        reverse(res.begin(),res.end());
        cout<<res[(k-1)%c]<<endl;
    }
}
