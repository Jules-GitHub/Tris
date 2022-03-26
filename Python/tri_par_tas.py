def downheap(liste, k, n):
    while 2 * k + 1 < n:
        j = 2 * k + 1
        if j < n - 1 and liste[j] < liste[j + 1]:
            j += 1
        if liste[k] < liste[j]:
            liste[k], liste[j] = liste[j], liste[k]
            k = j
        else:
            break

def heap_sort(liste):
    n = len(liste)
    for k in range(n // 2, -1, -1):
        downheap(liste, k, n)
    for k in range(n - 1, 0, -1):
        liste[0], liste[k] = liste[k], liste[0]
        downheap(liste, 0, k)
    return liste

liste = [1, 5, 3, 2, 4]

liste = heap_sort(liste)

print(liste)