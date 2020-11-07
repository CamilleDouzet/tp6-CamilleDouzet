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
* Contient les fonctions pour gérer une partie
*
*===========================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "carte.h"
#include "partie.h"
/* Question 8 Fontion initPartie
BUT : Initialiser une partie avec :
        - 2 joueurs nommés avec une main avce 0 cartes
        - Un jeu complet mélangé dans la pioche qui commencent à 0
Parametre : 
- *partie : un pointeur sur une partie
- joueur1 et joueur2 : Les noms des deux joueurs
*/
void initPartie(t_partie *partie, char joueur1[20], char joueur2[20]){
    int permu = 1000; //pour melanger la pioche
    // On nomme les deux joueurs
    strcpy(partie->mainH.nom, joueur1);
    strcpy(partie->mainO.nom, joueur2);
    // On crée la pioche et on la melange
    remplirJeu(partie->pioche);
    permutationCarte(partie->pioche, permu);
    //On met à vide les mains des joueurs
    partie->mainH.n_carte = 0;
    partie->mainO.n_carte = 0;
    //On fait en sorte que la pioche commence à 0
    partie->posPioche =0;
}
/* Question 9 Fonction distribCarte
BUT : Distribuer une carte de la pioche à un joueur :
        - 1 pour distribuer à l'humain
        - O pour distribuer à l'ordinateur
Parametre :
- *partie : un pointeur sur une partie
- quelJoueur : un int pour savoir à qui distribuer
*/
void distribCarte(t_partie *partie, int quelJoueur){
    //Cas où on distribue à l'humain
    if(quelJoueur==1){
        partie->mainH.jeu[partie->mainH.n_carte] = partie->pioche[partie->posPioche]; // on attribue la carte de la pioche dans la main de joueur
        partie->mainH.n_carte++; //on augmente le nm de carte dans la main
    // Cas où on distribue à l'ordinateur
    } else {
        partie->mainO.jeu[partie->mainO.n_carte] = partie->pioche[partie->posPioche];
        partie->mainO.n_carte++;
    }
    partie->posPioche++; //on avance dans la pioche pour ne pas donner la meme carte
}
/* Question 10 Fonction afficheMain
BUT : afficher la mair d'un joueur
Parametre :
- main : de type t_main*/
void afficheMain(t_main main){
    //On affiche toutes les cartes d'une main 
    t_carte c;
    for(int i=0; i<main.n_carte; i++){
        c = main.jeu[i];
        afficheCarte(c);
    }
}
/* Question 11 Fonction calculMain 
BUT : Calculer la meilleure valeur d'une main :
        As vaut 1 sauf cas particulier :
        /!\ si la main vaut moins de 11 mais qu'il y a un as alors l'as vaut 11
Parametre :
- main : de type t_main
*/
int calculMain(t_main main){
    int valMain = 0;
    int nombre_as =0;
    //on parcourt toute les carte de la main
    for(int i=0;i<(main.n_carte);i++){
        valMain+=main.jeu[i].carte;
        if (main.jeu[i].carte==1){
            nombre_as=1;
        }
    }
    // Traitement du cas particulier
    if((valMain<11) && (nombre_as==1)){
        valMain+=10;
    }

    printf(" Valeur de la main :%d",valMain);
    return valMain;
}