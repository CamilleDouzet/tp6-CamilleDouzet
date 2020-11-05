/*

TP6
Auteur : Camille Douzet
Date : 05/11
*/

//Fichier qui contient toutes les fonctions

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "carte.h"

//Question 2
void afficheCarte(t_carte c){
        if(c.figure == 0){
            if(c.carte>1 && c.carte <=10){
                printf(" %d\xE2\x99\xA1 ", c.carte);
            }
            else if(c.carte == 1){
                printf(" %c\xE2\x99\xA1 ", 'A');
            }
            else if(c.carte == 11){
                printf(" %c\xE2\x99\xA1 ", 'V');
            }
            else if(c.carte == 12){
                printf(" %c\xE2\x99\xA1 ", 'D');
            }
            else if(c.carte == 13){
                printf(" %c\xE2\x99\xA1 ", 'R');
            }
        }
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


//Question 4
void remplirJeu(t_jeu jeu){
    int valeur = 1;
    int figure = 0;
    for(int i =0; i<52; i++){
        jeu[i].carte = valeur;
        jeu[i].figure = figure;
        valeur++;
        if(valeur == 14){
            valeur = 1;
            figure++;
        }
    }
}

//Question 5
void afficheJeu(t_jeu jeu){
    for(int i =0; i<52; i++){
        afficheCarte(jeu[i]);
    }
}

//Question 6
void permutationCarte(t_jeu jeu, int permu){
    for(int i=0;i<=permu;i++){
        int index_c1;
        int index_c2;
        t_carte temp;
        for(int i=0;i<=permu;i++){
            index_c1=rand()%52;
            index_c2=rand()%52;
            //On permute
            temp = jeu[index_c1];
            jeu[index_c1] = jeu[index_c2];
            jeu[index_c2] = temp;
        }

    }
}