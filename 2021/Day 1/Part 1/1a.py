prev = int(input())
c = 0
while True:
    n = int(input())
    if prev < n:
        c += 1
    prev = n
    print(c)
