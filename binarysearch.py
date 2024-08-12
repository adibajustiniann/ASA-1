#input
n, x = map(int, input().split())
arr = list(map(int, input().split()))

#binary search
operasi = 0
left = 0
right = n-1

while left <= right:
    midIdx = (left + right) // 2
    operasi += 1
    
    if arr[midIdx] == x:
        print(midIdx, operasi)
        break
    elif arr[midIdx] < x:
        left = midIdx + 1
    else:
        right = midIdx - 1
else:
    operasi += 1
    print(-1, operasi)