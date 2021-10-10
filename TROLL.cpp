#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,b,n;
    long long int k,k1,k2;
    cin>>n;
    while (n--)
    {
    cin>>a>>b;
    k=9*10/2;
    a--;
    k1=((a/9)*k)+((a%9)*(a%9+1)/2);
    k2=((b/9)*k)+((b%9)*(b%9+1)/2);
    cout<<k2-k1<<endl;
    }
}
