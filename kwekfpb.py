#input
a, b = map(int, input().strip().split())

#banyak fpb
count = 0
for i in range (1, min(a,b)+1):
    if ((a % i == 0) and (b % i == 0)):
        count += 1
print(count)
