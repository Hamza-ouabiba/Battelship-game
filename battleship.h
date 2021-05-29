#ifndef battleship_H_INCLUDED
#define battleship_H_INCLUDED
typedef struct
{
         int x;
         int y;
} Navire;
typedef struct
{
    char nom[20];
    int Score;//creation d'une structure qui stocke le nom des deux joueurs
} player;
int A,B,C;
Navire nav1[3];
Navire nav2[3];
Navire nav3[3];
void tableauOrdinateur();
 int i;
 int j;
char a[6][6];
int score;
int CoordonnePcHorizontal();  //choisir les coord avec une fonction puis les controlers dans une autre fonction
int Coordonnee_Pc_Vertocal();
int Coordonnee_Pc_diagonal(); //choisir les coord avec une fonction puis les controlers dans une autre fonction
void j1(void);
void j2(void);
void delay(clock_t a);
void intro(void);
void Menu(void);
void tableau(void);
void regleGeneral(void);
void Pseudo();
int choixOrdinateur();
void choix_ordi_vs_joueur();
//level 1 il ya la diminution du score avec 1 suel point :
//level 2 il ya l'intervention du temps dans ce cas la contrainte du tamps est: 10 (S)
//level 3 il ya l'intervention du temps dans ce cas la contrainte du temps et la contrainte du score avec le score a 6points :
void Menu()
{
       textbackground(3);
       gotoxy(25,1);printf(" ____        _        _ _ _                               _      \n");
       gotoxy(25,2);printf("| __ )  __ _| |_ __ _(_) | | ___   _ __   __ ___   ____ _| | ___ \n");
       gotoxy(25,3);printf("|  _ \\ / _` | __/ _` | | | |/ _ \\ | '_ \\ / _` \\ \\ / / _` | |/ _ \\\n");
       gotoxy(25,4);printf("| |_) | (_| | || (_| | | | |  __/ | | | | (_| |\\ V / (_| | |  __/\n");
       gotoxy(25,5);printf("|____/ \\__,_|\\__\\__,_|_|_|_|\\___| |_| |_|\\__,_| \\_/ \\__,_|_|\\___|\n\n");
       gotoxy(25,6);printf("        _     _     _ "  "__-=-//__  __\\\\-=-__"  " _     _     _        \n" );
       gotoxy(27,7);printf(".-.,.-'`(,.-'`(,.-'`(,"  "\\_______/"  ".."  "\\_______/" ",)`'-.,)`'-.,)`'-.,¸.-.\n\n" );
       gotoxy(28,8);printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
       gotoxy(28,9);printf("³                       MENU DU JEU :                      ³ \n");
       gotoxy(28,10);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
       gotoxy(27,11);printf(" ³       VEUILLEZ CONFIRMER VOTRE CHOIX PAR ENTREE          ³\n");
       gotoxy(27,12);printf(" ³           1-DEMARRER UNE NOUVELLE PARTIE                 ³ \n");
       gotoxy(27,13);printf(" ³           2-PARAMETRE ET REGLE DU JEU                    ³ \n");
       gotoxy(27,14);printf(" ³           3-JOUER AVEC ORDINATEUR                        ³\n");
       gotoxy(27,15);printf(" ³                4-QUITTER LE JEU                          ³\n");
       gotoxy(28,16);printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
       gotoxy(29,17);puts("Selectionner votre choix ");
 }
