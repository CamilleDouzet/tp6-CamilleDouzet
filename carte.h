/*=========================================
*
* oO  Gestion des Cartes et d'un Jeu  Oo
*
*==========================================
*
* TP6
* Date : 05.11.2020
* Author : Douzet Camille
*
* Contient les structures  et les prototypes 
* necessaires à la gestion d'un jeu de cartes
* 
*===========================================
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