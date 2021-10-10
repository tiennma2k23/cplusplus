#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i;
cin>>n;
k=sqrt(2*n);
for (i=k;i>=1;i++)
{
    if ((2*n)%i==0)
    {
        if ((2*n)/i-i==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        break;
    }
}
}
