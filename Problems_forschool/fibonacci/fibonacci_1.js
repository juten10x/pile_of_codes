let x = 1, y = 1;

for (let i = 3; i <= 30; i++) {
  if (i%2 == 0) x = x + y;
  else if (i%2 == 1) y = x + y;
}

document.write(x);
