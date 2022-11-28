import random


def gen_random():
    return random.randint(100, 999)


def get_guess():
    guess = -1
    while guess == -1:
        print(">>> ", end="")
        try:
            guess = int(input())
            if guess < 100 or guess > 999:
                print("you should enter a 3-digit number")
                guess = -1
        except Exception:
            pass
    return guess


def get_hits(num, guess):
    hits = 0
    num = str(num)
    guess = str(guess)
    for i in range(3):
        hits += num[i] == guess[i]
    return hits


def get_misses(num, guess):
    misses = 0
    num = str(num)
    guess = str(guess)
    for i in range(3):
        misses += num[i] != guess[i] and (num[i] == guess[(i+1)%3] or num[i] == guess[(i+2)%3])
    return misses


def run():
    print("Enter a 3-digit number:",)
    num = gen_random()
    attempts = 1
    guess = get_guess()
    while guess != num:
        hits = get_hits(num, guess)
        misses = get_misses(num, guess)
        print(f"{hits} hit{['s', ''][misses == 1]}", end=" ")
        print(f"{misses} miss{['es', ''][misses == 1]}")
        attempts += 1
        guess = get_guess()

    print(
        f"congratulations! you got it right after {attempts} attempt{['s', ''][attempts == 1]}")


if __name__ == "__main__":
    run()
