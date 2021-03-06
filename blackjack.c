/*=========================================
*
* oO  Fichier Main du TP   Oo
*
*==========================================
*
* TP6
* Date : 05.11.2020
* Author : Douzet Camille
*
* Contient les différents appels aux fonctions
* et déclarations de variables
* 
*===========================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "carte.h"
#include "partie.h"


int main(){
    //--- Q1 Q2 : On affiche une carte
    /*t_carte carte;
    carte.carte =2;
    carte.figure =0;
    afficheCarte(carte);
    */

    //--- Q4 Q5 : On remplit et affiche le jeu dans l'ordre
    /*t_jeu jeu;
    remplirJeu(jeu);
    afficheJeu(jeu);
    */

    //--- Q6 : On mélange le jeu et on l'affiche
    /*t_jeu jeu;
    srand(time(NULL));
    int permu = 1000;
    remplirJeu(jeu);
    permutationCarte(jeu,permu);
    afficheJeu(jeu);*/

    //---Q8 Q9 : On initialise une partie et on distribue les cartes aux joueurs
    /*t_partie *partie;
    char joueur1[20]="Prenom1";
    char joueur2[20]="Prenom2"; 
    initPartie(partie,joueur1,joueur2);
    distribCarte(partie,1);*/

    //--- Q10 Q11 Q12: Creation d'une partie + pioche etc
    //malloc pour enlever un warning
    t_partie *partie = malloc(sizeof(*partie));
    char joueur1[20]="Camille";
    char joueur2[20]="Ordi";

    //initialisation partie
    initPartie(partie,joueur1,joueur2);

    //pour changer la pioche initiale pour tester diff cas
    int permu = 1211;
    permutationCarte(partie->pioche,permu);

    //affichage pioche
    printf("-------------------------\n");
    printf("Voici la pioche :\n");
    afficheJeu(partie->pioche);

    //distribution des cartes de départ
    distribCarte(partie,1); //carte 1 à l'humain
    distribCarte(partie,0); //carte 2 à l'ordi
    distribCarte(partie,1); //carte 3 à l'humain
    distribCarte(partie,0); //carte 4 à l'ordi

    //affichage des mains
    printf("\n-------------------------\n");
    printf("Main de %s :",joueur1);
    afficheMain(partie->mainH);
    printf("\n-------------------------\n");
    printf("Main de %s :",joueur2);
    afficheMain(partie->mainO);
    printf("\n-------------------------\n");
    
    //Algorithme Question 12
    char reponse;
    printf("Nouvelle carte ? (o/n)");
    scanf("%s",&reponse);
    while(reponse=='o' && calculMain(partie->mainH)<=21){
        distribCarte(partie,1);
        printf("\nMain de %s :",joueur1);
        afficheMain(partie->mainH);
        printf("\n-------------------------\n");
        if (calculMain(partie->mainH)<=21){
            printf("\nNouvelle carte ? (o/n)");
            scanf("%s",&reponse);
        }
    }

    free(partie);
    return 0;
}