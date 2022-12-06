map = {
    '[': ']',
    '(': ')',
    '{': '}',
}


def is_opening(b):
    return b in map


def valid_closing(b, stack):
    return len(stack) > 0 and is_opening(stack[-1]) and map[stack[-1]] == b


def valid(brackets):
    stack = []
    for b in brackets:
        if is_opening(b):
            stack.append(b)
        elif valid_closing(b, stack):
            stack.pop()
        else:
            return False
    return len(stack) == 0


if valid(input()):
    print("true")
else:
    print("false")
