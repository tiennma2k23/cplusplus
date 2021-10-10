#include<iostream>
using namespace std;
int main()
{
int i,n;float s=0.0;
cin>>n;
while(n <= 0);

    for(i = 1; i <= n; i++)
    {
        s += 1.0/(i);
    }
    cout.precision(8);
    cout<<fixed<<s<<endl;
}
