def run():
    s = input()
    hello = "hello"
    j = 0

    for c in s:
        if c == hello[j]:
            j += 1
        if j == len(hello):
            break
    if j == len(hello):
        print("YES")
    else:
        print("NO")


if __name__ == "__main__":
    run()
