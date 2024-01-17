#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>

//----------------------- TIC-TAC-TOE GAME -----------------------------------------
int n1 = 0, n2 = 0, turn = 0, start = -1, success = -1, index_pos = 0, redirect = 0;
int postions[] = {-1, -1, -1, -1, -1, -1, -1, -1};                     // arrray to store record of positions marked by players on board
char ArrayPositions[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // array to show the positions left & postions marked
char ch1, ch2, dec;
char playerOne[15]; // string for player 1 name input
char playerTwo[15]; // string for player 2 name input
char design = 178;

char H1[] = " WELCOME TO TIC-TAC-TOE GAME ";
char H2[] = "\n\n\t\t\t\t RULES ARE SIMPLE :";
char H3[] = "\n\t\t\t\t 1. THE GAME IS PLAYED ON A GRID OF 3X3 SQUARES.";
char H4[] = "\n\t\t\t\t 2. PLAYER 1 HAS TO CHOOSE BETWEEN 'x' OR 'o' AND THE OTHER MARK LEFT WILL BE ASSIGNED TO PLAYER 2.";
char H5[] = "\n\t\t\t\t 3. AFTER CHOOSING MARKS'S PLAYER 1 STARTS THE GAME BY MAKING MARKS ON POSITIONS (1-9).";
char H6[] = "\n\t\t\t\t 4. THE FIRST PLAYER TO GET 3 MARKS IN ROW (UP,DOWN,ACROSS OR DIAGONALLY) WILL BE THE WINNER.";
char H7[] = "\n\t\t\t\t 5. IF A PLAYER TRIES TO MARK A POSITION WHICH IS ALREADY MARKED IT WILL BE CONSIDERED AS CHEATING.";
char H8[] = "\n\t\t\t\t 6. WHEN ALL 9 SQUARES ARE FULL,THE GAME IS OVER.IF NO PLAYER HAS 3 MARKS IN A ROW,THE GAME ENDS IN A TIE.\n";

int isTrue(int n1) // overwrite protection functionon tic-tac-toe board
{
    for (int c = 0; c < 8; c++)
    {
        if (n1 == postions[c])
            return 1;
    }
    return 0;
}

void reset()
{
    for (int p = 0; p < 10; p++) // loop to reset all values to -1 in arrray postions
        postions[p] = -1;
    for (int q = 0; q <= 9; q++) // loop to reset all postion values 1 to 9 in ArrayPositions
        ArrayPositions[q] = 49 + q;
    turn = 0;
    index_pos = 0;
    success = -1;
    start = 0;
    redirect = 0;
    n1 = 0;
    n2 = 0;
}

void newgame() // tic-tac-toe new game function
{
    char H35[] = "\n\n\t\t\t\t START A NEW GAME : (Y FOR YES & N FOR NO) : ";
    for (int i = 0; i < strlen(H35); i++)
    {
        Sleep(8);
        printf("%c", H35[i]);
    }
    getchar();
    scanf("%c", &dec);
    getchar();
    char H36[] = "\n\t\t\t\t WRONG INPUT... TO START A NEW GAME CHOOSE Y FOR YES & N FOR NO : ";
    while (dec != 'Y' && dec != 'N' && dec != 'y' && dec != 'n')
    {
        for (int i = 0; i < strlen(H36); i++)
        {
            Sleep(8);
            printf("%c", H36[i]);
        }
        scanf("%c", &dec);
        getchar();
    }
    if (dec == 'Y' || dec == 'y')
    {
        reset();
        system("cls");
    }
    else if (dec == 'n' || dec == 'N')
        redirect = 1;
}

void display() // tic-tac-toe board display funtion
{
    printf("\n\t\t\t\t ---|---|---");
    printf("\n\t\t\t\t  %c | %c | %c ", ArrayPositions[0], ArrayPositions[1], ArrayPositions[2]);
    printf("\n\t\t\t\t ---|---|---");
    printf("\n\t\t\t\t  %c | %c | %c ", ArrayPositions[3], ArrayPositions[4], ArrayPositions[5]);
    printf("\n\t\t\t\t ---|---|---");
    printf("\n\t\t\t\t  %c | %c | %c ", ArrayPositions[6], ArrayPositions[7], ArrayPositions[8]);
    printf("\n\t\t\t\t ---|---|---\n");
}

void p1_turn() // tic-tac-toe player 1 turn function
{
    printf("\n\t\t\t\t ");
    char H18[50] = "";
    strcat(H18, playerOne);
    char H19[] = "'s TURN ";
    strcat(H18, H19);
    for (int i = 0; i < strlen(H18); i++)
    {
        Sleep(8);
        printf("%c", H18[i]); // (playerOne)'s TURN
    }
    char H20[] = "\n\t\t\t\t ENTER POSITION : ";
    for (int i = 0; i < strlen(H20); i++)
    {
        Sleep(8);
        printf("%c", H20[i]); // ENTER POSITION :
    }
    scanf("%d", &n1);
    char H21[] = "\n\t\t\t\t WRONG POSITION...RE-ENTER FROM 1-9 : ";
    while (n1 <= 0 || n1 > 9)
    {
        for (int i = 0; i < strlen(H21); i++)
        {
            Sleep(8);
            printf("%c", H21[i]); // WRONG POSITION...RE-ENTER FROM 1-9 :
        }
        scanf("%d", &n1);
    }

    while (isTrue(n1))
    {
        char H22[] = "\n\t\t\t\t ----------------------------------------------";
        for (int i = 0; i < strlen(H22); i++)
        {
            Sleep(8);
            printf("%c", H22[i]); //----------------------
        }

        char H23[100] = "\n\t\t\t\t ";
        strcat(H23, playerOne);
        char H24[] = " YOU CHEATED...OVERWRITING NOT ALLOWED \n";
        strcat(H23, H24);
        for (int i = 0; i < strlen(H23); i++)
        {
            Sleep(8);
            printf("%c", H23[i]); // (playerOne) YOU CHEATED...OVERWRITING NOT ALLOWED
        }

        char H25[100] = "\n\t\t\t\t ";
        strcat(H25, playerOne);
        char H26[] = "'s TURN ENTER POSITION OTHER THAN ";
        strcat(H25, H26);
        for (int i = 0; i < strlen(H25); i++)
        {
            Sleep(8);
            printf("%c", H25[i]); // (playerOne)'s TURN ENTER POSITION OTHER THAN n1
        }
        printf("%d : ", n1);
        scanf("%d", &n1);
        printf("\n");
        while (n1 <= 0 || n1 > 9)
        {
            for (int i = 0; i < strlen(H21); i++)
            {
                Sleep(8);
                printf("%c", H21[i]); // WRONG POSITION...RE-ENTER FROM 1-9 :
            }
            scanf("%d", &n1);
        }
    }
    postions[index_pos] = n1;
    index_pos++;
    ArrayPositions[n1 - 1] = ch1;
}

void p2_turn() // tic-tac-toe player 2 turn function
{
    printf("\n\t\t\t\t ");
    char H27[50] = "";
    strcat(H27, playerTwo);
    char H28[] = "'s TURN ";
    strcat(H27, H28);
    for (int i = 0; i < strlen(H27); i++)
    {
        Sleep(8);
        printf("%c", H27[i]);
    }
    char H29[] = "\n\t\t\t\t ENTER POSITION : ";
    for (int i = 0; i < strlen(H29); i++)
    {
        Sleep(8);
        printf("%c", H29[i]); // ENTER POSITION :
    }
    scanf("%d", &n2);
    char H30[] = "\n\t\t\t\t WRONG POSITION...RE-ENTER FROM 1-9 : ";
    char H31[] = "\n\t\t\t\t ----------------------------------------------\n";

    while (n2 <= 0 || n2 > 9)
    {
        for (int i = 0; i < strlen(H30); i++)
        {
            Sleep(8);
            printf("%c", H30[i]); // WRONG POSITION...RE-ENTER FROM 1-9 :
        }
        scanf("%d", &n2);
    }

    while (isTrue(n2))
    {
        for (int i = 0; i < strlen(H31); i++)
        {
            Sleep(8);
            printf("%c", H31[i]); //----------------------
        }

        char H32[100] = "\n\t\t\t\t ";
        strcat(H32, playerTwo);
        char H33[] = " YOU CHEATED...OVERWRITING NOT ALLOWED \n";
        strcat(H32, H33);
        for (int i = 0; i < strlen(H32); i++)
        {
            Sleep(8);
            printf("%c", H32[i]); //  (playerTwo) YOU CHEATED...OVERWRITING NOT ALLOWED
        }

        char H34[100] = "\n\t\t\t\t ";
        strcat(H34, playerTwo);
        char H35[] = "'s TURN ENTER POSITION OTHER THAN ";
        strcat(H34, H35);
        for (int i = 0; i < strlen(H34); i++)
        {
            Sleep(8);
            printf("%c", H34[i]); // (playerOne)'s TURN ENTER POSITION OTHER THAN n1
        }
        printf("%d : ", n2);
        scanf("%d", &n2);
        printf("\n");
        while (n2 <= 0 || n2 > 9)
        {
            for (int i = 0; i < strlen(H30); i++)
            {
                Sleep(8);
                printf("%c", H30[i]); // WRONG POSITION...RE-ENTER FROM 1-9 :
            }
            scanf("%d", &n2);
        }
    }
    postions[index_pos] = n2;
    index_pos++;
    ArrayPositions[n2 - 1] = ch2;
}

void check() // tic-tac-toe checking winner function
{

    char H31[60] = "\n\n\t\t\t\t\t\t\t\t\t ";
    strcat(H31, playerOne);
    char H32[] = " WON THE GAME...!!!\n"; // concatenates (playerOne) &  WON THE GAME...!!!
    strcat(H31, H32);

    char H33[60] = "\n\n\t\t\t\t\t\t\t\t\t ";
    strcat(H33, playerTwo);
    char H34[] = " WON THE GAME...!!!\n"; // concatenates (playerTwo) &  WON THE GAME...!!!
    strcat(H33, H34);

    if ((ArrayPositions[0] == ch1 && ArrayPositions[3] == ch1 && ArrayPositions[6] == ch1))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H31); i++)
        {
            Sleep(8);
            printf("%c", H31[i]); // (playerOne) WON THE GAME...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }
    else if ((ArrayPositions[0] == ch2 && ArrayPositions[3] == ch2 && ArrayPositions[6] == ch2))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H33); i++)
        {
            Sleep(8);
            printf("%c", H33[i]); // (playerTwo) WON THE GAME...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }
    else if ((ArrayPositions[1] == ch1 && ArrayPositions[4] == ch1 && ArrayPositions[7] == ch1))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H31); i++)
        {
            Sleep(8);
            printf("%c", H31[i]); // (playerOne) WON THE GAME...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }
    else if ((ArrayPositions[1] == ch2 && ArrayPositions[4] == ch2 && ArrayPositions[7] == ch2))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H33); i++)
        {
            Sleep(8);
            printf("%c", H33[i]); // (playerTwo) WON THE GAME...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }
    else if ((ArrayPositions[2] == ch1 && ArrayPositions[5] == ch1 && ArrayPositions[8] == ch1))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H31); i++)
        {
            Sleep(8);
            printf("%c", H31[i]); // (playerOne) WON THE GAME...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }
    else if ((ArrayPositions[2] == ch2 && ArrayPositions[5] == ch2 && ArrayPositions[8] == ch2))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H33); i++)
        {
            Sleep(8);
            printf("%c", H33[i]); // (playerTwo) WON THE GAME...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }
    else if ((ArrayPositions[0] == ch1 && ArrayPositions[1] == ch1 && ArrayPositions[2] == ch1))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H31); i++)
        {
            Sleep(8);
            printf("%c", H31[i]); // (playerOne) WON THE GAME...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }
    else if ((ArrayPositions[0] == ch2 && ArrayPositions[1] == ch2 && ArrayPositions[2] == ch2))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H33); i++)
        {
            Sleep(8);
            printf("%c", H33[i]); // (playerTwo) WON THE GAME...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }
    else if ((ArrayPositions[3] == ch1 && ArrayPositions[4] == ch1 && ArrayPositions[5] == ch1))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H31); i++)
        {
            Sleep(8);
            printf("%c", H31[i]); // (playerOne) WON THE GAME...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }
    else if ((ArrayPositions[3] == ch2 && ArrayPositions[4] == ch2 && ArrayPositions[5] == ch2))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H33); i++)
        {
            Sleep(8);
            printf("%c", H33[i]); // (playerTwo) WON THE GAME...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }
    else if ((ArrayPositions[6] == ch1 && ArrayPositions[7] == ch1 && ArrayPositions[8] == ch1))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H31); i++)
        {
            Sleep(8);
            printf("%c", H31[i]); // (playerOne) WON THE GAME...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }
    else if ((ArrayPositions[6] == ch2 && ArrayPositions[7] == ch2 && ArrayPositions[8] == ch2))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H33); i++)
        {
            Sleep(8);
            printf("%c", H33[i]); // (playerTwo) WON THE GAME...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }
    else if ((ArrayPositions[0] == ch1 && ArrayPositions[4] == ch1 && ArrayPositions[8] == ch1))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H31); i++)
        {
            Sleep(8);
            printf("%c", H31[i]); // (playerOne) WON THE GAME...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }
    else if ((ArrayPositions[0] == ch2 && ArrayPositions[4] == ch2 && ArrayPositions[8] == ch2))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H33); i++)
        {
            Sleep(8);
            printf("%c", H33[i]); // (playerTwo) WON THE GAME...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }
    else if ((ArrayPositions[2] == ch1 && ArrayPositions[4] == ch1 && ArrayPositions[6] == ch1))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H31); i++)
        {
            Sleep(8);
            printf("%c", H31[i]); // (playerOne) WON THE GAME...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }
    else if ((ArrayPositions[2] == ch2 && ArrayPositions[4] == ch2 && ArrayPositions[6] == ch2))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H33); i++)
        {
            Sleep(8);
            printf("%c", H33[i]); // (playerTwo) WON THE GAME...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }

    if ((turn == 8 || turn == 9) && success != 1)
    {
        char H41[] = "\n\n\t\t\t\t\t\t\t\t\t IT'S A TIE...!!!\n";
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(H41); i++)
        {
            Sleep(8);
            printf("%c", H41[i]); // (IT'S A TIE...!!!
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        success = 1;
    }
}

