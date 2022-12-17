# Submission: https://www.hackerrank.com/challenges/nested-list/submissions/code/305709217

n = int(input())  # must be >= 2
students = []  # must contain at least two different grades
inf = 100000
min = inf
min2 = inf + 1

for i in range(n):
    name = input()
    grade = float(input())
    students.append({'name': name, 'grade': grade})
    if grade == min or grade == min2: continue
    grades = sorted([grade, min, min2])
    min, min2, _ = grades

second_worst = filter(lambda s: s['grade'] == min2, students)
print("\n".join(sorted([s['name'] for s in second_worst])))

