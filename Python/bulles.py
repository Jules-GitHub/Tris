def tri_bulles(liste):
    for i in range(len(liste)):
        for j in range(len(liste)-1):
            if liste[j] > liste[j+1]:
                liste[j], liste[j+1] = liste[j+1], liste[j]
    return liste

liste = [1, 5, 3, 2, 4]

liste = tri_bulles(liste)

print(liste)