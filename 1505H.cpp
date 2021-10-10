    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long ans=1e9+1;
        long long a[11]={44,12,491,17,10,25,18,17,24,25,20};
        long long b[11]={557,99,61,99,91,90,98,30,25,30,29};
        for (int i=0;i<11;i++) ans=min(ans,abs(a[i]-b[i]));
        cout<<abs(ans)<<endl;
    }
