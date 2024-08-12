#input
n = int (input())
barang = list(map(int, input().split()[:n]))

#total berat barang
def beratbarang(n, barang):
    total = 0
    for barang1 in barang:
        total = total + barang1
    print(total)

beratbarang(n, barang)
