#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include "JEU.h"
int main()
 {
   //une fois le joueur 2 rate un navire -> diminution du score par exemple ce cas le score sur 40 /
   //traiter les ca_  s des characteres  de navires :
        char rejouer,quitter;
        int i,j;
        int re;
        int choix;
        system("COLOR 2");
        intro();
         Debut:
do{
     for(i=0;i<6;i++)
                     {
                         for(j=0;j<6;j++)
                         {
                             a[i][j]='-';
                         }
                     }
    system("cls");
    Menu();
    do{
    gotoxy(28,18);printf("  ");scanf("%d",&choix);
   }while(choix<1 || choix>4);
 switch(choix)
    {
            case 1:
                {
                     Pseudo();
                     j1();
                     j2();
                     sleep(1);
                     break;
             } break;
   case 2:
       {
           system("cls");
           regleGeneral();
           do
           {
               printf("Pour revenir Au menu Principal Appuyer sur 1 : ");
               scanf("%d",&re);
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

   case 3:{system("cls");choix_ordi_vs_joueur();j2();getch();break;}break;
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
 printf("Pour rejouer taper o : ");
 fflush(stdin);
 scanf("%c",&rejouer);
 }while(rejouer=='O' || rejouer=='_o');
 return 0;
}

