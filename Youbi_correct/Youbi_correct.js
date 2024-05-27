/* 現在使われている、グレゴリオ暦のみに対応しています（1582年10月15日以降）。 */

function floor(a, b) {
  return Math.floor(a/b);
}

function Zeller_c(y, m, d) {
  let Youbi_str = "土日月火水木金";
  
  if (m < 3) {
    m += 12;
    y -= 1;
  }
  let Y = y%100;
  
  
  let ans = floor(26*(m+1), 10)%7 + d%7 + Y%7 + floor(Y, 4)%7 - (2*floor(y, 100))%7 + floor(y, 400)%7;
  
  return Youbi_str[ans%7];
}


let yp = prompt("何年？");
let mp = prompt("何月？");
let dp = prompt("何日？");

let y = Number(yp);
let m = Number(mp);
let d = Number(dp);

let Youbi = Zeller_c(y, m, d);

document.write(y + "年" + m + "月" + d + "日は " + Youbi + "曜日 です。");
