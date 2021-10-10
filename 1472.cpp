#include<bits/stdc++.h>
using namespace std;
void sol()
{
    long long  w,h,n,ans=1;
        long long ck=0;
        cin>>w>>h>>n;
        while (w%2==0)
        {
            w/=2,ans*=2;
            if (ans>=n)
            {
                ck=1;
                break;
            }
        }
        while (h%2==0)
        {
            h/=2;
            ans*=2;
            if (ans>=n)
            {
                ck=1;
                break;
            }
        }
        if (ans>=n) ck=1;
        if (ck) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
}
int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        sol();
    }
}
