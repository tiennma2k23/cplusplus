#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100000],i,n,j;
    bool kt=true;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        for (j=1;j<=int(sqrt(i));j++)
        {
            if (i%j==0)
            {
                if (a[j]*a[i/j]!=a[i]) {cout<<"NO"<<endl;kt=false;exit(0);}
            }
        }
    }
    if (kt==true) cout<<"YES"<<endl;
}