void tableau()
{
          gotoxy(15,4);;printf("   ³ 0 ³ 1 ³ 2 ³ 3 ³ 4 ³ 5 ³");
          gotoxy(15,5);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
          gotoxy(15,6);printf("   ³   ³   ³   ³   ³   ³   ³");
          gotoxy(15,7);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
          gotoxy(15,8);printf(" 1 ³   ³   ³   ³   ³   ³   ³");
          gotoxy(15,9);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
          gotoxy(15,10);printf(" 2 ³   ³   ³   ³   ³   ³   ³");
          gotoxy(15,11);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
          gotoxy(15,12);printf(" 3 ³   ³   ³   ³   ³   ³   ³");
          gotoxy(15,13);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
          gotoxy(15,14);printf(" 4 ³   ³   ³   ³   ³   ³   ³");
          gotoxy(15,15);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
          gotoxy(15,16);printf(" 5 ³   ³   ³   ³   ³   ³   ³");
          gotoxy(15,17);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
}
void regleGeneral(){
        printf("\t\t\t\tRegle generale du jeu \n") ;
        printf ("REGLES DU JEU:\n") ;
	    printf ("1) Il s'agit d'un jeu ï¿½ deux joueurs, mais chaque joueur utilise son propre ordinateur et sa propre instance de ce programme") ;
	    printf ("2. le joueur sera invitï¿½ ï¿½ choisir la formation initiale de ses navires\n") ;
	    printf (" pour le plateau de jeu \n") ;
	    printf ("3. Il y a 6 types de formations a placer \n") ;
	    printf ("4. la grille des navires est imprim%ce et l'utilisateur doit choisir lequel passe en premier : lui-meme ou l'adversaire \n",120) ;
	    printf ("5. l'ordinateur sï¿½lectionne alï¿½atoirement l'endroit oï¿½ le prochain tir du joueur sera effectuï¿½ (coordonnï¿½es en GREC) \n") ;
	    printf ("6. Lorsque l'ennemi frappe le joueur, l'utilisateur doit saisir les coordonnï¿½es du tir entrant (en lettres grecques)\n") ;
	    printf ("7. Le jeu commence alors que chaque joueur tente de deviner l'emplacement des navires\n") ;
	    printf (" du plateau de jeu de l'adversaire ; [chacaractere du navire] touche et [X] manque\n") ;
	    printf ("8. Le premier joueur qui a devine l'emplacement de tous les navires a gagne...\n") ;
    }
void Pseudo()
{
    //a mettre un tableau pour afficher les infos de chque joueuer
                     player p1,p2;
                     system("cls");
                     gotoxy(10,4);printf("donner le nom du joueur numero 1  ");
                     gotoxy(10,5);gets(p1.nom);
                     gotoxy(70,4);printf("donner le nom du joueur numero 2  ");
                     gotoxy(70,5);gets(p2.nom);
                     sleep(2);
                     system("cls");

}
int Coordonnee_Pc_Vertocal()   //choisir les coord avec une fonction puis les controlers dans une autre fonction
{
        int navirePrecedent=1;
        srand(time(NULL));
        do{
                   do{
                     nav2[B].x=rand()%6;
                    }while(nav2[B].x<0 || nav2[B].x>3);
                     do{
                               nav2[B].y=rand()%4;
                      }while( nav2[B].y<0 ||  nav2[B].y>5);
                if(a[nav2[B].x][nav2[B].y]=='-' && a[nav2[B].x+1][nav2[B].y]=='-' && a[nav2[B].x+2][nav2[B].y]=='-' )
                           {  navirePrecedent=0;
                             a[nav2[B].x][nav2[B].y]='B';
                             a[nav2[B].x+1][nav2[B].y]='B';
                             a[nav2[B].x+2][nav2[B].y]='B';
                             /////////////////////B////////////////////
                             B++;
                          }
                     } while(navirePrecedent==1);
            return navirePrecedent;
}


