#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int t,a[50000],n;
  cin >> t;
  for (int i=1;i<=t;i++)
  {
    cin >> n;int max1=0;
    for (int j=1;j<=n;j++) cin >> a[j];
    if (n==1) {cout<<"No"<<endl;}
    else {
    int i1=1; //int d=0;
    while (i1<=n)
    {
    	int j1=i1;int d=0;
    	while (abs(a[j1]-a[j1+1])==1&&j1<=n) {j1++;d++;}
    	max1=max(max1,d);
    	i1=j1+1;
    }
    if (max1>n/2) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  }
}
