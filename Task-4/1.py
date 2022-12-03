n, k = [int(x) for x in input().split()]
items: list[int] = [int(x) for x in input().split()]
frequency: dict[int, int] = dict()
freq: list[tuple[int, int]] = []

for i in items:
    if i not in frequency:
        frequency[i] = 0
    frequency[i] += 1

for i in frequency:
    freq.append((frequency[i], i))

freq.sort(reverse=True)

for i in range(k):
    print(freq[i][1], end=[' ', '\n'][i == k - 1])
