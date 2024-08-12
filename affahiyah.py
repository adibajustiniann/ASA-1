#input
himpunan = set(map(int, input().split()))
target = int(input())

#subset
def isSubset(himpunan, target):
    if target == 0:
        return True
    if not himpunan:
        return False
    elemen = next(iter(himpunan))
    himpunan.remove(elemen)
    if isSubset(himpunan, target - elemen):
        return True
    if isSubset(himpunan, target):
        return True
    himpunan.add(elemen)
    return False

if isSubset(himpunan, target):
    print("iyah")
else:
    print("tidak")