import math


def prime_factors(n: int):
    if n < 2:
        return []

    primes = []

    while n % 2 == 0:
        primes.append(2)
        n //= 2

    # + 2 to fix any precision errors
    for i in range(3, int(math.sqrt(n)) + 2, 2):
        if i > n:
            break
        while n % i == 0:
            primes.append(i)
            n //= i

    if n ^ 1:  # just fazlaka (same as --> n != 1)
        primes.append(n)

    return primes


print(" ".join([str(x) for x in prime_factors(int(input()))]))
