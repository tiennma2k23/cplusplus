#include<iostream>
using namespace std;
long int n,i,a[1000000],d=0;
void radixsort(long int a[1000000],long int n,int cs){
    int ssx[n];
    int demcs[10];
    for (i=0;i<10;i++) demcs[i]=0;
    for (i=1;i<=n;i++) demcs[(a[i]/cs)%10]++;
    for (i=1;i<10;i++) demcs[i]=demcs[i]+demcs[i-1];
    for (i=n;i>=1;i--){
            ssx[demcs[(a[i]/cs)%10]]=a[i];
            demcs[(a[i]/cs)%10]--;
        }
    for (i=1;i<=n;i++) a[i]=ssx[i];
}

int main(){
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    long int max1=a[1];int cs=1;
    for (i=2;i<=n;i++) max1=max(max1,a[i]);
    while (max1/cs>0)
    {
        radixsort(a,n,cs);
        cs=cs*10;d++;
        cout<<"Sau lan sap xep thu "<<d<<": ";
        for (i=1;i<=n;i++) cout<<a[i]<<" ";cout<<endl;
    }
    cout<<"Ket qua sau sap xep la: ";
    for (i=1;i<=n;i++) cout<<a[i]<<" ";
}
