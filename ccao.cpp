#include <iostream>
#include <string>

int tt[100001],tt1[100001];

void quickSort(int Data[], int l , int r)
{
	if (l <= r)
	{
		int key = Data[(l+r)/2];
		int y;
		int i = l;
		int j = r;
		while (i <= j)
		{
			while (Data[i] < key) i++;
			while (Data[j] > key) j--;
			if (i <= j)
			{
				y=Data[i];Data[i]=Data[j];Data[j]=y;
				y=tt[i];tt[i]=tt[j];tt[j]=y;
				i++;j--;
			}
		}
		if (l < j) quickSort(Data, l, j);
		if (r > i) quickSort(Data, i, r);
	}
}

void quickSort1(int k[], int l , int r)
{
	if (l <= r)
	{
		int key = k[(l+r)/2];
		int y;
		int i = l;
		int j = r;
		while (i <= j)
		{
			while (k[i] < key) i++;
			while (k[j] > key) j--;
			if (i <= j)
			{
				y=k[i];k[i]=k[j];k[j]=y;
				y=tt1[i];tt1[i]=tt1[j];tt1[j]=y;
				i++;j--;
			}
		}
		if (l < j) quickSort1(k, l, j);
		if (r > i) quickSort1(k, i, r);
	}
}

using namespace std;

int main()
{
  int t,a[100001],b[100001];
  cin >> t;
  for (int i=1;i<=t;i++) {cin >> a[i];b[i]=a[i];tt[i]=i;tt1[i]=i;}
  quickSort(b,1,t);
  quickSort1(tt,1,t);
  for (int i=1;i<=t;i++) cout << tt1[i]-1 << " ";
}
