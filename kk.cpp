// C++ Program to implement
// the above approach
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define m 1000000007

// Function to find the sum
// of all divisors of all
// numbers from 1 to N
void solve(long long n)
{

	// Stores the sum
	long long s = 0;

	for (int l = 1; l <= n;) {

		// Marks the last point of
		// occurence with same count
		int r = n / floor(n / l);

		int x = (((r % m) * ((r + 1)
							% m))
				/ 2)
				% m;
		int y = (((l % m) * ((l - 1)
							% m))
				/ 2)
				% m;
		int p = ((n / l) % m);

		// Calculate the sum
		s = (s + (((x - y) % m) * p) % m
			+ m)
			% m;

		s %= m;
		l = r + 1;
	}

	// Return the result
	cout << (s + m) % m;
}

// Driver Code
signed main()
{
	long long n;
  cin>>n;
	solve(n);
	return 0;
}
