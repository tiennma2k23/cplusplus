#include<iostream>
using namespace std;
int main()
{
    long long n,t,i,k,j;
    long long a[10000];
    cin>>t;
    for (i=1;i<=t;i++)
    {
        cin>>n;cin>>k;
        long long tong=0;
        for (j=1;j<=n;j++)
        {
            cin>>a[j];tong=tong+a[j];
        }
        tong=tong+k;
        if (tong%n!=0) {cout<<"NO"<<endl;}
        else
        {
            long long tbc=tong/n,dem=0,h=1;
            while ((h<=n)&&(dem==0))
            {
                if (a[h]>tbc) {dem=dem+1;}
                h++;
            }
            if (dem==1) {cout<<"NO"<<endl;}
            else {cout<<"YES"<<endl;}
        }
}
}
