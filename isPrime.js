function isPrime(N) {
  if (N == 1) return false;
  
  for (let i = 2; i*i <= N; i++) {
    if (N%i == 0) return false;
  }
  
  return true;
}

let N = prompt("数字を入力してください");
let judge = isPrime(N);

if (judge) {
  document.write(N + "は素数です");
} else {
  document.write(N + "は素数ではありません");
}
