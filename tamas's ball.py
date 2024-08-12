from itertools import permutations

#input
n = int(input())
bola = list(map(int, input().split()))

kemungkinan_urutan = list(permutations(bola, n))

for urutan in kemungkinan_urutan:
    print(*urutan)
