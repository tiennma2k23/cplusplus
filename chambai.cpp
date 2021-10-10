#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
const string NAME = "2021_july_31_A";// tên bài

const int NTEST = 200;
long long n,m,q,u,v;
long long Rand(long long l, long long h)
{
    return l + ((long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (long long)rand() * (RAND_MAX + 1) +
                rand()) % (h - l + 1);
}
int main()
{
    srand(time(NULL));

    for(int iTest = 1; iTest <= NTEST; iTest++)
    {
        const string name = "bacho" ;// lưu ý ở đây tên đầu vào
        ofstream inp((name + ".inp").c_str());

        int n=Rand(1,10);
        inp<<n<<nl;
        while(n--){
            int a=Rand(1,10);
            inp<<a<<' ';
        }


        inp.close();
        system((NAME + ".exe").c_str());
        system((NAME + "_trau.exe").c_str());// tên bài
        if(system(("fc " + name + ".out " + name + ".ans").c_str()) != 0)
        {
            cout << "Test " << iTest << ": WRONG!\n";
            return 0;
        }
        cout << "Test " << iTest << ": CORRECT!\n";
    }
    return 0;
}
