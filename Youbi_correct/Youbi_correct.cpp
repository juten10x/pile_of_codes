#include <iostream>
#include <math.h>
using namespace std;

/*
  * ツェラーの公式を使って、年月日から曜日を計算します。
  * グレゴリオ暦みのみ対応しています（1582年10月15日以降）。
  * 年　月　日　の順に、改行または空白区切りで入力して下さい。
*/

int floor_mine(int a, int b) {
  return floor(a / b);
}

int Zeller_c(int y, int m, int d) {
  if (m < 3) {
    m += 12;
    y -= 1;
  }
  int Y = y%100;

  int res = floor_mine(26*(m+1), 10)%7 + d%7 + Y%7 + floor_mine(Y, 4) - (2*floor_mine(y, 100))%7 + floor_mine(y, 400)%7;

  return res%7;
}

int main() {
  int y, m, d;
  cin >> y >> m >> d;

  string Youbi = "";
  int ans = Zeller_c(y, m, d);
  if (ans == 0) Youbi = "土";
  if (ans == 1) Youbi = "日";
  if (ans == 2) Youbi = "月";
  if (ans == 3) Youbi = "火";
  if (ans == 4) Youbi = "水";
  if (ans == 5) Youbi = "木";
  if (ans == 6) Youbi = "金";
  
  printf("%d年%d月%d日は ", y, m, d);
  cout << Youbi << "曜日 です。";
  return 0;
}
