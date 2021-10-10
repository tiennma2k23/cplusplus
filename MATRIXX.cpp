#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int m,n,k,dau,cuoi,giua,dem=0,i;
	cin>>m>>n>>k;
	dau=1;
	cuoi=m*n;
	while(dau<cuoi)
	{
		giua=(dau+cuoi)/2;
		dem=0;
		for(i=1;i<=m;i++)	dem+=min(giua/i,n);
		if(dem<k) dau=giua+1;
		else cuoi=giua;
	}
	cout<<dau<<endl;
}
