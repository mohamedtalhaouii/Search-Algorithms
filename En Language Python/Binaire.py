#Fonction pour effectuer une recherche binaire

def recherche_binaire(tableau, element):
    bas = 0
    haut = len(tableau) - 1

    while bas <= haut:
        milieu = bas + (haut - bas) // 2
        
        # Vérifie si l'élément est présent au milieu
        if tableau[milieu] == element:
            return milieu  # Élément trouvé, retourner l'indice

        # Si l'élément est plus grand, ignorer la moitié gauche
        if tableau[milieu] < element:
            bas = milieu + 1
        # Si l'élément est plus petit, ignorer la moitié droite
        else:
            haut = milieu - 1

    return -1  # Élément non trouvé

# Exemple d'utilisation
tableau = [2, 3, 4, 10, 40]
element = int(input("Entrez l'élément à rechercher : "))
resultat = recherche_binaire(tableau, element)

if resultat != -1:
    print(f"Élément trouvé à l'index {resultat}")
else:
    print("Élément non trouvé dans le tableau")
