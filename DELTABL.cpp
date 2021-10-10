#include<iostream>
using namespace std;
int main()
{
    long long n,m,k,i,j,demm=0,demn=0;
    long long a[10000],dem[10000],dem1[10000],b[10000];
    cin>>n;cin>>m;cin>>k;
    for (i=1;i<=k;i++)
    {
        cin>>a[i];cin>>b[i];
        dem[a[i]]=dem[a[i]]+1;
        dem1[b[i]]=dem1[b[i]]+1;
        if (dem[a[i]]==1) {demn=demn+1;}
        if (dem1[b[i]]==1) {demm=demm+1;}
    }
    cout<<demm*demn<<endl;
}
