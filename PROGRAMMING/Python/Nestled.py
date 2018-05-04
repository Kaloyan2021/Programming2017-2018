students = []
n=int(input())
for i in range(n):
    name = input()
    grade = input()
    students.append((grade,name))
students= sorted(students)
min_grade, _=students[0]
for c,(g,n) in enumerate(students):
    if g > min_grade:
        res_grade = g
        res_name = n
        res_index = c
        break
result = [res_name]
for g,s in students[res_index+1:]:
    if g == res_grade:
        result.append(s)
    else:
        break   
print("\n".join(sorted (result)))

input()