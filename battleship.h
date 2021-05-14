#ifndef battleship_H_INCLUDED
#define battleship_H_INCLUDED
typedef struct
     {
         int x1;
         int y1;
     } Navire;
typedef struct
{
    char p1;
    char p2;//creation d'une structure qui stocke le nom des deux joueurs
} player;
void Menu();
void joueur1();
void regleGeneral();
int Ordinateur(char G[6][6]);
void Menu()
{
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
       gotoxy(27,14);printf(" ³           3-Jouer avec Ordinateur                        ³\n");
       gotoxy(27,15);printf(" ³           4-QUITTER LE JEU                               ³\n");
       gotoxy(28,16);printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
       gotoxy(29,17);puts("Selectionner votre choix ");
 }
    void joueur1(){
    system("COLOR 6");

         gotoxy(4,5);printf("   ³ 0 ³ 1 ³ 2 ³ 3 ³ 4 ³ 5 ³");
         gotoxy(4,6);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,7);printf(" 0 ³ 0 ³ 0 ³ 0 ³ 0 ³ 0 ³ 0 ³");
         gotoxy(4,8);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,9);printf(" 1 ³ 0 ³ 0 ³ 0 ³ 0 ³ 0 ³ 0 ³");
         gotoxy(4,10);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,11);printf(" 2 ³ 0 ³ 0 ³ 0 ³ 0 ³ 0 ³ 0 ³");
         gotoxy(4,12);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,13);printf(" 3 ³ 0 ³ 0 ³ 0 ³ 0 ³ 0 ³ 0 ³");
         gotoxy(4,14);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,15);printf(" 4 ³ 0 ³ 0 ³ 0 ³ 0 ³ 0 ³ 0 ³");
         gotoxy(4,16);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,17);printf(" 5 ³ 0 ³ 0 ³ 0 ³ 0 ³ 0 ³ 0 ³");
         gotoxy(4,18);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
    }
    void regleGeneral(){
        printf("\t\t\t\tRegle generale du jeu \n") ;
        printf ("REGLES DU JEU:\n") ;
	    printf ("1) Il s'agit d'un jeu à deux joueurs, mais chaque joueur utilise son propre ordinateur et sa propre instance de ce programme") ;
	    printf ("2. le joueur sera invité à choisir la formation initiale de ses navires\n") ;
	    printf (" pour le plateau de jeu \n") ;
	    printf ("3. Il y a 6 types de formations a placer \n") ;
	    printf ("4. la grille des navires est imprim%ce et l'utilisateur doit choisir lequel passe en premier : lui-meme ou l'adversaire \n",120) ;
	    printf ("5. l'ordinateur sélectionne aléatoirement l'endroit où le prochain tir du joueur sera effectué (coordonnées en GREC) \n") ;
	    printf ("6. Lorsque l'ennemi frappe le joueur, l'utilisateur doit saisir les coordonnées du tir entrant (en lettres grecques)\n") ;
	    printf ("7. Le jeu commence alors que chaque joueur tente de deviner l'emplacement des navires\n") ;
	    printf (" du plateau de jeu de l'adversaire ; [*] touche et [X] manque\n") ;
	    printf ("8. Le premier joueur qui a devine l'emplacement de tous les navires a gagne...\n") ;
    }
int Getcoordinates(char G[6][6])
{
    int x,y;
    srand(time(NULL));
}



#endif // battleship_H_INCLUDED
