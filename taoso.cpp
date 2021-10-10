#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<bool> prime(10000000);
    long long i,j,d=0;
    freopen("SNT.out","w",stdout);
    for(i=1; i<=10000000;i++) prime[i]=true;
    prime[0]=false;
    prime[1]=false;
    for (i=1;i<=10000000;++i)
    {
        if (prime[i]==true)
        {
            d++;
            cout<<i<<",";
            for (j=i*i;j<=10000000;j+=i) prime[j]=false;
        }
    }
    cout<<endl;
    cout<<d<<endl;
}
