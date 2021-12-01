arr = [int(input()), int(input()), int(input())]
c = 0
prev = sum(arr)
while True:
    n = int(input())
    arr.pop(0)
    arr.append(n)
    if prev < sum(arr):
        c += 1
    prev = sum(arr)
    print(c)
