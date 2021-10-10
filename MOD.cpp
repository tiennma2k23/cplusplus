#include <iostream>
#include <cmath>
using namespace std;
int main()
{
long long k,n;
cin>>n;
if (n<0) {n=abs(n);}
cout<<(n/100)%10<<(n/10)%10<<(n%10)<<endl;
}
