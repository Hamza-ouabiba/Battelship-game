#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include "JEU.h"
int main()
 {
   //mettre un score :
    //une fois le joueur 2 rate un navire -> diminution du score par exemple ce cas le score sur 40 /
        //traiter les ca_  s des characteres  de navires :
        char rejouer,quitter;
        int i,j;
        int re;
        int choix;
        system("COLOR 4");
        intro();

do{
    Debut:

    system("cls");
    Menu();
    gotoxy(28,18);printf("  ");
    gotoxy(28,18);scanf("%d",&choix);
 switch(choix)
    {
            case 1:
                {
                     Pseudo();
                      for(i=0;i<6;i++)
                     {
                         for(j=0;j<6;j++)
                         {
                             a[i][j]='-';
                         }
                     }
                     j1();
                         //le role de la fonction munu _positionnement
                     j2();
        } break;
   case 2:
       {
           system("cls");
           regleGeneral();
           do
           {
               printf("Pour revenir Au menu Principal Appuyer sur 1 : ");scanf("%d",&re);
               if(re==1)
               {
                   system("cls");
                   goto Debut;
               } else
               {
                   puts("Veuillez resaisir ");
               }
           } while(choix!=1);
       } break;

   case 3:{choix_ordi_vs_joueur(a);choix_utilisateur(score);}break;
    case 4:
    {
    do{
        puts("Voulez-vous vraiment quitter le jeu O/N?");
        fflush(stdin);
        scanf("%c",&quitter);
        if(quitter!='o' && quitter!='O' && quitter!='N' && quitter!='n')
        {
            printf("Choix erronee !! \n");
        }
    } while(quitter!='o' && quitter!='O' && quitter!='N' && quitter!='n');
            if(quitter=='O' || quitter=='o' && scanf("%c",&quitter)==1)
            {
                exit(0);
            } else
            {
                  goto Debut;
            }
    } break;
    default:
        {
           printf("choix erronee");
            getch();
        }
   }
 }while(choix<1 || choix>4);
 return 0;
}

