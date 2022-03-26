def selection(liste):
    for i in range(len(liste)):
        min = i
        for j in range(i+1, len(liste)):
            if liste[j] < liste[min]:
                min = j
        liste[i], liste[min] = liste[min], liste[i]
    return liste

liste = [1, 5, 3, 2, 4]
liste = selection(liste)
print(liste)