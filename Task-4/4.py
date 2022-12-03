n = int(input())
digits = [int(x) for x in input().split()]
digits = [0] + digits

digits[n] += 1
for i in range(n, 0, -1):
    digits[i - 1] += digits[i] // 10
    digits[i] %= 10

if digits[0] == 0:
    digits = digits[1:]

print(" ".join([str(x) for x in digits]))

