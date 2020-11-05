/*
TP6
Auteur : Camille Douzet
Date : 05/11
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "carte.h"
#include "partie.h"

void initPartie(t_partie partie, char joueur1[20], char joueur2[20]){
    int n = 1000;
    strcpy(partie.mainH.nom, joueur1);
    strcpy(partie.mainO.nom, joueur2);
    remplirJeu(partie.pioche.jeu_p);
    permutationCarte(partie.pioche.jeu_p, n);
    partie.mainH.n_carte = 0;
    partie.mainO.n_carte = 0;
    partie.pioche.posPioche=0;
}
//distribue la carte soit à ordi ou humain
void distribCarte(t_partie *partie, int quelJoueur){
    if(quelJoueur==1){
        partie -> mainH.jeu = partie -> pioche.posPioche;
        partie -> mainH.n_carte++;
    } else {
        partie -> mainO.jeu = partie -> pioche.posPioche;
        partie -> mainO.n_carte++;
    }
}