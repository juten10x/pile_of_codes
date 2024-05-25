#include <iostream>
using namespace std;

template <typename T>
bool isPrime(T x) {
  if (x == 1) return false;
  for (long long i = 2; i*i <= x; i++) {
      if (x%i == 0) return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long N;
  cin >> N;

  cout << N << (isPrime(N) ? "は素数です" : "は合成数です") << '\n';
  return 0;
}
