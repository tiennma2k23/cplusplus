#include <iostream>
using namespace std;

#define ll long long

const int N = 1e6;

int spf[N + 5], countNumberofGame[N + 5];
int countNumberofi, tempi, q, a, b;

void sieve() {
    for (int i = 1; i <= N; i++)
        spf[i] = i;

    for (int i = 2; 1ll * i * i <= N; i++)
        if (spf[i] == i)
            for (int j = i * i; j <= N; j += i)
                if (spf[j] == j)
                    spf[j] = i;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    countNumberofGame[1] = 0;
    for (int i = 2; i <= N; i++) {
        tempi = i;
        countNumberofi = 0;
        while (tempi > 1) {
            tempi /= spf[tempi];
            countNumberofi ++;
        }
        countNumberofGame[i] = countNumberofGame[i - 1] + countNumberofi;
    }

    cin >> q;
    while (q --) {
        cin >> a >> b;
        cout << countNumberofGame[a] - countNumberofGame[b] << "\n";
    }
}
