#include<iostream>
#include<algorithm>
//#include<cstdio>
using namespace std;
int main()
{
    //freopen ("AQUERY.in","r",stdin);
    //freopen ("AQUERY1.out","w",stdout);
    long int i,n,a[100001],b[100001],t,k,d[100001],l;
    cin>>n;
    for (i=1;i<=n;i++)
        {
            cin>>a[i]>>b[i];
            d[a[i]]=b[i];
        }
    cin>>k;
    sort (a+1,a+n+1);

    for (i=1;i<=n;i++)
    {
        if (k<=d[a[i]]) {l=i;break;}
        else {k=k-d[a[i]];}
    }
    cout<<a[l]<<endl;

}
