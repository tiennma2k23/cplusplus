#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int m,n;
	cin >> m >> n;
   	long long int a[1001][1001],b[1001][1001];
	long long int dem=0;
	for (int i=1;i<=m;i++)
	for (int j=1;j<=n;j++) {cin >> a[i][j]; b[i][j]=0;}

	for (int i=1;i<=m;i++)
	for (int j=1;j<=n;j++)
	if (b[i][j]==0&&a[i][j]==1)
	{
		int i1=i,j1=j;
		while (i1<=m)
		{
			while (a[i1][j1]==1&&j1<=n) {b[i1][j1]=1;j1++;}
			i1++; j1=j;
			if (a[i1][j1]==0) break;
		}
		dem++;
	}
	cout << dem<<endl;
}
