#include <bits/stdc++.h>
using namespace std;
long long a[1000000],n,kq=0,l;
void In(){
    long long dem=0,d=0;
    for (long long i=1;i<=n;i++){
         if (a[i]==0) dem++;
         else d++;
    }
    if (dem<=l && d<=l) kq++;
}
void BS(long long k){
    for (long long i=0;i<=1;i++){
        a[k]=i;
        if (k==n){
            In();
        }
        else BS(k+1);
    }
}
int main(){
	cin>>n>>l;
	BS(1);
	cout << kq << endl;
}
