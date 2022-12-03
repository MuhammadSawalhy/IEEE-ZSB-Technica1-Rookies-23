n = int(input())

matrix = []
rotated90 = []

for i in range(n):
    matrix.append(input().split())
    rotated90.append([0] * n)

for i in range(n):
    for j in range(n):
        # matrix (i == 0)  --> rotated90 (j == n-1)
        # matrix (i == n-1)  --> rotated90 (j == 0)
        rj = n - 1 - i # reversed

        # matrix (j == 0)  --> rotated90 (i == 0)
        # matrix (j == n-1)  --> rotated90 (i == n-1)
        ri = j # same

        rotated90[ri][rj] = matrix[i][j]

for r in rotated90:
    print(" ".join(r))
