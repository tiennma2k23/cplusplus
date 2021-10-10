#include <iostream>

using namespace std;

int main()
{
  unsigned long long int a,b,n;
  cin >> a >> b >> n;
  unsigned long long int tich=a,du=1,b1=b;
  while (b>0)
  {
    if (b%2==1) du=du*tich%n;
    tich=tich*tich%n;
    b/=2;
  }
  cout << du;
}
