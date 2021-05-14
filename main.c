#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include "bataille.h"
int main()
 {

   //mettre un score :
         int SCORE=0;
    //une fois le joueur 2 rate un navire -> diminution du score par exemple ce cas le score sur 40 /
        //traiter les cas des characteres  de navires :
        Navire a1,a2,a3;
        char a[6][6],rejouer,quitter;
        int i,j,position,rate=0,win=0,ho;
        int x,y,c=0,col=0,lig=0,re;
        int navirePrecedent,choix,navire;
        int success=1;
        int tentative=3;
        char p1[10];//r aire stocker le nom des deux joueurs:
        char p2[10];

    Debut:
    Menu();
    scanf("%d",&choix);
do
{
    switch(choix)
    {
            case 1:
                {
                     success=1;
                     for(i=0;i<6;i++)
                     {
                         for(j=0;j<6;j++)
                         {
                             a[i][j]='-';  //initialisation de la matrice par des caracteres  :
                         }
                     }
                     system("cls");
                     printf("donner le nom du joueur numero 1 : ");gets(p1);
                     printf("donner le nom du joueur numero 2 :");
                     gets(p2);
                     sleep(2);
                     system("cls");
                     joueur1();
                     do
                     {
                         printf("\n");
                         gotoxy(50,1);printf("Donner le Positionnement de votre navire numero %d  \n",success);
                         gotoxy(50,2);printf("1=HORIZONTAL\n");
                         gotoxy(50,3);printf("2=VERTICAL\n");
                         gotoxy(50,4);printf("3=DIAGONAL\n");
                         gotoxy(50,5);printf(" ");
                         gotoxy(50,5);scanf("%d",&navire);
                         switch(navire)
                         {
                                         case 1:
                                             {
                                                do
                                                {
                                                    navirePrecedent=1;
                                                 do
                                                 {
                                                     gotoxy(50,9);printf("donner les coordonne du navire horizontal Linge : ");
                                                     gotoxy(50,10);scanf("%d",&a1.x1);
                                                     gotoxy(50,11);printf("donner les coordonne du navire horizontal Colonne : ");
                                                     gotoxy(50,12);scanf("%d",&a1.y1);
                                                     gotoxy(50,10);printf(" ");
                                                     gotoxy(50,12);printf(" ");

                                                 } while(a1.y1>=4);
                                                 if(a[a1.x1][a1.y1]=='-' && a[a1.x1][a1.y1+1]=='-' && a[a1.x1][a1.y1+2]=='-'){
                                                    navirePrecedent=0;//la valeur va changer lors du deploiement d'un certain navire
                                                    a[a1.x1][a1.y1]='A';
                                                    a[a1.x1][a1.y1+1]='A';
                                                    a[a1.x1][a1.y1+2]='A';
                                                    success++;
                                                    gotoxy(4*(a1.y1+1)+5,2*a1.x1+7);printf("%c",a[a1.x1][a1.y1]);
                                                    gotoxy(4*(a1.y1+2)+5,2*a1.x1+7);printf("%c",a[a1.x1][a1.y1+1]);
                                                    gotoxy(4*(a1.y1+3)+5,2*a1.x1+7);printf("%c",a[a1.x1][a1.y1+2]);
                                                         }
                                             } while(navirePrecedent==1);
                                           } break;
                                         case 2:
                                            {
                                                do
                                                {
                                                   navirePrecedent=1;
                                                  do
                                                   {
                                                   gotoxy(50,9);printf("donner les coordonne du navire Vertical Ligne : ");
                                                   gotoxy(50,10);scanf("%d",&a2.x1);
                                                   gotoxy(50,11);printf("donner les coordonne du navire Vertical colonne : ");
                                                   gotoxy(50,12);scanf("%d",&a2.y1);
                                                   gotoxy(50,10);printf(" ");
                                                   gotoxy(50,12);printf(" ");

                                                  } while(a2.y1>4);
                                                 if(a[a2.x1][a2.y1]=='-' && a[a2.x1+1][a2.y1]=='-' && a[a2.x1+2][a2.y1]=='-'){
                                                   navirePrecedent=0;
                                                  a[a2.x1][a2.y1]='B';
                                                  a[a2.x1+1][a2.y1]='B';
                                                  a[a2.x1+2][a2.y1]='B';
                                                  success++;
                                                  gotoxy(4*(a2.y1+1)+5,2*a2.x1+7);printf("%c",a[a2.x1][a2.y1]);
                                                  gotoxy(4*(a2.y1+1)+5,2*a2.x1+9);printf("%c",a[a2.x1+1][a2.y1]);
                                                  gotoxy(4*(a2.y1+1)+5,2*a2.x1+11);printf("%c",a[a2.x1+2][a2.y1]);
                                               }
                                              } while(navirePrecedent==1);
                                            } break;
                                         case 3:
                                            {
                                                do
                                                {
                                                    navirePrecedent=1;
                                                  do
                                                    {
                                                    gotoxy(50,9);printf("donner les ccoordonne du navire Diagonal Ligne : ");
                                                    gotoxy(50,10);scanf("%d",&a3.x1);
                                                    gotoxy(50,11);printf("donner les coordonne  du navire Diagonal Diagonal colonne");
                                                    gotoxy(50,12);scanf("%d",&a3.y1);
                                                    gotoxy(50,10);printf(" ");
                                                    gotoxy(50,12);printf(" ");

                                                    } while(a3.y1>=4 || a3.x1>=4);
                                                 if(a[a3.x1][a3.y1]=='-' && a[a3.x1+1][a3.y1+1]=='-' && a[a3.x1+2][a3.y1+2]=='-'){
                                                   navirePrecedent=0;
                                                   success++;
                                                   a[a3.x1][a3.y1]='C';
                                                   a[a3.x1+1][a3.y1+1]='C';
                                                   a[a3.x1+2][a3.y1+2]='C';
                                                   gotoxy(4*(a3.y1+1)+5,2*a3.x1+7);printf("%c",a[a3.x1][a3.y1]);
                                                   gotoxy(4*(a3.y1+2)+5,2*a3.x1+9);printf("%c",a[a3.x1+1][a3.y1+1]);
                                                   gotoxy(4*(a3.y1+3)+5,2*a3.x1+11);printf("%c",a[a3.x1+2][a3.y1+2]);
                                           }
                                                }while(navirePrecedent==1);
                                            } break;
                        }
                     } while(success<=3);
            sleep(2);
            system("cls");
            printf("Vous avez  Deployer vos trois navires Avec succes  ");
            joueur2();
             SCORE=0;
            while(SCORE<=9 && tentative>=0)
            {
                gotoxy(40,3);printf("il vous reste %d tentative ",tentative);
                //voir si le joueur a bien saisi le debut de cchaque navire sinon il ya une diminution du score;
                gotoxy(50,10);printf("donner x : ");
                gotoxy(50,11);scanf("%d",&x);
                gotoxy(50,13);printf("donnee y : ");
                gotoxy(50,14);scanf("%d",&y);
                gotoxy(50,11);printf(" ");
                gotoxy(50,14);printf(" ");
                if(a[x][y]=='A' || a[x][y]=='B' || a[x][y]=='C' )
                {
                    if(a1.x1==x && a1.y1==y)
                    {
                        gotoxy(4*(y+1)+5,2*x+7);printf("O");
                        gotoxy(50,20);printf("Vous avez touche le navire A");
                        SCORE+=3;
                    } else if(x==a2.x1 && a2.y1==y)
                    {
                       gotoxy(4*(y+1)+5,2*x+7);printf("X");
                       gotoxy(50,20);printf("Vous avez touche le navire B");
                       SCORE+=3;
                    } else if(a3.x1==x && a3.y1==y)
                    {
                      gotoxy(4*(y+1)+5,2*x+7);printf("C");
                      gotoxy(50,20);printf("Vous avez touche le navire C");
                      SCORE+=3;
                    }
                } else
                {
                  SCORE-=3;
                     if(SCORE<0)
                    {
                       SCORE=0;
                    }
                }
                gotoxy(40,6);printf("Votre score actuel est : %d",SCORE);
                tentative--;
                if(SCORE==9)
                     {
                            printf("\nVous avez mis tous les navires a terres   ! !  ! \n");
                            break;
                     }
            }
        }
   case 2:
       {
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
   case 3:
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
        }
    } break;
   }
    if(success==3)
    {
         printf("rejouer !!");
         fflush(stdin);
         scanf("%c",&rejouer);
    }
} while(rejouer=='o' || rejouer=='O');

}
