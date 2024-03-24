a = list(map(int, input().split()))
s = input()

calories = 0
for i in s:
    calories += a[int(i)-1]

print(calories)