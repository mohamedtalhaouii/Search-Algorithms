#include <stdio.h>

// Fonction pour effectuer une recherche linéaire
int rechercheLineaire(int tableau[], int taille, int element) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == element) {
            return i; 
        }
    }
    return -1;
}

int main() {
    int tableau[] = {2, 3, 4, 10, 40};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    int element = 10;
    int resultat = rechercheLineaire(tableau, taille, element);

    if (resultat != -1) {
        printf("Élément trouvé à l'index %d\n", resultat);
    } else {
        printf("Élément non trouvé dans le tableau\n");
    }

    return 0;
}
