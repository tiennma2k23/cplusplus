
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=727355608;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int s,a,b,c;
    cin>>s>>a>>b>>c;
    //a++
    int tmp=s-a-b-c;
    if (tmp==0)
    {
        int aa=a%2+b%2+c%2;
        if (aa>1)
        {
            cout<<"";
            return 0;
        }
        else
        {

        }

    }
}
