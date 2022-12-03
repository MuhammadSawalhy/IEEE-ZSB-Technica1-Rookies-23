n = int(input())
anagrams: dict[str, list[str]] = dict()

for i in range(n):
    w = input()
    s = "".join(sorted(w))
    if s not in anagrams:
        anagrams[s] = []
    anagrams[s].append(w)

for i in anagrams.values():
    print(" ".join(i))
