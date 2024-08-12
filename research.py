#input 
n = int(input())

#mengecek bilangan prima
def isPrime(n):
    if n <= 1:
        return False
    for i in range(2, int(n/2)+1):
        if n % i == 0:
            return False
    return True

#menghitung jumlah makhluk yang hidup di akhir
def count_final(n):
    count = 0
    for i in range(n+1):
        if isPrime(i):
            count += 1
    return count

print (count_final(n))