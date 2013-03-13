// Greates common divisor (GCD)
int gcd(int a, int b){
  while (b != 0) {
    int c = b;
    b = a % b;
    a = c;
  }
  return a;
}

// Combinations. Pascal triangle.
long long C[201][201];
memset(C, 0L, sizeof(C));
for (int i = 0; i <= 200; ++i) {
  for (int j = 0; j <= i; ++j) {
    if (i == 0 || j == 0 || j == i)
      C[i][j] = 1;
    else
      C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
  }
}
