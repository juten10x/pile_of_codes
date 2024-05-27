#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

/*
  * ツェラーの公式を使って、年月日から曜日を計算します。
  * 現在使われている、グレゴリオ暦にのみ対応しています（1582年10月15日以降）。
  * 年　月　日　の順に、改行または空白区切りで入力して下さい。
*/

int floor_mine(int a, int b) {
  return floor(a / b);
}

string Zeller_c(int y, int m, int d) {
  vector<string> Youbi_vec = {"土", "日", "月", "火", "水", "木", "金"};
  
  if (m < 3) {
    m += 12;
    y -= 1;
  }
  int Y = y%100;

  int ans = floor_mine(26*(m+1), 10)%7 + d%7 + Y%7 + floor_mine(Y, 4)%7 - (2*floor_mine(y, 100))%7 + floor_mine(y, 400)%7;

  return Youbi_vec.at(ans%7);
}

int main() {
  int y, m, d;
  cin >> y >> m >> d;

  string Youbi = Zeller_c(y, m, d);

  printf("%d年%d月%d日は ", y, m, d);
  cout << Youbi << "曜日 です。\n";
  return 0;
}
