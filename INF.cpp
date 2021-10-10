#include <bits/stdc++.h>
using namespace std;
const long long MAXN=1e6,MAXM=1e6;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	long long m,n,k,dau,cuoi,giua,dem=0,i,ans;
	m=MAXN;n=MAXM;
	cin>>k;
	dau=0;
	cuoi=m*n;
	while(dau<cuoi)
	{
		giua=(dau+cuoi)/2;
		dem=0;
		long long tmp=sqrt(giua);
		for(i=1;i<=tmp;i++)	dem+=2ll*(giua/i)-tmp;
		if(dem<k) dau=giua+1;
		else cuoi=giua;
	}
	cout<<dau<<endl;
}
