#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("ra.out","w",stdout);
long long int a1 = 0,a2 = 1,a=1,d=1,kt[10000],i,j,f[100][100],t,k,n;
kt[1]=0;
    while (a <= 1000000000)
    {
        a = (a1 + a2);
        a1 = a2;
        a2 =a;
        d++;
        kt[d]=a;
    }
    for (i=2;i<=d+1;i++){f[i][1]=kt[i-1];f[1][i]=kt[i-1];}
    for (i=2;i<=d+1;i++)
        for (j=2;j<=d+1;j++)
    {
        f[i][j]=f[i][1]*f[1][j];
    }
    //for (i=2;i<=d+1;i++)
    //{
        //for (j=2;j<=d+1;j++) cout<<f[i][j]<<" ";
        //cout<<endl;
    //}
    cin>>t;
    for (k=1;k<=t;k++)
    {
        cin>>n;
        int dem=0;
        for (i=2;i<=d+1;i++)
            for (j=2;j<=d+1;j++)
        if (f[i][j]==n) {dem=1;break;}
        if (dem==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
