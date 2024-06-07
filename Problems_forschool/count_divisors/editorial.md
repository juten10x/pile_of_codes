## 解説
$for$ 文で $i$ を $i=1, \ldots, 100$ まで回しましょう．そして，各 $i$ について $100$ を $i$ で割った余りが $0$ になるか否かを計算し，余りが $0$ になる場合にカウント用の変数を $1$ 増やしていくと、 $100$ の正の約数の個数を求めることができます．

$JavaScript$ による解答例を以下に示します．
```js:count_divisors.js
let cnt = 0;

for (let i = 1; i <= 100; i++) {
  if (100%i == 0) cnt += 1;
}

document.write(cnt);
```