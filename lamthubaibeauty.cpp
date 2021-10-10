#include<iostream>
#include<string>

using namespace std;
int main()
{
   unsigned long long int k,n,i,kq;
   cin>>k;
   for (i=1;i<=k;i++)
   {
       cin>>n;kq=0;
       while (n>0)
       {
           kq=kq+n%10;
           n=(n-n%10)/10;
       }
       cout<<kq<<endl;
   }
}
