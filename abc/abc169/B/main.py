import sys
def input():
  return sys.stdin.readline()[:-1]


n = input()
a = input().split()
r = 1

if '0' in a:
  print(0)
  exit()

for i in range(len(a)):
  aa = int(a[i])
  r *= aa
  if r > pow(10, 18):
    print(-1)
    exit()

print(r)