def insertion(liste):
    for i in range(1, len(liste)):
        j = i
        while j > 0 and liste[j] < liste[j - 1]:
            liste[j], liste[j - 1] = liste[j - 1], liste[j]
            j -= 1
    return liste

liste = [7, 2, 4, 1, 3, 5, 6]

liste = insertion(liste)

print(liste)