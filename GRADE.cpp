#include <iostream>
#include <algorithm>
using namespace std;
long long n,k,i,ans;
long long snt(long long k){
     long long r=0,a=n;
     while(a) a/=k,r+=a;
     return r;
}
int main (){
   cin >> n >> k;
  ans=1000000000000000;
   for(i=2;i*i<=k;i++){
     if(k%i)continue;
     long long temp=0;
     while(!(k%i)) k/=i,temp++;
       ans=min(ans,snt(i)/temp);
   }
   if(k>1) ans=min(ans,snt(k));
   cout << ans;
   return 0;
}
