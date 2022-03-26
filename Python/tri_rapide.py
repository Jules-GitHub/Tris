def tri_rapide(liste):
    if len(liste) > 1:
        pivot = liste[0]
        liste_petite = [x for x in liste if x < pivot]
        liste_grande = [x for x in liste if x > pivot]
        return tri_rapide(liste_petite) + [pivot] + tri_rapide(liste_grande)
    else:
        return liste

liste = [1, 5, 3, 2, 4]

liste = tri_rapide(liste)

print(liste)