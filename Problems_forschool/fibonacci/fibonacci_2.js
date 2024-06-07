let s = [1, 1];

for (let i = 3; i <= 30; i++) {
  s[i%2] = s[0] + s[1];
}

document.write(s[0]);
