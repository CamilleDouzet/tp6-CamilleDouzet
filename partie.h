/*=========================================
*
* oO  Gestion des Parties de Blackjack  Oo
*
*==========================================
*
* TP6
* Date : 05.11.2020
* Author : Douzet Camille
*
* Contient les structures  et les prototypes 
* necessaires à la création d'une partie
* 
*===========================================
*/

#ifndef __PARTIE_H__
#define __PARTIE_H__
#include "carte.h"

//Question 7
typedef struct {
    t_jeu jeu;
    int n_carte;
    char nom[20];
} t_main;

typedef struct {
    t_main mainH;
    t_main mainO;
    t_jeu pioche;
    int posPioche;
} t_partie;

//Liste des prototypes :
void initPartie(t_partie *partie, char joueur1[20], char joueur2[20]);
void distribCarte(t_partie *partie, int quelJoueur);
void afficheMain(t_main main);
int calculMain(t_main main);

#endif