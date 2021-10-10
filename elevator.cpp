#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
   int a[2000];
   int i,n,k,l,tg,j,kq=0;
   cin>>n;cin>>k;
   for (i=1;i<=n;i++)
   {
       cin>>l;a[i]=l;
   }
    for( i = 1; i <= n - 1; i++){
        for( j = i + 1; j <= n; j++){
            if(a[i] < a[j]){

                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }

    i=1;
    while (i<=n)
    {
        kq+=abs(a[i]-1)*2;
        i+=k;
    }
    cout<<kq;
}
