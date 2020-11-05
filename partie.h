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
} t_main;

typedef struct {
    t_jeu jeu_p;
    int posPioche;
} t_pioche;

typedef struct {
    t_main mainH;
    t_main mainO;
    t_pioche pioche;
} t_partie;


#endif