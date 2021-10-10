
#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    for (int i=1;i*i*i<=n;i++)
    {
        if (n%i==0)
        {
            if (n%(i*i)==0&&i!=1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
            int tmp=n/i;
            int _t=sqrt(tmp);
            if (_t*_t==tmp&&_t!=1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
}
