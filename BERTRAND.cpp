#include<bits/stdc++.h>
using namespace std;
bool prime[20000000];
long long dem[20000000];
void sang()
{
    long long i,j;
    memset(prime,true,20000000);
    memset(dem,0,20000000);
    prime[0]=false;
    prime[1]=false;
    prime[2]=true;
    dem[0]=0;dem[1]=0;
    for (i=2;i<=20000000;i++)
    {
        if (prime[i]==true){
        for (j=2*i;j<=20000000;j+=i) prime[j]=false;
        }
        dem[i]=dem[i-1]+prime[i];
    }
}
int main()
{
    long long q,n,i,d;
    sang();
    cin>>q;
    while (q--)
    {
        cin>>n;
        cout<<dem[2*n-1]-dem[n]<<endl;
    }
}
