#Fonction pour effectuer une recherche linéaire

def recherche_lineaire(tableau, element):
    for i in range(len(tableau)):
        if tableau[i] == element:
            return i  # Élément trouvé, retourner l'indice
    return -1  # Élément non trouvé


# Exemple d'utilisation
tableau = [2, 3, 4, 10, 40]
element = int(input("Entrez l'élément à rechercher : "))
resultat = recherche_lineaire(tableau, element)

if resultat != -1:
    print(f"Élément trouvé à l'index {resultat}")
else:
    print("Élément non trouvé dans le tableau")
