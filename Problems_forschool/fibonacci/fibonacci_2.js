let m = 1, n = 1;

for (let i = 3; i <= 30; i++) {
  if (i%2 == 0) m = m + n;
  else if (i%2 == 1) n = m + n;
}

document.write(m);
