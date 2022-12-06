import math


def prime_factors(n):
    primes = []

    while n % 2 == 0:
        primes.append(2)
        n //= 2

    for i in range(3, int(math.sqrt(n)) + 2):
        while n % i == 0:
            primes.append(i)
            n //= i

    if n != 1:
        primes.append(n)

    return primes


print(" ".join([str(x) for x in prime_factors(int(input()))]))
