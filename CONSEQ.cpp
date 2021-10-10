#include<bits/stdc++.h>
using namespace std;
long int b[10000];
void quickSort(long int Data[], long int l , long int r)
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
long int max1(long int b[],long int l,long int r)
{
    long int max2,i;
    for (i=l;i<=r;i++) max2=max(max2,b[i]);
    return max2;
}
long int min1(long int b[],long int l,long int r)
{
    long int min2,i;
    for (i=l;i<=r;i++) min2=min(min2,b[i]);
    return min2;
}
int main()
{
long int i,n,a[10000],j,d,dem,k,dem1,b1[10000];
d=0;
cin>>n;
for (i=1;i<=n;i++)
{
    cin>>a[i];b[i]=i;
}
quickSort(a,1,n);
for (i=1;i<=n;i++) b1[i]=b[i];
for (i=1;i<=n;i++)
{
    j=i+1;
    while (j<=n)
    {
        for (long int l=i;l<=j;l++) b[l]=b1[l];
        dem1=1;
        for (long int l=i+1;l<=j;l++) if (a[l]-a[l-1]==1) dem1++;
        if (dem1==j-i+1)
        {
            if (max1(b,i,j)-min1(b,i,j)+1==j-i+1) d++;
        }
        j++;
    }
}
cout<<d+n<<endl;
}
