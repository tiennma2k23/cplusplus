#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,t,n,a,dem;
    cin>>q;
    while (q--)
    {
        t=0;dem=0;
        cin>>n;
        while (n--)
        {
            cin>>a;
            t=t+a;
            if (a==0) dem++;
        }
        if (dem+t!=0) cout<<dem<<endl;
        else cout<<dem+1<<endl;
    }
}
