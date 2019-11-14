#include <stdio.h>
#include "MesFonction.h"

int main()
{

    float notes[15];
    int nomber;
    char inp;

    printf("entree les notes ici : \n");
    saisirTab(notes);

    printf(
    "\npour afficher les nombres des notes superieur a 10 taper <1>"
    "\npour afficher la note le plus grande taper               <2>"
    "\npour afficher le moyenne des notes taper                 <3>"
    "\npour afficher le moyenne des notes taper                 <4>"
    "\npour afficher le indice d'un note taper                  <5>\n");


   choix:
    scanf("%c",&inp);
    switch(inp)
    {
    case '1': //affichage de sup
        printf("\nles nombres des notes superieur a 10 est : %d ",getSup10(notes));
        break;

    case '2'://affichage de max
        printf("\nla note plus grande est : %2.2f ",getMax(notes));
        break;

    case '3'://affichage de somme
        printf("\nle somme des notes est : %2.2f ",getSomme(notes));
        break;

    case '4'://affichage de moyenne
        printf("\nle moyenne des notes est : %4.2f",getMoy(notes));
        break;
    case '5'://affichage de moyenne
        printf("choisir un nombre :  ");
        scanf("%d",&nomber);
        printf("\nle indice de %d est : %d",nomber,recherche(notes,nomber));
        break;
    default:
        goto choix;
        break;

    }

}
