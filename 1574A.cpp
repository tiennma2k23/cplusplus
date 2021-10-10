#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=i;j++) cout<<'(';
            for (int j=1;j<=i;j++) cout<<')';
            for (int j=2*i+1;j<=2*n;j++)
            {
                if (j%2) cout<<'(';
                else cout<<')';
            }
            cout<<endl;
        }
    }
}
