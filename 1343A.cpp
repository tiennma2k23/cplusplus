#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,k,n,t;
    cin>>q;
    while (q--)
    {
        cin>>n;
        k=2;
        t=3;
        while (n%t!=0&&t<=n) t=t+2*k,k*=2;
        cout<<n/t<<endl;
    }
}
