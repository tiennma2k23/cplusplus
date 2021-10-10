#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+1;
long long merge(long long arr[], long long temp[], long long left, long long mid, long long right)
{
    long long inv_count = 0;
    long long i = left;
    long long j = mid;
    long long k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
        {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }
    while (i <= mid - 1)
        temp[k++] = arr[i++];
    while (j <= right)
        temp[k++] = arr[j++];
    for (i=left; i <= right; i++)
        arr[i] = temp[i];
    return inv_count;
}
long long _mergeSort(long long arr[], long long temp[], long long left, long long right)
{
    long long mid, inv_count = 0;
    if (right > left)
    {
        mid = (right + left)/2;
        inv_count  = _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid+1, right);
        inv_count += merge(arr, temp, left, mid+1, right);
    }

    return inv_count;
}
long long countSwaps(long long arr[], long long n)
{
    long long temp[n];
    return _mergeSort(arr, temp, 0, n - 1);
}
long long a[N],n,b[N],c[N],x=0,y=0,d=0;
int main()
{

cin >> n;
for(long long i=0;i<n;i++){
        cin >> a[i];
        b[i]=a[i]-i-1;
        c[i]=b[i];
        if(a[i]==i+1){
            d++;
        }
}
if(d==n){cout << 0;}
else{
            sort(c,c+n);
for(long long i=0;i<n;i++){
        if(b[i]==c[0]){
            x=i;
        }
        if(b[i]==c[n-1]){
            y=i;
        }
}
swap(a[x],a[y]);
cout << countSwaps(a,n)+1;
}
return 0;
}
