#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,t=0,i;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        if (i%2==0) t=t+a;
    }
    cout<<t<<endl;
}
