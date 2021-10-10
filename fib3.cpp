#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int k,i,n,a,a1,a2,sum,dem,dem1,dem2,j,t,l;
    string s,s1,s2;
    cin>>t;
    while (t--){
    cin>>n>>k;
    if (k==0) cout<<"0"<<endl;
    else if (n==0) cout<<"1"<<endl;
    else if (n==1) cout<<"0"<<endl;
    else
    {
        a1=1;a2=1;a=2;i=2;sum=2;
        while ((i<n)&&(sum<k))
        {
         a=a1+a2;
         a1=a2;
         a2=a;
         sum=sum+a;
         i++;
        }
        dem1=1;dem2=0;s1="a";s2="b";
        for (j=0;j<i;j++)
        {
            dem=dem1+dem2;dem1=dem2;dem2=dem;
            s=s1+s2;s1=s2;s2=s;
        }

        if (sum==k) cout<<dem<<endl;
        else if (sum>k)
        {
            for (j=k+1;j<=sum;j++) if (s[j]=='a') dem--;
           cout<<dem<<endl;
        }
    }
    }
}
