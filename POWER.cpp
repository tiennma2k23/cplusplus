#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,d[100],tmp,k,a,ans=1,prime[14]={2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 23 , 29 , 31 , 37 , 39 , 41},j;
    cin>>n>>k;
    fill(d , d + 45 , 0);
    while (n--)
    {
        cin>>a;
            for (j=0;j<14;j++)
            {
                long long cnt = 0;
                while(a%prime[j] == 0){
                cnt ++;
                a/=prime[j];
                }
                d[prime[j]]=max(d[prime[j]],cnt);
            }
    }
    for(i=2;i<=41;i++){
     if(d[i] % k == 0) ans *= pow(i , d[i] / k);
     else ans *= pow(i , d[i] / k + 1);
     }
    cout<<ans<<endl;
}
