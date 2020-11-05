/*
TP6
Auteur : Camille Douzet
Date : 05/11
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "carte.h"
#include "partie.h"


int main(){
    //---On affiche une carte (exemple Q2)
    //t_carte carte;
    //carte.carte =2;
    //carte.figure =0;
    //afficheCarte(carte);
    //--- On affiche le jeu
    //t_jeu jeu;
    //remplirJeu(jeu);
    //afficheJeu(jeu);
    srand(time(NULL));
    //int permu = 1000;
    //permutationCarte(jeu,permu);
    //afficheJeu(jeu);
    //---MAin question 9
    t_partie *partie;
    char joueur1[20]="shclqskjc";
    char joueur2[20]="jqgvjqsvcj"; 
    initPartie(partie,joueur1,joueur2);
    return 0;
}