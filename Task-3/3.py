n = int(input())

if n == 2:
    print("Yes")
    exit()

caps = []
all = 0

for _ in range(n):
    rem, cap = [int(x) for x in input().split()]
    caps.append(cap)
    all += rem

if all <= sum(sorted(caps)[-2:]):
    print("Yes")
else:
    print("No")

