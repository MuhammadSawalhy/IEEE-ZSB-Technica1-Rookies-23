def run():
    a = input().strip().split()
    filtered = [a[0]]

    for i in range(1, len(a)):
        if a[i] != a[i - 1]:
            filtered.append(a[i])

    print(" ".join(filtered))


if __name__ == "__main__":
    run()
