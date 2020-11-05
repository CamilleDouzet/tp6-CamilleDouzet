/*
TP6
Auteur : Camille Douzet
Date : 05/11
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

//Question 8
typedef char t_joueur[20];

//Liste des prototypes :
//question 8
void initPartie(t_partie partie, char joueur1[20], char joueur2[20]);
void distribCarte(t_partie partie, int quelJoueur);

#endif