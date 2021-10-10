#include <iostream>

using namespace std;

int main()
{
  long long a,p,n;
  cin >> a >> p >> n;
  long long tich=a,du=1,p1=p;
  while (p>0)
  {
    if (p%2==1) du=du*tich%n;
    tich=tich*tich%n;
    p/=2;
  }
  cout << du;
}
