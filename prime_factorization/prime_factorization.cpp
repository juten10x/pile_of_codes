#include <iostream>
#include <map>
using namespace std;

map<long long, long long> res;
long long t = 0;

template <typename T>
void pf_mapA(T N) {
  for (long long i = 2; i*i <= N; i++) {
    if (N%i != 0) continue;
    long long cnt = 0;
    while (N%i == 0) {
        cnt++;
        N /= i;
    }

    res[i] += cnt;
    t++;
  }

  if (N != 1) res[N] = 1, t++;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long N;
  cin >> N;

  if (N == 1) {
    cout << "1は素因数を持ちません\n";
    return 0;
  }

  pf_mapA(N);

  cout << N << " = ";
  long long r = 0;
  for (auto i : res) {
    r++;
    cout << i.first << '^' << i.second;
    if (t > r) cout << " * ";
  }
  return 0;
}
