items = [int(x) for x in input().split()]
index = dict()

inf = float("inf")
ans = inf

for i in range(len(items)):
    if items[i] in index:
        ans = min(ans, i - index[items[i]])
    index[items[i]] = i

print(ans)
