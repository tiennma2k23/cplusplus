#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,n;
    cin>>n;
    t=int(sqrt(n));
    for (i=t;i>=1;i--)
        if (n%i==0) { cout<<n/i-1+i-1<<endl;break;}
}
