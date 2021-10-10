#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,mod;
    cin>>n>>k;
    if (k%2==1)
    {
        cout<<(n/k)*(n/k)*(n/k);
    }
    else
    {
        n=n/(k/2);
        long long tmp=n+1;
        cout<<(n/2)*(n/2)*(n/2)+(tmp/2)*(tmp/2)*(tmp/2)<<endl;
    }
}
