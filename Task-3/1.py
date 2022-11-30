n = int(input())
d1 = 0
d2 = 0

for i in range(n):
    row = [int(x) for x in input().strip().split()]
    d1 += row[i]
    d2 += row[-i-1]

print(abs(d1 - d2))
