a, b, c = map(int,input().split())

if (a + b - c) * (a + b - c) > 4 * a * b:
  print("Yes")
else:
  print("No")