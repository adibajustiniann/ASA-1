#input 
n = int(input())
himp = list(map(int, input().split()))

#subset himpunan
if n == 0:
    print("-999")
else:
    for i in range(1<<n):
        subset = []
        for j in range (n):
            if i & (1<<j):
                subset.append(himp[j])
        if not subset:
            print("-999")
        else:
            print(*subset)