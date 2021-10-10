#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,i,j;
string ho[10000],ten[10000],dem[10000],s1,s2,s3;
cin>>n;
for (i=1;i<=n;i++) cin>>ho[i]>>ten[i]>>dem[i];
for (i=1;i<=n;i++)
{
    s1=ten[i];
    for (j=1;j<=n;j++)
{
    if (ho[j]==s1)
    {
        s2=ten[j];ho[j]=dem[j];dem[j]=s2;ten[j]=s1;
    }
}
}

for (i=1;i<n;i++)
        for (j=i+1;j<=n;j++)
    {
        if (ho[i]>ho[j]) {swap (ho[i],ho[j]);swap (ten[i],ten[j]);swap (dem[i],dem[j]);}
    }
    for (i=1;i<n;i++)
        for (j=i+1;j<=n;j++)
    {
        if ((ho[i]==ho[j])&&(ten[i]>ten[j])) {swap (ho[i],ho[j]);swap (ten[i],ten[j]);swap (dem[i],dem[j]);}
    }
    for (i=1;i<n;i++)
        for (j=i+1;j<=n;j++)
    {
        if ((ho[i]==ho[j])&&(ten[i]==ten[j])&&(dem[i]>dem[j])) {swap (ho[i],ho[j]);swap (ten[i],ten[j]);swap (dem[i],dem[j]);}
    }
    for (i=1;i<=n;i++) cout<<ho[i]<<" "<<ten[i]<<" "<<" "<<dem[i]<<endl;
}
