#include<iostream>
using namespace std;
long int b[100000];
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
    long int n,i,k,d,a[100000],b[100000],l,mang[100000000],j;
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i]>>b[i];
    cin>>k;l=k;
    quickSort(a,1,n);
    while (k>=0)
    {
        j++;
        for (i=1;i<=b[i];i++)
        {
            d=d+1;
            mang[d]=a[j];
        }
        k=k-b[i];
    }
    cout<<mang[l];
}
