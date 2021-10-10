#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,t,n,a;
    bool kt,kt1;
    cin>>t;
    while (t--)
    {
        cin>>n;
        kt=false;kt1=false;
        for (i=2;i<=sqrt(n);i++)
        {
            if (n%i==0)
            {
                if (kt==false)
                {
                    a=i;kt=true;n=n/a;
                }
                else if (i!=n/i&&a!=n/i)
                {
                    cout<<"YES"<<endl;
                    cout<<a<<" "<<i<<" "<<n/i<<endl;
                    kt1=true;
                    break;
                }
            }
        }
        if (kt1==false) cout<<"NO"<<endl;
    }
}
