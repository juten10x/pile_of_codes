#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
string _10to2(T N) {
  if (N == 0) return string("0");
  string S = "";
  
  while (N != 0) {
    S += (N%2 == 0 ? '0' : '1');
    N /= 2;
  }
  reverse(S.begin(), S.end());

  return S;
}


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long N;
  cin >> N;

  cout << _10to2(N) << '\n';
  return 0;
}
