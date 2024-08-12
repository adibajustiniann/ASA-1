#input
x = int(input()) #sapi betina awal
n = int(input()) #tahun

#total sapi betina pada y tahun berikutnya
total1 = 2*x
total2 = x

for i in range(n):
    total1 = total1 + total2
    total2 = total1 - total2

print(total2)
