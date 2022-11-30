n = int(input())  # must be greater than 2
students = []  # must contain two different atleast grades
inf = 100000
min = inf
min2 = inf - 1

for i in range(n):
    name = input()
    grade = float(input())
    students.append({'name': name, 'grade': grade})
    grades = sorted([grade, min, min2])
    min, min2, _ = grades

second_worst = filter(lambda s: s['grade'] == min2, students)
print("\n".join(sorted([s['name'] for s in second_worst])))
