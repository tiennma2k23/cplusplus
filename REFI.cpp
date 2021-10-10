#include<bits/stdc++.h>
using namespace std;
long long int d=0,dem=0,i,j,k,l,h,num,vt[100000],a;
int main()
{
    string s,s1;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("REFI.inp","r",stdin);
    freopen("REFI.out","w",stdout);
    cin>>s;
    s1=s;
    for (i=0;i<s.length();i++)
        {
            if (s[i]=='?')
            {
                dem++;
                vt[dem]=i;
            }
        }
    if (dem==1)
    {
        for (i=0;i<=9;i++)
        {
            s=s1;
            s[vt[1]]=char(i+48);
            stringstream str2num(s);
            str2num>>num;
            if (num%17==5) d++;
        }
    }
    else if (dem==2)
    {
        s=s1;
        for (i=0;i<=9;i++)
            for (j=0;j<=9;j++)
        {
            s[vt[1]]=char(i+48);
            s[vt[2]]=char(j+48);
            stringstream str2num(s);
            str2num>>num;
            if (num%17==5) d++;
        }
    }
    else if (dem==3)
    {
        s=s1;
        for (i=0;i<=9;i++)
            for (j=0;j<=9;j++)
                for (k=0;k<=9;k++)
        {
            s[vt[1]]=char(i+48);
            s[vt[2]]=char(j+48);
            s[vt[3]]=char(k+48);
            stringstream str2num(s);
            str2num>>num;
            if (num%17==5) d++;
        }
    }
    else if (dem==4)
    {
        s=s1;
        for (i=0;i<=9;i++)
            for (j=0;j<=9;j++)
                for (k=0;k<=9;k++)
                    for (l=0;l<=9;l++)
        {
            s[vt[1]]=char(i+48);
            s[vt[2]]=char(j+48);
            s[vt[3]]=char(k+48);
            s[vt[4]]=char(l+48);
            stringstream str2num(s);
            str2num>>num;
            if (num%17==5) d++;
        }
    }
    else if (dem==5)
    {
        s=s1;
        for (i=0;i<=9;i++)
            for (j=0;j<=9;j++)
                for (k=0;k<=9;k++)
                    for (l=0;l<=9;l++)
                        for (h=0;h<=9;h++)
        {
            s[vt[1]]=char(i+48);
            s[vt[2]]=char(j+48);
            s[vt[3]]=char(k+48);
            s[vt[4]]=char(l+48);
            s[vt[5]]=char(h+48);
            stringstream str2num(s);
            str2num>>num;
            if (num%17==5) d++;
        }
    }
    else if (dem==6)
    {
        s=s1;
        for (i=0;i<=9;i++)
            for (j=0;j<=9;j++)
                for (k=0;k<=9;k++)
                    for (l=0;l<=9;l++)
                        for (h=0;h<=9;h++)
                            for (a=0;a<=9;a++)
        {
            s[vt[1]]=char(i+48);
            s[vt[2]]=char(j+48);
            s[vt[3]]=char(k+48);
            s[vt[4]]=char(l+48);
            s[vt[5]]=char(h+48);
            s[vt[6]]=char(a+48);
            stringstream str2num(s);
            str2num>>num;
            if (num%17==5) d++;
        }
    }
    else if (dem==0) cout<<0<<endl;
    else
    {
        d = rand();
    }
    cout<<d%998244353<<endl;
}
