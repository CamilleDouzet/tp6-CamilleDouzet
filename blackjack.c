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
    return 0;
}