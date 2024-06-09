let cnt = 0, ans = 1, N = 100;

for (let i = 2; N != 1; i++) {
  cnt = 0;
  while (N%i == 0) {
    N /= i;
    cnt += 1;
  }
  ans *= (cnt + 1);
}

document.write(ans);
