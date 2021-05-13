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
    int score;
} player;
void Menu();
void joueur1();
void joueur2();
void regleGeneral();
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
       gotoxy(27,14);printf(" ³                3-QUITTER LE JEU                          ³\n");
       gotoxy(28,15);printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
       gotoxy(29,16);puts("Selectionner votre choix ");
 }
    void joueur1(){
    system("COLOR 3");

         gotoxy(4,5);printf("   ³ 0 ³ 1 ³ 2 ³ 3 ³ 4 ³ 5 ³");
         gotoxy(4,6);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,7);printf(" 0 ³   ³   ³   ³   ³   ³   ³");
         gotoxy(4,8);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,9);printf(" 1 ³   ³   ³   ³   ³   ³   ³");
         gotoxy(4,10);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,11);printf(" 2 ³   ³   ³   ³   ³   ³   ³");
         gotoxy(4,12);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,13);printf(" 3 ³   ³   ³   ³   ³   ³   ³");
         gotoxy(4,14);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,15);printf(" 4 ³   ³   ³   ³   ³   ³   ³");
         gotoxy(4,16);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,17);printf(" 5 ³   ³   ³   ³   ³   ³   ³");
         gotoxy(4,18);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
    }
    void joueur2()
    {
          gotoxy(4,5);printf("   ³ 0 ³ 1 ³ 2 ³ 3 ³ 4 ³ 5 ³");
         gotoxy(4,6);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,7);printf(" 0 ³   ³   ³   ³   ³   ³   ³");
         gotoxy(4,8);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,9);printf(" 1 ³   ³   ³   ³   ³   ³   ³");
         gotoxy(4,10);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,11);printf(" 2 ³   ³   ³   ³   ³   ³   ³");
         gotoxy(4,12);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,13);printf(" 3 ³   ³   ³   ³   ³   ³   ³");
         gotoxy(4,14);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,15);printf(" 4 ³   ³   ³   ³   ³   ³   ³");
         gotoxy(4,16);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
         gotoxy(4,17);printf(" 5 ³   ³   ³   ³   ³   ³   ³");
         gotoxy(4,18);printf("ÄÄÄÅÄÄÄÅÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³ÄÄÄ³");
    }

    void regleGeneral(){

        printf("\t\t\tRegle general du jeu \n");
        printf("Voici les regles du jeu :\n\n");
        printf("Chaque joueur (humain et ordinateur) joue a tour de role. Bien entendu, un joueur ne doit pas voir les grilles de son adversaire : seules les grilles du joueur en cours sont affichees. A chaque tour de jeu, les joueurs peuvent choisir l'une des 2 actions suivantes sur un seul navire de leur choix de la grille numero 1, en choisissant les coordonnees de l'une des cases du navire :\n\n \t(1) Tirer.\n\n Le joueur tire en choisissant les coordonnees d'une case valide de l'adversaire (grille numero 2). Chaque destroyer n'est muni que d'une seule fusee eclairante. Le premier tir d'un destroyer devoile un carre de 4*4 cases dans la grille adverse a partir du coin haut et gauche. Mais attention, les navires adverses de ce carre ne seront visibles que lors du tour du jeu (quelques secondes). Pour couler un navire, il faut avoir touche toutes les cases qu'il occupe : un cuirasse est plus resistant qu'un simple destroyer, les sous-marins ne peuvent etre coules que par d'autres sous-marins. Dans ce cas, le navire adverse coule disparait et la case touchee s'affiche sur la grille numero 2.\n\n \t(2) Deplacer le navire d'une seule case sauf s'il est touche.\n\n Un navire ne peut pas se deplacer en diagonale. Il ne peut se deplacer que dans sa direction horizontale ou verticale, et d'une seule case a la fois, et le point cardinal de deplacement (est ou ouest s'il est horizontal, nord ou sud s'il est vertical). Evidemment, en cas d'obstacle (case de deplacement occupee par un autre navire ou le bord de la grille), un navire ne pourra pas effectuer son d?placement et devra tenter une nouvelle action. A chaque tour de jeu, il faudra visualiser l'action, les coordonnees et le type du navire choisis par l'ordinateur\n\n");
    }


#endif // battleship_H_INCLUDED
