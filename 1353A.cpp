#include<iostream>
using namespace std;
int main()
{
    long long i,t,m,n;
    cin>>t;
    while (t--)
    {
        cin>>m>>n;
        if (m==1) cout<<0<<endl;
        else if (m==2) cout<<n<<endl;
        else cout<<n*2<<endl;
    }
}
