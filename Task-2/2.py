def is_palindrome(text):
    for i in range(len(text) // 2):
        if text[i] != text[-i-1]:
            return False
    return True


def run():
    text = input()
    if is_palindrome(text):
        print("yes")
    else:
        print("no")


if __name__ == "__main__":
    run()
