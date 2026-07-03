#include <bits/stdc++.h>
using namespace std;

// Generate sieve up to n
vector<int> sieve(int n) {
    vector<int> prime(n + 1, 1);
    prime[0] = prime[1] = 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i)
                prime[j] = 0;
        }
    }
    return prime;
}

int main() {
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    vector<pair<int,int>> queries(q);
    int maxR = 0;

    for (int i = 0; i < q; i++) {
        cin >> queries[i].first >> queries[i].second;
        maxR = max(maxR, queries[i].second);
    }

    // Generate sieve once up to maxR
    vector<int> prime = sieve(maxR);

    // Prefix sum of primes
    for (int i = 1; i <= maxR; i++) {
        prime[i] += prime[i - 1];
    }

    // Answer queries
    for (int i = 0; i < q; i++) {
        int L = queries[i].first;
        int R = queries[i].second;

        int ans = prime[R] - (L > 1 ? prime[L - 1] : 0);
        cout << ans << endl;
    }

    return 0;
}
