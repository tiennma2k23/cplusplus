#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int l,m,n,k,o,i,j,a[1000],b[1000],c[1000],d[1000],e[1000],dem=0;

cin>>n>>k;
for (i=1;i<=n;i++) cin>>a[i];
for (i=1;i<=n;i++) cin>>b[i];
for (i=1;i<=n;i++) cin>>c[i];
for (i=1;i<=n;i++) cin>>d[i];
for (i=1;i<=n;i++) cin>>e[i];
for (i=1;i<=n;i++)
{

        for (j=1;j<=n;j++)
        {

                for (l=1;l<=n;l++)
                {
                    for (o=1;o<=n;o++)
                    {
                        for (m=1;m<=n;m++) if (a[i]+b[j]+c[l]+d[o]+e[m]==k) dem++;
                    }
                }

        }

}
cout<<dem<<endl;
}
