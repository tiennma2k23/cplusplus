#include<iostream>
#include<cmath>
using namespace std;
bool check(long int n)
{
    long int j,dem;
    if (n<2) {return false;}
        else if(n==2){return true;}
        else
            {
            int dem=0;
        j=2;
        while((j<=sqrt(n)) and (dem==0))
        {
            if (n%j==0) {dem=dem+1;}
            j++;
        }
        if (dem==0) {return true;} else {return false;}
        }
}
int main()
{
long int i,t,m,n,j;
cin>>t;
for (i=1;i<=t;i++)
{
    cin>>m>>n;
    for (j=m;j<=n;j++) if (check(j)) cout<<j<<endl;
}
cout<<endl;
}
