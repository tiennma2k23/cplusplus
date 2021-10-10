#include<bits/stdc++.h>
using namespace std;
long int b[300000];
void quickSort(long int Data[],long int l ,long int r)
{
	if (l <= r)
	{
		long int key = Data[(l+r)/2];
		long int y;
		long int i = l;
		long int j = r;
		while (i <= j)
		{
			while (Data[i] < key) i++;
			while (Data[j] > key) j--;
			if (i <= j)
			{
				y=Data[i];Data[i]=Data[j];Data[j]=y;
				y=b[i];b[i]=b[j];b[j]=y;
				i++;j--;
			}
		}
		if (l < j) quickSort(Data, l, j);
		if (r > i) quickSort(Data, i, r);
	}
}
int main()
{
    long int a[300100],i,n,t=0,d;
    cin>>n;
    for (i=1;i<=3*n;i++) {cin>>a[i];b[i]=i;}
    quickSort(a,1,3*n);
    d=0;
    for (i=3*n;i>=1;i--)
    {
        if (b[i]<=3*n/2) {t=t+a[i];d++;}
        if (d==n) break;
    }
    d=0;
    for (i=1;i<=3*n;i++)
    {
        if (b[i]>3*n/2) {t=t-a[i];
        d++;}
        if (d==n) break;
    }
cout<<t<<endl;
}
