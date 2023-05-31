///Divisor Count for integers from 1 to N
#include<bits/stdc++.h>
using namespace std;

int d[104];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n = 100;
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j += i) {
      d[j]++;
      // d[j] += i // for sum of divisors
    }
  }
  for (int i = 1; i <= n; i++) {
    cout << d[i] << ' ';
  }
  return 0;
}

///Prime Factorization using Sieve

const int N = 1e6 + 9;
int spf[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for (int i = 2; i < N; i++) {
    spf[i] = i;
  }
  for (int i = 2; i < N; i++) {
    for (int j = i; j < N; j += i) {
      spf[j] = min(spf[j], i);
    }
  }
  int q; cin >> q; // queries q <= 1e6
  while (q--) {
    int n; cin >> n; // find prime factorization of n <= 1e6
    vector<int> ans;
    while (n > 1) {
      ans.push_back(spf[n]);
      n /= spf[n];
    }
    for (auto x: ans) cout << x << ' '; cout << '\n';
  }
  return 0;
}

///gcd

int GCD(int a, int b) {
  if (a == 0) return b;
  if (b == 0) return a;
  if (a < b) swap(a, b);
  return GCD(a % b, b);
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout << GCD(10, 15) << '\n';
  return 0;
}
///Divisibility and Large Numbers

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string a; int b; cin >> a >> b;
  int ans = 0;
  for (int i = 0; i < a.size(); i++) {
    ans = (ans * 10LL % b + (a[i] - '0')) % b;
  }
  // ans = a % b;
  if (ans == 0) {
    cout << "a is divisible by b\n";
  }
  else {
    cout << "sad\n";
  }
  return 0;
}
