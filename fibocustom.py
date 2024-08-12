#input
n = int(input())
a, b = map(int, input().strip().split())

#membuat barisan fibonacci
total = a + b
i = 0
for i in range(n):
    print(a, end=" ")
    a = b
    b = total
    total = a + b


    