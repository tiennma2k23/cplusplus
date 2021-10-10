#include<iostream>
using namespace std;
int main()
{
    long long int  k,w,n;
cin>>k>>n>>w;
if ((w*(w+1)/2)*k-n>=0)cout<<(w*(w+1)/2)*k-n<<endl;else cout<<0<<endl;
}
