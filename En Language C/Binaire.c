#include <stdio.h>

// Fonction pour effectuer une recherche binaire
int rechercheBinaire(int tableau[], int taille, int element) {
    int bas = 0;
    int haut = taille - 1;

    while (bas <= haut) {
        int milieu = bas + (haut - bas) / 2;

        
        if (tableau[milieu] == element) {
            return milieu; 
        }

        if (tableau[milieu] < element) {
            bas = milieu + 1;
        }
        
        else {
            haut = milieu - 1;
        }
    }

    return -1;
}

int main() {
    int tableau[] = {2, 3, 4, 10, 40};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    int element = 10;
    int resultat = rechercheBinaire(tableau, taille, element);

    if (resultat != -1) {
        printf("Élément trouvé à l'index %d\n", resultat);
    } else {
        printf("Élément non trouvé dans le tableau\n");
    }

    return 0;
}
