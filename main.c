#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include "battleship.h"
int main()
 {

   //mettre un score :
    int SCORE=0;
    //une fois le joueur 2 rate un navire -> diminution du score par exemple ce cas le score sur 40 /
        //traiter les cas des characteres  de navires :
        Navire a1,a2,a3;
        char player1,player2;
        char a[6][6],rejouer,quitter;
        int i,j,position,rate=0,win=0,ho;
        int x,y,c=0,col=0,lig=0;
        int navirePrecedent,choix,navire;
        int success=1;
        int tentative=3;

     SCORE=0;
      system("COLOR 6");
      system("cls");
        Menu();
          gotoxy(28,16);printf("selectionner votre choix\n");
          gotoxy(28,17);scanf("%d",&choix);
do{
        switch(choix)
        {
                    case 2 :
                        {
                            system("cls");
                            regleGeneral();
                                  do{
                                    printf("POUR Revenir au Menu Principal appuyer sur 1 \n");
                                    scanf("%d",&choix);

                                        if(choix==1){
                                           system("cls");

                                                break;
                                            } else {
                                                 printf("veuillez ressaye\n");
                                            }
                                  } while(choix!=1);
                         };break;

                    case 3:
                        {
                                  printf("voulez-vous vraiment quitter le jeu O/N?");
                                  fflush(stdin);
                                  scanf("%c",&quitter);
                                  if(quitter=='o' || quitter=='O'){
                                         printf("A bientot\n");
                                            exit(0);
                                } else if(quitter=='N' || quitter=='n'){
                                     system("cls");

                                        } else {
                                             printf("CHOIX ERRONEE ");
                                               }
                        } break;
        }
       if(choix==1)
      {

          system("cls");
          success=1;
        for(i=0;i<6;i++)
        {
            for(j=0;j<6;j++)
            {
                a[i][j]='-';
            }
        }
    joueur1();
         do{
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
                                  //horizontal:
                            do{
                                     navirePrecedent=1;

                                 do
                                    {
                                        printf("\n\n");

                                            gotoxy(50,9);printf("donner les coordonne du navire horizontal Linge : ");
                                            gotoxy(50,10);scanf("%d",&a1.x1);
                                            gotoxy(50,11);printf("donner les coordonne du navire horizontal Colonne : ");
                                            gotoxy(50,12);scanf("%d",&a1.y1);
                                            gotoxy(50,10);printf(" ");
                                            gotoxy(50,12);printf(" ");
                                   } while(a1.y1>=4 );
                                      //cas!
                                        if(a[a1.x1][a1.y1]=='-' && a[a1.x1][a1.y1+1]=='-' && a[a1.x1][a1.y1+2]=='-'){
                                                    navirePrecedent=0;
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
                               do{
                                 navirePrecedent=1;

                                   do
                                     {
                                     //vertical:
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
                                            //diagonal
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
                                 } while(navirePrecedent==1);
                           } break;
          }
        } while(success<=3);
      sleep(2);
      system("cls");
      printf("Vous avez  Deployer vos trois navires Avec succes  ");
      sleep(2);
      system("cls");
      printf("\n**************JOUEUR2*************\n");
      //utilisateur donne le char de navire :
      tentative=3;
     // do
     // {


     // gotoxy(9+4*col,7+2*lig);
     // position=getch();
     //  switch(position)
     //  {
     //      case 77:if(col<5)col++;break;
     //      case 75:if(col>0)col--;break;
     //      case 80:if(lig<5)lig++;break;
     //      case 72:if(lig>0)lig--;break;
     //  }
     //  if(position==13 && a[x][y]=='A' || a[x][y]=='B' || a[x][y]=='C')
     //  {
     //             if(a1.x1==x && a1.y1==y)
     //                 {
     //                   puts("x");
     //                    SCORE++;
     //                    gotoxy(40,6);puts("Vous avez touche le navire A ");

     //       } else if(x==a2.x1 && a2.y1==y)
     //       {
     //           gotoxy(40,6);puts("Vous avez touche le navire B ");
     //           SCORE++;

     //       }else if(a3.x1==x && a3.y1==y){
     //           gotoxy(40,6);puts("Vous avez touche le navire C ");
     //            SCORE++;
     //       }

     //  }
     // } while(1);
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
                } else {
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

       printf("\nvoulez-vous rejouez O/N?");
       fflush(stdin);
       scanf("%c",&rejouer);
       if(rejouer=='o' || rejouer=='O')
       {

        system("cls");
       }
      } else
       {
           do
           {
               printf("Veuillez resaisr ");
               scanf("%d",&choix);
           } while(choix!=1 && choix!=2 && choix!=3);

       }
    } while(rejouer=='o' || rejouer=='O');
    exit(0);
 }
