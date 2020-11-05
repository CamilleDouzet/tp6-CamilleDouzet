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
* Contient les fonctions utiles à la gestion
* d'un jeu de cartes
* 
*===========================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "carte.h"

/*Question 2 Fontion afficheCarte
BUT : Afficher la valeur d'une carte de manière graphique
Paramètre : 
- c : une carte de type t_carte définie par :
    c.carte : sa veleur
    c.figure : sa couleur
*/
void afficheCarte(t_carte c){
        // Cas où la carte est un coeur
        if(c.figure == 0){
            //Cas carte avec un nombre
            if(c.carte>1 && c.carte <=10){
                printf(" %d\xE2\x99\xA1 ", c.carte);
            }
            //Cas où la carte est l'as
            else if(c.carte == 1){
                printf(" %c\xE2\x99\xA1 ", 'A');
            }
            //Cas où la carte est le valet
            else if(c.carte == 11){
                printf(" %c\xE2\x99\xA1 ", 'V');
            }
            //Cas où la carte est la dame
            else if(c.carte == 12){
                printf(" %c\xE2\x99\xA1 ", 'D');
            }
            //Cas où la carte est le roi
            else if(c.carte == 13){
                printf(" %c\xE2\x99\xA1 ", 'R');
            }
        }
        // Cas où la carte est un pique
        else if(c.figure == 1){
            if(c.carte>1 && c.carte <=10){
                printf(" %d\xE2\x99\xA0 ", c.carte);
            }
            else if(c.carte == 1){
                printf(" %c\xE2\x99\xA0 ", 'A');
            }
            else if(c.carte == 11){
                printf(" %c\xE2\x99\xA0 ", 'V');
            }
            else if(c.carte == 12){
                printf(" %c\xE2\x99\xA0 ", 'D');
            }
            else if(c.carte == 13){
                printf(" %c\xE2\x99\xA0 ", 'R');
            }
        }
        // Cas où la carte est un carreau
        else if(c.figure == 2){
            if(c.carte>1 && c.carte <=10){
                printf(" %d\xE2\x99\xA3 ", c.carte);
            }
            else if(c.carte == 1){
                printf(" %c\xE2\x99\xA3 ", 'A');
            }
            else if(c.carte == 11){
                printf(" %c\xE2\x99\xA3 ", 'V');
            }
            else if(c.carte == 12){
                printf(" %c\xE2\x99\xA3 ", 'D');
            }
            else if(c.carte == 13){
                printf(" %c\xE2\x99\xA3 ", 'R');
            }
        }
        // Cas où la carte est un trefle
        else if(c.figure == 3){
            if(c.carte>1 && c.carte <=10){
                printf(" %d\xE2\x99\xA4 ", c.carte);
            }
            else if(c.carte == 1){
                printf(" %c\xE2\x99\xA4 ", 'A');
            }
            else if(c.carte == 11){
                printf(" %c\xE2\x99\xA4 ", 'V');
            }
            else if(c.carte == 12){
                printf(" %c\xE2\x99\xA4 ", 'D');
            }
            else if(c.carte == 13){
                printf(" %c\xE2\x99\xA4 ", 'R');
            }

        }
}


/*Question 4 Fonction remplirJeu
BUT : Remplir un jeu avec les 52 cartes
Chaque carte doit être unique.
On va de l'as au roi pour chaque couleur
Parametre : 
- jeu : de type t_jeu, c'est un tableau de 52 cartes
*/
void remplirJeu(t_jeu jeu){
    int valeur = 1;
    int figure = 0;
    //On remplit notre jeu de 52 cartes
    for(int i =0; i<52; i++){
        jeu[i].carte = valeur;
        jeu[i].figure = figure;
        valeur++;
        /*Lorsque l'on a finit une couleur, 
        on recommence à partir de l'as et on change de couleur*/
        if(valeur == 14){
            valeur = 1;
            figure++;
        }
    }
}

/*Question 5 Fonction afficheJeu
BUT : afficher toutes les cartes d'un jeu
Parametre : 
- jeu : de type t_jeu, c'est un tableau de 52 cartes
*/
void afficheJeu(t_jeu jeu){
    // On parcourt tout le jeu et on affiche chacune de ses cartes avec afficheCarte
    for(int i =0; i<52; i++){
        afficheCarte(jeu[i]);
    }
}

/*Question 6 Fontion permutationCarte
BUT : Permuter deux cartes au hasard dans le jeu autant de fois que l'on veut
Parametre :
- jeu : de type t_jeu, c'est un tableau de 52 cartes
- permu : nombre de permutation que l'on souhaite
*/
void permutationCarte(t_jeu jeu, int permu){
    //On fait autant que permutations que demander
    for(int i=0;i<=permu;i++){
        //index des cartes qui vont etre echanger au hasard
        int index_c1;
        int index_c2;
        t_carte temp;
        index_c1=rand()%52;
        index_c2=rand()%52;
        //On permute grace à une carte temporaire
        temp = jeu[index_c1];
        jeu[index_c1] = jeu[index_c2];
        jeu[index_c2] = temp;
    }
}