int Coordonnee_Pc_diagonal()   //choisir les coord avec une fonction puis les controlers dans une autre fonction
{
        int navirePrecedent=1;
        srand(time(NULL));
        do{
                   do{
                     nav3[C].x=rand()%6;
                    }while(nav3[C].x<0 || nav3[C].x>5);
                     do{
                                 nav3[C].y=rand()%4;
                      }while( nav3[C].y<0 || nav3[C].y>3);
                if(a[nav3[C].x][nav3[C].y]=='-' && a[nav3[C].x+1][nav3[C].y+1]=='-' && a[nav3[C].x+2][nav3[C].y+2]=='-')
                     { navirePrecedent=0;
                       a[nav3[C].x][nav3[C].y]=a[nav3[C].x+1][nav3[C].y+1]=a[nav3[C].x+2][nav3[C].y+2]='C';
                       C++;
                     }
                     } while(navirePrecedent==1);
            return navirePrecedent;
                        //checker :
}
int Coordonnee_Pc_horizontal()   //choisir les coord avec une fonction puis les controlers dans une autre fonction
{
        int navirePrecedent=1;
        srand(time(NULL));
        do{
                   do{
                     nav1[A].x=rand()%6;
                    }while(nav1[A].x<0 || nav1[A].x>5);
                     do{
                                 nav1[A].y=rand()%4;
                      }while( nav1[A].y<0 ||  nav1[A].y>3);
                if(a[nav1[A].x][nav1[A].y]=='-' && a[nav1[A].x][nav1[A].y+1]=='-' && a[nav1[A].x][nav1[A].y+2]=='-' )
                              { navirePrecedent=0;
                                a[nav1[A].x][nav1[A].y]='A';
                                a[nav1[A].x][nav1[A].y+1]='A';
                                a[nav1[A].x][nav1[A].y+2]='A';
                                A++;
                              }
             } while(navirePrecedent==1);
            return navirePrecedent;
                        //checker :
}
void delay(clock_t a)
{
    clock_t start;
    start  = clock();
    while(clock()-start<a)
    {

    }
}
//les caracteres pour les navires :
void intro()
{
    char names[]="Bienvenue a bataille Navale ";
     for(i=0;i<10;i++)
    {
        printf("\n");
    }
    for(i=0;i<40;i++)
    {
        printf(" ");
    }
    for(i=0;names[i]!='\0';i++)
    {
        printf("%c",names[i]);
        delay(60);
    }
    printf("\n");
    delay(1500);
    system("cls");
}
//les caracteres pour les navires :
void j1()
{
     int i=0;
    int c;
    int suc;
    int choix_navire;
    char position;
    int x,y;

    x=y=0;
    A=B=C=0;
    tableau();
            gotoxy(92,8);printf(" ");
            gotoxy(80,4);printf("choisir le type de navire:");
            gotoxy(80,5);printf("-1 Navire A HORIZONTAL");
            gotoxy(80,6);printf("-2 Navire B VERTICAL");
            gotoxy(80,7);printf("-3 Navire C DIAGONAL");
            gotoxy(80,8);printf("Votre choix:");
    do{
      do{
         gotoxy(80,9);printf("   ");
         gotoxy(80,9);scanf("%d",&choix_navire);
        }while(choix_navire!=1 && choix_navire!=2 && choix_navire!=3);

     switch(choix_navire)
      {
       case 1:
           { // A indice de tableau
             gotoxy(15,1);printf("******Navire HORIZONTAL*****");
             gotoxy(15,2);printf("Placer l'emplacement de vavire A");
            do{c=1;
                  do{
                     suc=0;
                     gotoxy(y*4+20,x*2+6);
                     position=getch();
                     switch(position)
                       {
                         case 72: if(x>0)x--;break;
                         case 80: if(x<5)x++;break;
                         case 77: if(y<5)y++;break;
                         case 75: if(y>0)y--;break;
                         case 13: suc=1;break;
                       }
                    }while(suc!=1 || y>3);
                     nav1[A].x=x;
                     nav1[A].y=y;

                            if(a[nav1[A].x][nav1[A].y]=='-' && a[nav1[A].x][nav1[A].y+1]=='-' && a[nav1[A].x][nav1[A].y+2]=='-' )
                              { c=0;i++;
                                a[nav1[A].x][nav1[A].y]='A';
                                a[nav1[A].x][nav1[A].y+1]='A';
                                a[nav1[A].x][nav1[A].y+2]='A';
                                gotoxy(nav1[A].y*4+20,nav1[A].x*2+6);printf("%c",a[nav1[A].x][nav1[A].y]);
                                gotoxy((nav1[A].y+1)*4+20,nav1[A].x*2+6);printf("%c",a[nav1[A].x][nav1[A].y+1]);
                                gotoxy((nav1[A].y+2)*4+20,nav1[A].x*2+6);printf("%c",a[nav1[A].x][nav1[A].y+2]);
                                A++;
                              }
            }while(c!=0);

            getch();
          }break;

                /////////////////////////////////////////////////////////////
        case 2:
         {      gotoxy(15,1);printf("******Navire B VERTICAL*****");
                gotoxy(15,2);printf("Placer l'emplacement de vavire B");
                c=1;
           do{
                    do{
                        suc=0;
                        gotoxy(y*4+20,x*2+6);
                        position=getch();
                        switch(position)
                          {
                            case 72: if(x>0)x--;break;
                            case 80: if(x<5)x++;break;
                            case 77: if(y<5)y++;break;
                            case 75: if(y>0)y--;break;
                            case 13: suc=1;break;
                          }
                      }while(suc!=1 || x>3);
                        nav2[B].x=x;
                        nav2[B].y=y;

                          if(a[nav2[B].x][nav2[B].y]=='-' && a[nav2[B].x+1][nav2[B].y]=='-' && a[nav2[B].x+2][nav2[B].y]=='-' )
                           {  c=0;i++;
                             a[nav2[B].x][nav2[B].y]='B';
                             a[nav2[B].x+1][nav2[B].y]='B';
                             a[nav2[B].x+2][nav2[B].y]='B';
                             /////////////////////B////////////////////
                             gotoxy(nav2[B].y*4+20,nav2[B].x*2+6);printf("%c",a[nav2[B].x][nav2[B].y]);
                             gotoxy(nav2[B].y*4+20,(nav2[B].x+1)*2+6);printf("%c",a[nav2[B].x+1][nav2[B].y]);
                             gotoxy(nav2[B].y*4+20,(nav2[B].x+2)*2+6);printf("%c",a[nav2[B].x+2][nav2[B].y]);
                             B++;
                          }

               }while(c!=0);
                getch();
         }break;

      case 3:
        {    gotoxy(15,1);printf("******Navire C DIAGONAL*****");
             gotoxy(15,2);printf("Placer l'emplacement de vavire C");
             c=1;
          do{
              do{
                 suc=0;
                 gotoxy(y*4+20,x*2+6);
                 position=getch();
                 switch(position)
                    {
                      case 72: if(x>0)x--;break;
                      case 80: if(x<5)x++;break;
                      case 77: if(y<5)y++;break;
                      case 75: if(y>0)y--;break;
                      case 13: suc=1;break;
                    }
                 }while(suc!=1 || x>3 || y>3);
                  nav3[C].x=x;
                  nav3[C].y=y;


                    if(a[nav3[C].x][nav3[C].y]=='-' && a[nav3[C].x+1][nav3[C].y+1]=='-' && a[nav3[C].x+2][nav3[C].y+2]=='-')
                     { c=0;i++;
                       a[nav3[C].x][nav3[C].y]=a[nav3[C].x+1][nav3[C].y+1]=a[nav3[C].x+2][nav3[C].y+2]='C';

                      gotoxy(nav3[C].y*4+20,nav3[C].x*2+6);printf("%c",a[nav3[C].x][nav3[C].y]);
                      gotoxy((nav3[C].y+1)*4+20,(nav3[C].x+1)*2+6);printf("%c",a[nav3[C].x+1][nav3[C].y+1]);
                      gotoxy((nav3[C].y+2)*4+20,(nav3[C].x+2)*2+6);printf("%c",a[nav3[C].x+2][nav3[C].y+2]);
                       C++;
                     }

             }while(c!=0);
              getch();
         }break;
      }

   }while(i!=3);
   system("cls");
}
void j2()
{
    int i=0,x=0,y=0,c=0,k;
    int Ci[3]={0};
    int Ai[3]={0};
    int Bi[3]={0};
    char position;
    int suc;
    int choix;
    time_t  depart,arrivee;
     system("cls");
     printf("choix:taper 1 pour level 1(FACILE)  : :\n");
     printf("choix:taper 2 pour level 2(MOYEN): : \n");
     printf("choix:taper 3 pour level 3 (DIFFICILE): : \n");
     scanf("%d",&choix);
     system("cls");
   //
     gotoxy(14,1);printf("\**************JOUEUR2*************");
 switch(choix)
  {
    case 1: {
        score=0;
          c=x=y=i=0;
          tableau();time(&depart);
      do{

                             c++;
                 gotoxy(14,2);printf("Saisir l'emplacement de vavire %d",i);

                   do{ suc=0;
                       gotoxy(y*4+20,x*2+6);
                       position=getch();
                       switch(position)
                          {
                           case 72: if(x>0)x--;break;
                           case 80: if(x<5)x++;break;
                           case 77: if(y<5)y++;break;
                           case 75: if(y>0)y--;break;
                           case 13: suc=1;break;
                          }
                     }while(suc==0);


              if(a[x][y]=='A' || a[x][y]=='B' || a[x][y]=='C')
               {
                        gotoxy(5,20);printf("Navire(%c) touche\n",a[x][y]);

                     if(a[x][y]=='A')
                        {
                          for(k=0;k<A;k++)
                           {/////////////////////A////////////////////
                             if( Ai[k]==0 && x==nav1[k].x &&(y==nav1[k].y || y==nav1[k].y+1 || y==nav1[k].y+2))
                              { i++;
                                gotoxy(nav1[k].y*4+20,nav1[k].x*2+6);printf("%c",a[nav1[k].x][nav1[k].y]);
                                gotoxy((nav1[k].y+1)*4+20,nav1[k].x*2+6);printf("%c",a[nav1[k].x][nav1[k].y+1]);
                                gotoxy((nav1[k].y+2)*4+20,nav1[k].x*2+6);printf("%c",a[nav1[k].x][nav1[k].y+2]);
                                gotoxy(y*4+20,x*2+6);
                                Ai[k]=1;///le navire est placÐ˜
                                score+=3;
                              }
                            }
                        }
                    else if(a[x][y]=='B')
                       {
                          for(k=0;k<B;k++)
                           { /////////////////////B////////////////////
                             if( Bi[k]==0 && y==nav2[k].y &&(x==nav2[k].x || x==nav2[k].x+1 || x==nav2[k].x+2))
                              { i++;
                               gotoxy(nav2[k].y*4+20,nav2[k].x*2+6);printf("%c",a[nav2[k].x][nav2[k].y]);
                               gotoxy(nav2[k].y*4+20,(nav2[k].x+1)*2+6);printf("%c",a[nav2[k].x+1][nav2[k].y]);
                               gotoxy(nav2[k].y*4+20,(nav2[k].x+2)*2+6);printf("%c",a[nav2[k].x+2][nav2[k].y]);
                               gotoxy(y*4+20,x*2+6);
                               Bi[k]=1;///le navire est placÐ˜
                               score+=3;
                              }
                           }
                      }
                    else if(a[x][y]=='C')
                       {
                           for(k=0;k<C;k++)
                              {
                                 if(Ci[k]==0 && ( (x==nav3[k].x && y==nav3[k].y) || (x==nav3[k].x+1 && y==nav3[k].y+1) || (x==nav3[k].x+2 && y==nav3[k].y+2) ) )
                                   {
                                  i++;
                               gotoxy(nav3[k].y*4+20,nav3[k].x*2+6);printf("%c",a[nav3[k].x][nav3[k].y]);
                               gotoxy((nav3[k].y+1)*4+20,(nav3[k].x+1)*2+6);printf("%c",a[nav3[k].x+1][nav3[k].y+1]);
                               gotoxy((nav3[k].y+2)*4+20,(nav3[k].x+2)*2+6);printf("%c",a[nav3[k].x+2][nav3[k].y+2]);
                               gotoxy(y*4+20,x*2+6);
                               Ci[k]=1;///le navire est placÐ˜
                               score+=3;
                               break;
                                 }
                           }
                       }
                }
              else{
                   gotoxy(y*4+19,x*2+6);printf("X");
                   gotoxy(5,21);printf("rate!");
                     if(score>0){
                        score--;
                       }
                   else if(score<0){
                        score=0;
                       }
                  }

        }while(i!=3);
        time(&arrivee);
        if(difftime(arrivee,depart)>10)
        {
            gotoxy(80,4);printf("|TIME:%.0f|",difftime(arrivee, depart));
            gotoxy(80,5);printf("|score:%d|",score);
            system("cls");
            gotoxy(50,20);printf("vous avez perdus");
            getch();
            system("cls");
        } else
        {
            gotoxy(80,20);printf("vous avez gagnee ");
            getch();
            system("cls");
        }
    } break;

   case 2:
         {
             score=0;
             gotoxy(60,20);printf("la contrainte du temps est : 10 (S)");
             //level 2:
                                c=x=y=i=0;
          tableau();
          time(&depart);
      do{
                 c++;
                 gotoxy(14,2);printf("Saisir l'emplacement de vavire %d",i);

                   do{ suc=0;
                       gotoxy(y*4+20,x*2+6);
                       position=getch();
                       switch(position)
                          {
                           case 72: if(x>0)x--;break;
                           case 80: if(x<5)x++;break;
                           case 77: if(y<5)y++;break;
                           case 75: if(y>0)y--;break;
                           case 13: suc=1;break;
                          }
                     }while(suc==0);


              if(a[x][y]=='A' || a[x][y]=='B' || a[x][y]=='C')
               {
                        gotoxy(5,20);printf("Navire(%c) touche\n",a[x][y]);

                     if(a[x][y]=='A')
                        {
                          for(k=0;k<A;k++)
                           {/////////////////////A////////////////////
                             if( Ai[k]==0 && x==nav1[k].x &&(y==nav1[k].y || y==nav1[k].y+1 || y==nav1[k].y+2))
                              { i++;
                                gotoxy(nav1[k].y*4+20,nav1[k].x*2+6);printf("%c",a[nav1[k].x][nav1[k].y]);
                                gotoxy((nav1[k].y+1)*4+20,nav1[k].x*2+6);printf("%c",a[nav1[k].x][nav1[k].y+1]);
                                gotoxy((nav1[k].y+2)*4+20,nav1[k].x*2+6);printf("%c",a[nav1[k].x][nav1[k].y+2]);
                                gotoxy(y*4+20,x*2+6);
                                Ai[k]=1;///le navire est placÐ˜
                                score+=3;
                              }
                            }
                        }
                    else if(a[x][y]=='B')
                       {
                          for(k=0;k<B;k++)
                           { /////////////////////B////////////////////
                             if( Bi[k]==0 && y==nav2[k].y &&(x==nav2[k].x || x==nav2[k].x+1 || x==nav2[k].x+2))
                              { i++;
                               gotoxy(nav2[k].y*4+20,nav2[k].x*2+6);printf("%c",a[nav2[k].x][nav2[k].y]);
                               gotoxy(nav2[k].y*4+20,(nav2[k].x+1)*2+6);printf("%c",a[nav2[k].x+1][nav2[k].y]);
                               gotoxy(nav2[k].y*4+20,(nav2[k].x+2)*2+6);printf("%c",a[nav2[k].x+2][nav2[k].y]);
                               gotoxy(y*4+20,x*2+6);
                               Bi[k]=1;///le navire est placÐ˜
                               score+=3;
                              }
                           }
                      }
                    else if(a[x][y]=='C')
                       {
                           for(k=0;k<C;k++)
                              {
                                 if(Ci[k]==0 && ( (x==nav3[k].x && y==nav3[k].y) || (x==nav3[k].x+1 && y==nav3[k].y+1) || (x==nav3[k].x+2 && y==nav3[k].y+2) ) )
                                   {
                                  i++;
                               gotoxy(nav3[k].y*4+20,nav3[k].x*2+6);printf("%c",a[nav3[k].x][nav3[k].y]);
                               gotoxy((nav3[k].y+1)*4+20,(nav3[k].x+1)*2+6);printf("%c",a[nav3[k].x+1][nav3[k].y+1]);
                               gotoxy((nav3[k].y+2)*4+20,(nav3[k].x+2)*2+6);printf("%c",a[nav3[k].x+2][nav3[k].y+2]);
                               gotoxy(y*4+20,x*2+6);
                               Ci[k]=1;///le navire est placÐ˜
                               score+=3;
                               break;
                                 }
                           }
                       }
                }
              else{
                   gotoxy(y*4+19,x*2+6);printf("X");
                   gotoxy(5,21);printf("rate!");
                     if(score>0){
                        score-=2;
                       }
                   else if(score<0){
                        score=0;
                       }
                  }


        }while(i!=3);
            time(&arrivee);
             if(difftime(arrivee,depart)>10)
             {
                 gotoxy(80,4);printf("|TIME:%.2f|",difftime(arrivee, depart));
                  gotoxy(80,5);printf("|score:%d|",score);
                    gotoxy(20,20);printf("vous avez perdus !!");
                    getch();
                    system("cls");

             } else
             {
                 gotoxy(80,4);printf("|TIME:%.0f|",difftime(arrivee, depart));
                  gotoxy(80,5);printf("|score:%d|",score);
                    gotoxy(20,20);printf("vous avez gagne !! ");
                    getch();
                    system("cls");
             }

     } break;
               case 3:
                    {
                        score=0;
                              gotoxy(60,20);printf("la contrainte du temps est : 8 (S)");
                              gotoxy(60,21);printf("la contrainte du score est : 6 (S)");
                                c=x=y=i=0;
               tableau();
               time(&depart);
          do{
                             c++;
                 gotoxy(14,2);printf("Saisir l'emplacement de vavire %d",i);

                   do{ suc=0;
                       gotoxy(y*4+20,x*2+6);
                       position=getch();
                       switch(position)
                          {
                           case 72: if(x>0)x--;break;
                           case 80: if(x<5)x++;break;
                           case 77: if(y<5)y++;break;
                           case 75: if(y>0)y--;break;
                           case 13: suc=1;break;
                          }
                     }while(suc==0);


              if(a[x][y]=='A' || a[x][y]=='B' || a[x][y]=='C')
               {
                        gotoxy(5,20);printf("Navire(%c) touche\n",a[x][y]);

                     if(a[x][y]=='A')
                        {
                          for(k=0;k<A;k++)
                           {/////////////////////A////////////////////
                             if( Ai[k]==0 && x==nav1[k].x &&(y==nav1[k].y || y==nav1[k].y+1 || y==nav1[k].y+2))
                              { i++;
                                gotoxy(nav1[k].y*4+20,nav1[k].x*2+6);printf("%c",a[nav1[k].x][nav1[k].y]);
                                gotoxy((nav1[k].y+1)*4+20,nav1[k].x*2+6);printf("%c",a[nav1[k].x][nav1[k].y+1]);
                                gotoxy((nav1[k].y+2)*4+20,nav1[k].x*2+6);printf("%c",a[nav1[k].x][nav1[k].y+2]);
                                gotoxy(y*4+20,x*2+6);
                                Ai[k]=1;///le navire est placÐ˜
                                score+=2;
                              }
                            }
                        }
                    else if(a[x][y]=='B')
                       {
                          for(k=0;k<B;k++)
                           { /////////////////////B////////////////////
                             if( Bi[k]==0 && y==nav2[k].y &&(x==nav2[k].x || x==nav2[k].x+1 || x==nav2[k].x+2))
                              { i++;
                               gotoxy(nav2[k].y*4+20,nav2[k].x*2+6);printf("%c",a[nav2[k].x][nav2[k].y]);
                               gotoxy(nav2[k].y*4+20,(nav2[k].x+1)*2+6);printf("%c",a[nav2[k].x+1][nav2[k].y]);
                               gotoxy(nav2[k].y*4+20,(nav2[k].x+2)*2+6);printf("%c",a[nav2[k].x+2][nav2[k].y]);
                               gotoxy(y*4+20,x*2+6);
                               Bi[k]=1;///le navire est placÐ˜
                               score+=2;
                              }
                           }
                      }
                    else if(a[x][y]=='C')
                       {
                           for(k=0;k<C;k++)
                              {
                                 if(Ci[k]==0 && ( (x==nav3[k].x && y==nav3[k].y) || (x==nav3[k].x+1 && y==nav3[k].y+1) || (x==nav3[k].x+2 && y==nav3[k].y+2) ) )
                                   {
                                  i++;
                               gotoxy(nav3[k].y*4+20,nav3[k].x*2+6);printf("%c",a[nav3[k].x][nav3[k].y]);
                               gotoxy((nav3[k].y+1)*4+20,(nav3[k].x+1)*2+6);printf("%c",a[nav3[k].x+1][nav3[k].y+1]);
                               gotoxy((nav3[k].y+2)*4+20,(nav3[k].x+2)*2+6);printf("%c",a[nav3[k].x+2][nav3[k].y+2]);
                               gotoxy(y*4+20,x*2+6);
                               Ci[k]=1;///le navire est placÐ˜
                               score+=3;
                               break;
                                 }
                           }
                       }
                }
              else{
                   gotoxy(y*4+19,x*2+6);printf("X");
                   gotoxy(5,21);printf("rate!");
                   break;
                  }
            //la contrainte du score qui est 6:

        }while(i!=3);
            time(&arrivee);
             if(score==6 && difftime(arrivee,depart)<=6)
            {
                gotoxy(80,4);printf("|TIME:%.0f|",difftime(arrivee, depart));
                gotoxy(80,5);printf("|score:%d|",score);
                gotoxy(80,20);printf("BRAVO vous avez gagne en ne ratant aucun navire ");
                system("cls");
            } else
            {
                gotoxy(80,4);printf("|TIME:%.2f|",difftime(arrivee, depart));
                gotoxy(80,5);printf("|score:%d|",score);
                printf("Vous avez Perdus ");
                getch();
                system("cls");
            }

    }
}

}
void choix_ordi_vs_joueur()
{
       int choixOrdinateur;
       int success=1;
        int x,y;
        puts("\n************JOUER CONTRE ORDINATEUR************");
     srand(time(NULL));
     success=1;
            while(success<=3){
                    choixOrdinateur=rand()%4+1;
               switch (choixOrdinateur)
              {
                            case 1:
                                 {
                                                   //horizontal
                                     if(Coordonnee_Pc_horizontal()==0)
                                     {

                                         success++;
                                     }

                                 } break;
                            case 2:
                                {
                                   if(Coordonnee_Pc_Vertocal()==0)
                                   {
                                       success++;
                                   }
                                } break;
                            case 3:
                                {
                                    if(Coordonnee_Pc_diagonal()==0)
                                    {
                                         success++;

                                    }
                                } break;

           }
         }
}


#endif // battleship_H_INCLUDED
