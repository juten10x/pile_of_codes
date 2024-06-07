let a = [0,0,0,0,0,0,0,0,0,0];

for (let i = 0; i < 10; i++) {
  a[i] = 1 + i*2
}

for (let i = 0; i < 10; i++) {
  document.write(a[i]);
  if (i < 9) document.write(" ");
}
