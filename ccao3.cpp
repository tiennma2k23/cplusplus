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
    long int n,i,k,d[100000],a[100000],l,dem;
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i]>>b[i];
    cin>>k;
    quickSort(a,1,n);
    i=1;dem=0;
    while ((i<=n) &&(dem==0))
    {
        if (k<=b[i]) {dem=1;}
        else {k=k-b[i]; i++;}

    }
    cout<<a[i]<<endl;
}
