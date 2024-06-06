let a = [1, 1];

for (let i = 3; i <= 30; i++) {
  a[i%2] = a[0] + a[1];
}

document.write(a[0]);
