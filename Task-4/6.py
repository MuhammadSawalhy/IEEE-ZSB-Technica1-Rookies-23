def sort(n: int, reverse: bool = False) -> int:
    s = str(n)
    while len(s) < 4:
        s += '0'
    s = sorted(s, reverse=reverse)
    m = 0
    y = 1
    for i in range(3, -1, -1):
        m += (ord(s[i]) - ord('0')) * y
        y *= 10
    return m


n = int(input())
counter = 0
while n != 6174:
    counter += 1
    s = sort(n, True)
    r = sort(n, False)
    n = s - r


print(counter)
