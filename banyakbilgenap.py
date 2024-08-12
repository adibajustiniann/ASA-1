#input
N = int (input())
array = [(int, input().split())]

#banyak bilangan genap
def banyakbilgenap(N, array):   
    count = 0 
    for i in range(N):     
        if (i % 2) == 0:
            count = count + 1
            i = i + 1
    print(count)

banyakbilgenap(N, array)