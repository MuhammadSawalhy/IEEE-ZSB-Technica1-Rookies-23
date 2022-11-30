n = int(input())
p = int(input())

print(min(p // 2, (n + (n & 1) - p + 1) // 2))
