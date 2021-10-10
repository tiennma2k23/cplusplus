#include<bits/stdc++.h>
using namespace std;
bool checknt(long long int n)
{
    if (n<2) {return false;}
        else if(n==2){return true;}
        else
            {
            int dem=0;
            long long int j=2;
             while((j<=sqrt(n)) and (dem==0))
                {
                    if (n%j==0) {dem=dem+1;}
                    j++;
                }
                if (dem==0) {return true;} else {return false;}
            }
}
int main()
{
long long int n,a;
cin>>n;
while (n--)
{
    cin>>a;
    if ((int(sqrt(a))*int(sqrt(a))==a)&&(checknt(int(sqrt(a))))) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}
