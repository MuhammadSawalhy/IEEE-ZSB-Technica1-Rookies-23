def digits(num):
    dig = []
    while num != 0:
        dig.append(num % 10)
        num = num // 10
    return dig


def check(num):
    """
    it can be proven that all numbers will:
    1. either reach 1 and continue 1 forever
    2. or be trapped in the 4 cycle forever 

    all numbers will reach 4 or 1 so quickly
    """
    while True:
        if num == 0 or num == 4:
            return False
        if num == 1:
            return True
        num = sum(d * d for d in digits(num))


print(str(check(int(input()))).lower())
