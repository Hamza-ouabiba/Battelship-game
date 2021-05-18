#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<mmsystem.h>
#include"bataille.h"
void gotoxy(int x,int y);
int main()
 {
   //mettre un score :
    //une fois le joueur 2 rate un navire -> diminution du score par exemple ce cas le score sur 40 /
        //traiter les ca_  s des characteres  de navires :
        Navire a1,a2,a3;
        int SCORE=0;
        char a[6][6],rejouer,quitter;
        int suc=0;
        int i,j,position,rate=0,win=0,ho,choixOrdinateur=0,s=0;
        int x,y,c=0,col=0,lig=0,re;
        int navirePrecedent,choix,navire;
        int success=1,player1=0,player2=0;
        int tentative=4;
        char p1[10];//r aire stocker le nom des deux joueurs:
        char p2[10];
        system("COLOR 2");
do
{
    Debut:

    system("cls");
    Menu();
    gotoxy(28,18);printf("  ");
    gotoxy(28,18);scanf("%d",&choix);

    tentative=3;
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
                     Pseudo();
                     joueur1();
                     do
                     {
                         player1=1;
                         printf("\n");
                         gotoxy(50,1);printf("Donner le Positionnement de votre navire numero %d  \n",success);
                         gotoxy(50,2);printf("1=HORIZONTAL\n");
                         gotoxy(50,3);printf("2=VERTICAL\n");
                         gotoxy(50,4);printf("3=DIAGONAL\n");
                         gotoxy(50,5);printf("  ");
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

                                                  } while(a2.y1>4 || a2.x1>3);
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
            joueur1();
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
                        gotoxy(4*(a1.y1+1)+5,2*a1.x1+7);printf("%c",a[a1.x1][a1.y1]);
                        gotoxy(4*(a1.y1+2)+5,2*a1.x1+7);printf("%c",a[a1.x1][a1.y1+1]);
                        gotoxy(4*(a1.y1+3)+5,2*a1.x1+7);printf("%c",a[a1.x1][a1.y1+2]);
                        gotoxy(50,20);printf("Vous avez touche le navire A");
                        SCORE+=3;
                    } else if(x==a2.x1 && a2.y1==y)
                    {
                       gotoxy(4*(a2.y1+1)+5,2*a2.x1+7);printf("%c",a[a2.x1][a2.y1]);
                       gotoxy(4*(a2.y1+1)+5,2*a2.x1+9);printf("%c",a[a2.x1+1][a2.y1]);
                       gotoxy(4*(a2.y1+1)+5,2*a2.x1+11);printf("%c",a[a2.x1+2][a2.y1]);
                       gotoxy(50,20);printf("Vous avez touche le navire B");
                       SCORE+=3;
                    } else if(a3.x1==x && a3.y1==y)
                    {
                       gotoxy(4*(a3.y1+1)+5,2*a3.x1+7);printf("%c",a[a3.x1][a3.y1]);
                       gotoxy(4*(a3.y1+2)+5,2*a3.x1+9);printf("%c",a[a3.x1+1][a3.y1+1]);
                       gotoxy(4*(a3.y1+3)+5,2*a3.x1+11);printf("%c",a[a3.x1+2][a3.y1+2]);
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
                     } else if(tentative==0 && SCORE<9)
                     {
                         printf("Vous avez pas la chance  :-(");
                         break;
                     }
            }
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

   case 3:
    {
        system("cls");
        puts("\n************JOUER CONTRE ORDINATEUR************\n");
        for(i=0;i<6;i++)
        {
            for(j=0;j<6;j++)
            {
                a[i][j]='-'; //initialisation de la matrice :
            }
        }
       srand(time(NULL));
           joueur1();
           success=1;
           choixOrdinateur=0;
       while(success<=3)
       {
           choixOrdinateur=rand()%4+1;
           switch (choixOrdinateur)
           {
                            case 1:
                                 {
                                       do
                                           {
                                               navirePrecedent=1;
                                                do{
                                                   a1.x1=rand()%6;
                                                 }while(a1.x1<0 || a1.y1>5);
                                                 do{
                                                     a1.y1=rand()%4;
                                                 }while( a1.y1<0 ||  a1.y1>3);
                                                 if(a[a1.x1][a1.y1]=='-' && a[a1.x1][a1.y1+1]=='-' && a[a1.x1][a1.y1+2]=='-'){
                                                    navirePrecedent=0;//la valeur va changer lors du deploiement d'un certain navire
                                                    a[a1.x1][a1.y1]='A';
                                                    a[a1.x1][a1.y1+1]='A';
                                                    a[a1.x1][a1.y1+2]='A';
                                                    success++;
                                                         }
                                             } while(navirePrecedent==1);
                                 } break;
                            case 2:
                                {
                                     success=1;
                                    do
                                        {
                                                  navirePrecedent=1;
                                              do{
                                                    a2.y1=rand()%6;
                                               }while(a2.y1<0 || a2.y1>5);
                                               do{
                                                   a2.x1=rand()%4;;
                                                  }while(a2.x1<0 || a2.x1>3);
                                                  if(a[a2.x1][a2.y1]=='-' && a[a2.x1+1][a2.y1]=='-' && a[a2.x1+2][a2.y1]=='-'){
                                                   navirePrecedent=0;
                                                  a[a2.x1][a2.y1]='B';
                                                  a[a2.x1+1][a2.y1]='B';
                                                  a[a2.x1+2][a2.y1]='B';
                                                  success++;
                                               }
                                        } while(navirePrecedent==1);
                                }break;
                            case 3:
                                {
                                    do
                                          {
                                                    navirePrecedent=1;
                                                  do{
                                                    a3.x1=rand()%4;
                                                 }while(a3.x1<0 || a3.x1>3);
                                                   do{
                                                     a3.y1=rand()%4;
                                                  }while(a3.y1<0 || a3.y1>3);

                                                 if(a[a3.x1][a3.y1]=='-' && a[a3.x1+1][a3.y1+1]=='-' && a[a3.x1+2][a3.y1+2]=='-'){
                                                   navirePrecedent=0;
                                                   success++;
                                                   a[a3.x1][a3.y1]='C';
                                                   a[a3.x1+1][a3.y1+1]='C';
                                                   a[a3.x1+2][a3.y1+2]='C';

                                                 }
                                           }while(navirePrecedent==1);
                                } break;
       }
    }


    //le tour pour  l'utilisateur :

            SCORE=0;
            tentative=3;
            while(SCORE<=9 && tentative>=0)
            {
                player2=1;
                gotoxy(40,3);printf("il vous reste %d tentative ",tentative);
                //voir si le joueur a bien saisi le debut de cchaque navire sinon il ya une diminution du score;
                gotoxy(50,10);printf("donner x : ");
                gotoxy(50,11);scanf("%d",&x);
                gotoxy(50,13);printf("donnee y : ");
                gotoxy(50,14);scanf("%d",&y);
                gotoxy(50,11);printf(" ");
                gotoxy(50,14);printf(" ");
               ///pc
               if(a[x][y]=='A' || a[x][y]=='B' || a[x][y]=='C')
                  {
                     if(a[x][y]=='A')
                     {
                         SCORE+=3;
                         gotoxy(4*(a1.y1+1)+5,2*a1.x1+7);printf("%c",a[a1.x1][a1.y1]);
                         gotoxy(4*(a1.y1+2)+5,2*a1.x1+7);printf("%c",a[a1.x1][a1.y1+1]);
                         gotoxy(4*(a1.y1+3)+5,2*a1.x1+7);printf("%c",a[a1.x1][a1.y1+2]);

                         gotoxy(50,20);printf("Vous avez touche le navire A");printf("\t\t\t");
                     } else if(a[x][y]=='C')
                           {
                          SCORE+=3;
                          gotoxy(4*(a3.y1+1)+5,2*a3.x1+7);printf("%c",a[a3.x1][a3.y1]);
                         gotoxy(4*(a3.y1+2)+5,2*a3.x1+9);printf("%c",a[a3.x1+1][a3.y1+1]);
                         gotoxy(4*(a3.y1+3)+5,2*a3.x1+11);printf("%c",a[a3.x1+2][a3.y1+2]);
                          gotoxy(50,20);printf("Vous avez touche le navire C");printf("\t\t\t");
                            } else if(a[x][y]=='B')
                            {
                                SCORE+=3;
                                gotoxy(4*(a2.y1+1)+5,2*a2.x1+7);printf("%c",a[a2.x1][a2.y1]);
                                gotoxy(4*(a2.y1+1)+5,2*a2.x1+9);printf("%c",a[a2.x1+1][a2.y1]);
                                gotoxy(4*(a2.y1+1)+5,2*a2.x1+11);printf("%c",a[a2.x1+2][a2.y1]);
                                 gotoxy(50,20);printf("Vous avez touche le navire B");printf("\t\t\t");
                            }
                  } else
                  {
                      SCORE-=3;
                        gotoxy(4*(y+1)+5,2*x+7);printf("X");
                        gotoxy(50,20);printf("RATE A ZBI");printf("\t\t\t");
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
                     } else if(tentative<=0 && SCORE<9)
                     {
                         gotoxy(70,10);printf("Vous avez pas la chance LE PC GAGNE LE JEU ");
                         break;
                     }
            }
  } break;
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
void gotoxy(int x,int y) {
    printf("%c[%d;%df", 0x1b, y, x);
}
