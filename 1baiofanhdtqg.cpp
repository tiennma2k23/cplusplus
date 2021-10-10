#include<bits/stdc++.h>

using namespace std;

bool check(long long x) {
    while(x % 2 == 0) x/= 2;
    while(x % 3 == 0) x/= 3;
    while(x % 5 == 0) x/= 5;

    if(x == 1) return false;
    else return true;
}

int main() {
//#define file "r"
//    freopen(file".inp", "r", stdin);
//    freopen(file".out", "w", stdout);

    ios_base::sync_with_stdio(false);

    int T, ans;
    cin >> T;
    int a[3] = {3, 5};
    while(T --) {
        long long X;
        cin >> X; ans = 0;

        if(check(X)) {
            cout << "Not in sequence\n";
            continue;
        }

        do {
            long long Y = X;
            do {
                ans += (int)log2(Y) + 1;
                // Biến ans này chính là kết quả cuối cùng
                Y /= 3;

//Mỗi lần chia thế này thì ta có thể hiểu là Ta có biến Z = 5^(số lần chia 5) * 3^(số lần chia ba), và có số số thuộc dãy A mà chia cho Z ra lũy thừa của 2 là log2(X/Z)
            }
            while(Y > 1);

            X/= 5;
        }
        while(X > 1);

        cout << ans + 1<< "\n";
    }


    return 0;
}
