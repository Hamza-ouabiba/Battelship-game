#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<mmsystem.h>
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
do
{
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
        puts("Voulez-vous vraiment quitter le jeu O/N?");
        fflush(stdin);
        scanf("%c",&quitter);
        if(quitter=='o' || quitter=='O')
        {
            exit(0);
        } else if(quitter=='N' || quitter=='n')
        {
            system("cls");
            goto Debut;
        } else
        {
            do
            {
                printf("Veuillez resaisir  ------>");
                fflush(stdin);
                scanf("%c",&quitter);
            } while(quitter!='o' && quitter!='O' && quitter!='N' && quitter!='n');
            if(quitter=='o' || quitter=='O')
            {
                exit(0);
            } else
            {
                system("cls");
                goto Debut;
            }
        }
    } break;
    default:
        {
            do
            {
              printf("     ");
              printf("choix erronee veuillez resaisir ");
              scanf("%d",&choix);
            } while(choix>4);
            system("cls");
            goto Debut;

        }
   }

         gotoxy(5,50);printf("rejouer Repondez par oui ou non  !!");
         fflush(stdin);
         scanf("%c",&rejouer);

 } while(rejouer=='o' || rejouer=='O');
 getch();
 return 0;
}

