/*
TP6
Auteur : Camille Douzet
Date : 05/11
*/


// Ce fichier contient les structures et les prototypes
/* POUR COMPILER :
make 
OU
gcc -c complex.c exo1.c
gcc  exo1.o -o ex -lm 
*/

#ifndef __CARTE_H__
#define __CARTE_H__

//Question 1
typedef enum {coeur =0,pique,carreaux,trefle}t_figure;

typedef struct{ 
    int carte;
    t_figure figure;
}t_carte;

//Question 4
typedef t_carte t_jeu[52];

//Liste des prototypes :
void afficheCarte(t_carte carte);

void remplirJeu(t_jeu jeu);

void afficheJeu(t_jeu jeu);

void permutationCarte(t_jeu jeu, int permu);
#endif