#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        int c1=n/3,c2=n/3;
        if (n%3==1) c1++;
        else if (n%3==2) c2++;
        cout<<c1<<" "<<c2<<endl;
    }
}
