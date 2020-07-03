n = int(input())

counter = 0
for _ in range(n):
    a, b, c = input().split()
    if (int(a) + int(b) + int(c) >= 2):
        counter += 1
print(counter)
