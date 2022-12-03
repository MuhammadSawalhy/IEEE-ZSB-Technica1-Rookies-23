
def sort(n: int) -> int:
    s = sorted(str(n), reverse=True)
    while len(s) < 4:
        s += '0'
    m = 0
    y = 1
    for i in range(3, -1, -1):
        m += (ord(s[i]) - ord('0')) * y
        y *= 10
    return m


def reverse(n: int) -> int:
    m = 0
    y = 1000
    for _ in range(4):
        m += n % 10 * y
        n //= 10
        y //= 10

    return m


n = int(input())
counter = 0
while n != 6174:
    counter += 1
    s = sort(n)
    r = reverse(s)
    n = s - r


print(counter)
