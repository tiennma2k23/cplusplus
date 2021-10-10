#include <bits/stdc++.h>
using namespace std;
long long int k,kta[100],dd[100],ans,m,n,q;
int main()
{
    kta[0]=1;kta[1]=0;
    dd[0]=dd[1]=1;
    for (int i = 2; i <= 45; i++)
    {
        kta[i]=kta[i - 2]+kta[i - 1];
        dd[i]=dd[i - 2]+dd[i - 1];
    }
  	int q;
  	cin >> q;
  	while (q--)
  	{
        ans=0;
      	cin>>n>>k;
        if (k < 1) cout<<"0"<<endl;
        else if (k > dd[n])
        {
            cout << kta[n] <<endl;
        }
        else
        {
        while (n>=0)
        {
            if (k==dd[n])
            {
                ans+=kta[n];
                break;
            }
            else
            if (k<=dd[n-2])
            {
                n-=2;
            }
            else
            if (k>dd[n-2])
            {
                k-=dd[n-2];
                ans+=kta[n-2];
                n-=1;
            }
        }
        cout<<ans<<endl;
    }
  	}
}