int main()
{
newstart:
    printf("\n\t\t\t\t");
    for (int i = 0; i < 120; i++)
    {
        Sleep(10);
        printf("%c", design); // design=178
    }
    printf("\n\t\t\t\t");
    for (int i = 0; i < 45; i++)
    {
        Sleep(10);
        printf("%c", design); // design=178
    }
    for (int i = 0; i < strlen(H1); i++)
    {
        Sleep(10);
        printf("%c", H1[i]); // WELCOME TO TIC-TAC-TOE GAME
    }
    for (int i = 0; i < 46; i++)
    {
        Sleep(10);
        printf("%c", design); // design=178
    }
    printf("\n\t\t\t\t");
    for (int i = 0; i < 120; i++)
    {
        Sleep(10);
        printf("%c", design); // design=178
    }
    for (int i = 0; i < strlen(H2); i++)
    {
        Sleep(10);
        printf("%c", H2[i]); // RULES ARE SIMPLE :
    }
    for (int i = 0; i < strlen(H3); i++)
    {
        Sleep(10);
        printf("%c", H3[i]); // 1.THE GAME IS PLAYED ON A GRID OF 3X3 SQUARES.
    }
    for (int i = 0; i < strlen(H4); i++)
    {
        Sleep(10);
        printf("%c", H4[i]); // 2.PLAYER 1 HAS TO CHOOSE BETWEEN 'x' OR 'o' AND THE OTHER MARK LEFT WILL BE ASSIGNED TO PLAYER 2.
    }
    for (int i = 0; i < strlen(H5); i++)
    {
        Sleep(10);
        printf("%c", H5[i]); // 3.AFTER CHOOSING MARKS'S PLAYER 1 STARTS THE GAME BY MAKING MARKS ON POSITIONS (1-9).
    }
    for (int i = 0; i < strlen(H6); i++)
    {
        Sleep(10);
        printf("%c", H6[i]); // 4.THE FIRST PLAYER TO GET 3 MARKS IN ROW (UP,DOWN,ACROSS OR DIAGONALLY) WILL BE THE WINNER.
    }
    for (int i = 0; i < strlen(H7); i++)
    {
        Sleep(10);
        printf("%c", H7[i]); // 5.IF A PLAYER TRIES TO MARK A POSITION WHICH IS ALREADY MARKED IT WILL BE CONSIDERED AS CHEATING .
    }
    for (int i = 0; i < strlen(H8); i++)
    {
        Sleep(10);
        printf("%c", H8[i]); // 6.WHEN ALL 9 SQUARES ARE FULL,THE GAME IS OVER.IF NO PLAYER HAS 3 MARKS IN A ROW,THE GAME ENDS IN A TIE.
    }
    printf("\n\t\t\t\t");
    for (int i = 0; i < 120; i++)
    {
        Sleep(10);
        printf("%c", design); // design=178
    }

    char g2H9[] = "\n\n\t\t\t\t ENTER PLAYER 1 NAME : ";
    for (int i = 0; i < strlen(g2H9); i++)
    {
        Sleep(8);
        printf("%c", g2H9[i]); // ENTER PLAYER 1 NAME :
    }

    scanf("%s", playerOne);
    getchar();
    char H10[] = "\n\t\t\t\t ENTER PLAYER 1's MARK (x or o) : ";
    for (int i = 0; i < strlen(H10); i++)
    {
        Sleep(8);
        printf("%c", H10[i]); // ENTER PLAYER 1's MARK (x or o) :
    }
    scanf("%c", &ch1);
    getchar();
    char H11[] = "\n\t\t\t\t WRONG INPUT...RE-ENTER PLAYER 1's MARK (x or o) : ";
    if (ch1 == 'x')
    {
        ch2 = 'o';
    }
    else if (ch1 == 'X')
    {
        ch2 = 'O';
    }
    else
    {
        while (ch1 != 'x' && ch1 != 'X' && ch1 != 'o' && ch1 != 'O')
        { // this loop prevents user from giving an input other than X,O,x,o
            for (int i = 0; i < strlen(H11); i++)
            {
                Sleep(8);
                printf("%c", H11[i]); // WRONG INPUT...RE-ENTER PLAYER 1's MARK (x or o) :
            }
            scanf("%c", &ch1);
            getchar();
        }
        if (ch1 == 'x')
        {
            ch2 = 'o';
        }
        else if (ch1 == 'X')
        {
            ch2 = 'O';
        }
        else if (ch1 == 'O')
        {
            ch2 = 'X';
        }
        else if (ch1 == 'o')
        {
            ch2 = 'x';
        }
    }
    char H12[] = "\n\t\t\t\t ENTER PLAYER 2 NAME : ";
    for (int i = 0; i < strlen(H12); i++)
    {
        Sleep(8);
        printf("%c", H12[i]); // ENTER PLAYER 2 NAME :
    }
    scanf("%s", playerTwo);

    char H13[] = "\n\t\t\t\t PLAYER NAMES CAN'T BE SAME !!\n\n\t\t\t\t RE-ENTER PLAYER 2 NAME : ";

    if (strcmp(playerOne, playerTwo) == 0)
    { // this if and while combination prevents same player name input
        while (strcmp(playerOne, playerTwo) == 0)
        {
            for (int i = 0; i < strlen(H13); i++)
            {
                Sleep(8);
                printf("%c", H13[i]); // PLAYER NAMES CAN'T BE SAME !! RE-ENTER PLAYER 2 NAME :
            }
            scanf("%s", playerTwo);
        }
    }
    printf("\n\t\t\t\t ");
    for (int i = 0; i < 90; i++)
    {
        Sleep(8);
        printf("-"); // ------------------------
    }

    char H14[100] = "\n\t\t\t\t PLAYER 1 NAME : ";
    strcat(H14, playerOne);
    char H15[] = " & MARK : ";
    strcat(H14, H15);
    for (int i = 0; i < strlen(H14); i++)
    {
        Sleep(8);
        printf("%c", H14[i]); // PLAYER 1 NAME : playerOne & MARK ch1
    }
    printf("%c", ch1);

    char H16[100] = "\n\t\t\t\t PLAYER 2 NAME : ";
    strcat(H16, playerTwo);
    char H17[] = " & MARK : ";
    strcat(H16, H17);
    for (int i = 0; i < strlen(H16); i++)
    {
        Sleep(8);
        printf("%c", H16[i]); // PLAYER 2 NAME : playerTwo & MARK ch2
    }
    printf("%c", ch2);

    printf("\n\t\t\t\t ");
    for (int i = 0; i < 90; i++)
    {
        Sleep(8);
        printf("-"); // -----------------------------------
    };
    printf("\n");

    display();
    for (int t = 1; t <= 4; t++)
    {
        p1_turn();
        turn++;
        display();
        check();

        if (success == 1)
        {
            newgame();
        }
        if (start == 0)
        {
            start = -1;
            goto newstart;
        }
        if (redirect == 1)
        {
            redirect = 0;
            reset();
            system("cls");
            exit(0);
        }

        p2_turn();
        turn++;
        display();
        check();

        if (success == 1)
        {
            newgame();
        }
        if (start == 0)
        {
            start = -1;
            goto newstart;
        }
        if (redirect == 1)
        {
            redirect = 0;
            reset();
            system("cls");
            exit(0);
        }
    }
    return 0;
}
