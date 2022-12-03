import sys


def ask():
    print("enter s1 >>> ", end="", file=sys.stderr)
    s1 = input()
    print("enter s2 >>> ", end="", file=sys.stderr)
    s2 = input()
    return (s1, s2)


def run():
    # brute force all permutaions??? -> yes but not effecient
    # O(n**2)??? -> yes
    # O(n)??? -> I can't get it

    s1, s2 = ask()

    freq = dict()
    for l in s1:
        if l not in freq:
            freq[l] = 0
        freq[l] += 1

    for i in range(len(s2)):
        partition_freq = dict()
        for j in range(i, len(s2)):
            l = s2[j]
            if l not in partition_freq:
                partition_freq[l] = 0
            partition_freq[l] += 1
            if partition_freq == freq:
                return True

    return False


if __name__ == "__main__":
    print(str(run()).lower())
