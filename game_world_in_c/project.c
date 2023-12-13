#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>
#define esc 27

//----------------------- TIC-TAC-TOE GAME -----------------------------------------
int n1 = 0, n2 = 0, turn = 0, start = -1, success = -1, index_pos = 0, redirect = 0;
int postions[] = {-1, -1, -1, -1, -1, -1, -1, -1};                     // arrray to store record of positions marked by players on board
char ArrayPositions[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // array to show the positions left & postions marked
char ch1, ch2, dec;
char playerOne[15]; // string for player 1 name input
char playerTwo[15]; // string for player 2 name input

//------------------- ROCK,PAPER & SCISSORS GAME -------------
int userCounter = 0, computerCounter = 0, whatDidComputer = 0;
char name[15];
char playerInput, newGame;

//---------------- QUIZ OF C/C++ LANGUAGE ------------------------------------------------------------------------------
int count = 0, playerOnePoint = 0, playerTwoPoint = 0, timer = 59, recheck = 0, timeout = 0, restartFlag = -1, quit = -1;
FILE *fptr;
char ch, ans;
char player1[15], player2[15];

char *arr[] = {"q1.txt", "q2.txt", "q3.txt", "q4.txt", "q5.txt", "q6.txt", "q7.txt", "q8.txt", "q9.txt", "q10.txt", "q11.txt", "q12.txt", "q13.txt", "q14.txt", "q15.txt", "q16.txt", "q17.txt", "q18.txt", "q19.txt", "q20.txt", "q21.txt", "q22.txt", "q23.txt", "q24.txt", "q25.txt", "q26.txt", "q27.txt", "q28.txt", "q29.txt", "q30.txt", "q31.txt", "q32.txt", "q33.txt", "q34.txt", "q35.txt", "q36.txt", "q37.txt", "q38.txt", "q39.txt", "q40.txt", "q41.txt", "q42.txt", "q43.txt", "q44.txt", "q45.txt", "q46.txt", "q47.txt", "q48.txt", "q49.txt", "q50.txt"};

char *tieArr[] = {"tq1.txt", "tq2.txt", "tq3.txt", "tq4.txt", "tq5.txt", "tq6.txt", "tq7.txt", "tq8.txt", "tq9.txt", "tq10.txt", "tq11.txt", "tq12.txt"};

//-------------- Quiz double question prevention array ----------------------------------------------------------------------------------------
int overwriteArray[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
int overwriteTieArray[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
int index1 = 0;
int index2 = 0;

//------------ GUESS THE NUMBER GAME -------------
int number = 0, guess = 0, attempts = 0, flag = 0;
char wantToPlayAgain;

//---------------- GUESS THE FRUIT GAME --------------------------------------------------
char input[20];
char playAgain;
int userInput = 0;
char *str[] = {"APPLE", "BANANA", "WATERMELON", "FIG", "MANGO", "GUAVA", "GRAPES", "AMLA"};

//----------- main function declarations --------------------------
int choice = 0;
char design = 178;
char head[] = "\n\n\t\t\t\t\t\t\t\t     WELCOME TO THE GAME WORLD";
char h1[] = "\n\n\t\t\t\t\t\t\t\t   1. ROCK PAPER SCISSORS\n";
char h2[] = "\n\t\t\t\t\t\t\t\t   2. TIC TAC TOE\n";
char h3[] = "\n\t\t\t\t\t\t\t\t   3. C/C++ QUIZ COMPETITON\n";
char h4[] = "\n\t\t\t\t\t\t\t\t   4. GUESS THE NUMBER\n";
char h5[] = "\n\t\t\t\t\t\t\t\t   5. GUESS THE FRUIT\n";
char h6[] = "\n\t\t\t\t\t\t\t\t   6. EXIT THE PROGRAM\n";
char h7[] = "\n\n\t\t\t\t\t\t\t\t   ENTER YOUR CHOICE : ";
char h8[] = "\n\n\t\t\t\t\t\t\t\t   WRONG INPUT...\n\n\t\t\t\t\t\t\t\t   RE-ENTER YOUR CHOICE (FROM 1 TO 6 ) : ";

char Loading[] = "LOADING...";
char bye[] = "\n\n\t\t\t\t BYE BYE...SEE YOU AGAIN...!!!\n";
char returnToMainMenu[] = "\n\n\t\t\t\t PRESS ENTER TO GO ON MAIN MENU...";
char redirecting[] = "\n\n\t\t\t\t REDIRECTING...TO MAIN MENU...";

char g1H1[] = " WELCOME TO ROCK,PAPER & SCISSORS GAME ";
char g1H2[] = "\n\n\t\t\t\t RULES ARE SIMPLE :";
char g1H3[] = "\n\t\t\t\t 1. ROCK VS SCISSORS = ROCK WINS";
char g1H4[] = "\n\t\t\t\t 2. PAPER VS SCISSORS = SCISSORS WINS";
char g1H5[] = "\n\t\t\t\t 3. PAPER VS ROCK = PAPER WINS";
char g1H6[] = "\n\t\t\t\t 4. THERE WILL BE 3 TURNS AND PLAYER WITH HIGHEST POINTS WILL BE THE WINNER ";
char g1H7[] = "\n\t\t\t\t 5. ENTER R = ROCK, P = PAPER, S = SCISSORS\n";
char g1H8[] = "\n\n\t\t\t\t ENTER YOUR NAME : ";

char g2H1[] = " WELCOME TO TIC-TAC-TOE GAME ";
char g2H2[] = "\n\n\t\t\t\t RULES ARE SIMPLE :";
char g2H3[] = "\n\t\t\t\t 1. THE GAME IS PLAYED ON A GRID OF 3X3 SQUARES.";
char g2H4[] = "\n\t\t\t\t 2. PLAYER 1 HAS TO CHOOSE BETWEEN 'x' OR 'o' AND THE OTHER MARK LEFT WILL BE ASSIGNED TO PLAYER 2.";
char g2H5[] = "\n\t\t\t\t 3. AFTER CHOOSING MARKS'S PLAYER 1 STARTS THE GAME BY MAKING MARKS ON POSITIONS (1-9).";
char g2H6[] = "\n\t\t\t\t 4. THE FIRST PLAYER TO GET 3 MARKS IN ROW (UP,DOWN,ACROSS OR DIAGONALLY) WILL BE THE WINNER.";
char g2H7[] = "\n\t\t\t\t 5. IF A PLAYER TRIES TO MARK A POSITION WHICH IS ALREADY MARKED IT WILL BE CONSIDERED AS CHEATING.";
char g2H8[] = "\n\t\t\t\t 6. WHEN ALL 9 SQUARES ARE FULL,THE GAME IS OVER.IF NO PLAYER HAS 3 MARKS IN A ROW,THE GAME ENDS IN A TIE.\n";

char g3H1[] = " WELCOME TO QUIZ OF C/C++ LANGUAGE ";
char g3H2[] = "\n\n\t\t\t\tRULES ARE SIMPLE : ";
char g3H3[] = "\n\t\t\t\t1. THERE WILL TOTAL 5 QUESTIONS WITH 4 OPTIONS.";
char g3H4[] = "\n\t\t\t\t2. ONLY ONE OPTION IS CORRECT.";
char g3H5[] = "\n\t\t\t\t3. PLAYER WITH HIGHEST SCORE WILL WIN.";
char g3H6[] = "\n\t\t\t\t4. FIRST PLAYER 1 WILL GIVE ANSWERS TO 5 QUESTIONS THEN PLAYER 2 WILL ANSWER NEXT 5 QUESTIONS.";
char g3H7[] = "\n\t\t\t\t5. 60 SECS TIME WILL BE GIVEN TO EACH QUESTION, COUNTDOWN WLL START AS SOON AS QUESTION IS DISPLAYED.";
char g3H8[] = "\n\t\t\t\t6. IF THERE IS A TIE BETWEEN SCORE OF PLAYER 1 & PLAYER 2, THEN THERE WILL BE AN TIE BREAKER ROUND.\n";
char g3H9[] = "\n\t\t\t\t7. PRESS ESC KEY TO QUIT THE QUIZ\n";

char g3TH1[] = " WELCOME TIE BREAKER ROUND ";
char g3TH2[] = "\n\n\t\t\t\tRULES OF TIE BREAKER ROUND ARE :";
char g3TH3[] = "\n\t\t\t\t1. THERE WILL BE TOTAL 3 QUESTIONS WITH 4 OPTIONS IN THIS ROUND.";
char g3TH4[] = "\n\t\t\t\t2. ONLY ONE OPTION IS CORRECT.";
char g3TH5[] = "\n\t\t\t\t3. TO WIN THIS ROUND PLAYER SHOULD SCORE MINIMUM 3 POINTS OUT OF 5.";
char g3TH6[] = "\n\t\t\t\t4. PLAYER 1 WILL GIVE ANSWERS TO 5 QUESTIONS FIRST THEN PLAYER 2 WILL ANSWER NEXT 5 QUESTIONS.";
char g3TH7[] = "\n\t\t\t\t5. 60 SECS TIME WILL BE GIVEN TO EACH QUESTION, COUNTDOWN WLL START AS SOON AS QUESTION IS DISPLAYED.\n";

char g4H1[] = " WELCOME TO GUESS THE NUMBER GAME ";
char g4H2[] = "\n\n\t\t\t\t RULES ARE SIMPLE : ";
char g4H3[] = "\n\t\t\t\t 1. THE COMPUTER WILL SELECT A NUMBER (FROM 1 TO 10) & YOU HAVE TO GUESS THE NUMBER.";
char g4H4[] = "\n\t\t\t\t 2. YOU WILL BE GIVEN 5 ATTEMPTS TO GUESS THE CORRECT NUMBER.";
char g4H5[] = "\n\t\t\t\t 3. IF YOU GUESSED THE NUMBER IN 5 ATTEMPTS YOU ARE THE WINNER.\n";

char g5H1[] = " WELCOME TO GUESS THE FRUIT GAME ";
char g5H2[] = "\n\n\t\t\t\t RULES ARE SIMPLE : ";
char g5H3[] = "\n\t\t\t\t 1. THERE WILL A LIST OF FRUITS.";
char g5H4[] = "\n\t\t\t\t 2. YOU WILL BE PROVIDED WITH A HINT TO GUESS THE FRUIT.";
char g5H5[] = "\n\t\t\t\t 3. IF YOU GUESSED THE FRUIT IN ONLY 1 ATTEMPT THEN YOU ARE THE WINNER.";
char g5H6[] = "\n\t\t\t\t 4. ENTER THE SERIAL NUMBER FROM THE LIST.\n";

void quizAgain()
{
    char g2H35[] = "\n\n\t\t\t\tSTART A NEW GAME : (Y FOR YES & N FOR NO) : ";
    for (int i = 0; i < strlen(g2H35); i++)
    {
        Sleep(8);
        printf("%c", g2H35[i]);
    }
    scanf("%c", &dec);
    getchar();
    char g2H36[] = "\n\t\t\t\t WRONG INPUT... TO START A NEW GAME CHOOSE Y FOR YES & N FOR NO : ";
    while (dec != 'Y' && dec != 'N' && dec != 'y' && dec != 'n')
    {
        for (int i = 0; i < strlen(g2H36); i++)
        {
            Sleep(8);
            printf("%c", g2H36[i]);
        }
        scanf("%c", &dec);
        getchar();
    }
    printf("\n\n");
    if (dec == 'Y' || dec == 'y')
    {
        restartFlag = 1;
        playerOnePoint = 0, playerTwoPoint = 0;
    }
    else if (dec == 'n' || dec == 'N')
    {
        restartFlag = 0;
    }
}

void quitGame()
{
    playerOnePoint = 0, playerTwoPoint = 0;
    char quitH[] = "\n\t\t\t\t  YOU PRESSED ESC KEY...QUTTING THE C/C++ QUIZ COMPETITION...";
    for (int i = 0; i < strlen(quitH); i++)
    {
        Sleep(8);
        printf("%c", quitH[i]);
    }
    quizAgain();
}

void byeBye()
{
    printf("\n\t\t\t\t");
    for (int i = 0; i < 100; i++)
    {
        Sleep(8);
        printf("%c", design); // design =178
    }
    for (int i = 0; i < strlen(bye); i++)
    {
        Sleep(10);
        printf("%c", bye[i]); // BYE BYE...SEE YOU AGAIN...!!!
    }
    for (int i = 0; i < strlen(returnToMainMenu); i++)
    {
        Sleep(8);
        printf("%c", returnToMainMenu[i]); // PRESS ENTER TO GO ON MAIN MENU...
    }
    getchar();
    for (int i = 0; i < strlen(redirecting); i++)
    {
        Sleep(8);
        printf("%c", redirecting[i]); // REDIRECTING...TO MAIN MENU...
    }
    for (int i = 0; i < 70; i++)
    {
        Sleep(50);
        printf("%c", design); // design = 178
    }
    Sleep(500);
}

int gen_one() //  50 quiz questions random number generator funtion
{
    int temp1 = 0;
    srand(time(NULL));   // this function gives a different seed value everytime, for the random generator function,as time changes every time the fn is called
    temp1 = rand() % 50; // random number generator inbuilt function in library which generators number from 0 to 50
    for (int a = 0; a < index1; a++)
    {
        if (temp1 == overwriteArray[a])
        {
            srand(time(NULL));
            temp1 = rand() % 50;
            a = -1;
        }
    }
    overwriteArray[index1] = temp1;
    index1++;
    return temp1;
}

int gen_two() //  12 tie breaker round quiz questions random number generator funtion
{
    int temp2 = 0;
    srand(time(NULL));
    temp2 = rand() % 12; // random number generator inbuilt function in library which generators number from 0 to 12
    for (int b = 0; b < index2; b++)
    {
        if (temp2 == overwriteTieArray[b])
        {
            srand(time(NULL));
            temp2 = rand() % 12;
            b = -1;
        }
    }
    overwriteTieArray[index2] = temp2;
    index2++;
    return temp2;
}

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
    char g2H35[] = "\n\n\t\t\t\t START A NEW GAME : (Y FOR YES & N FOR NO) : ";
    for (int i = 0; i < strlen(g2H35); i++)
    {
        Sleep(8);
        printf("%c", g2H35[i]);
    }
    getchar();
    scanf("%c", &dec);
    getchar();
    char g2H36[] = "\n\t\t\t\t WRONG INPUT... TO START A NEW GAME CHOOSE Y FOR YES & N FOR NO : ";
    while (dec != 'Y' && dec != 'N' && dec != 'y' && dec != 'n')
    {
        for (int i = 0; i < strlen(g2H36); i++)
        {
            Sleep(8);
            printf("%c", g2H36[i]);
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
    char g2H18[50] = "";
    strcat(g2H18, playerOne);
    char g2H19[] = "'s TURN ";
    strcat(g2H18, g2H19);
    for (int i = 0; i < strlen(g2H18); i++)
    {
        Sleep(8);
        printf("%c", g2H18[i]); // (playerOne)'s TURN
    }
    char g2H20[] = "\n\t\t\t\t ENTER POSITION : ";
    for (int i = 0; i < strlen(g2H20); i++)
    {
        Sleep(8);
        printf("%c", g2H20[i]); // ENTER POSITION :
    }
    scanf("%d", &n1);
    char g2H21[] = "\n\t\t\t\t WRONG POSITION...RE-ENTER FROM 1-9 : ";
    while (n1 <= 0 || n1 > 9)
    {
        for (int i = 0; i < strlen(g2H21); i++)
        {
            Sleep(8);
            printf("%c", g2H21[i]); // WRONG POSITION...RE-ENTER FROM 1-9 :
        }
        scanf("%d", &n1);
    }

    while (isTrue(n1))
    {
        char g2H22[] = "\n\t\t\t\t ----------------------------------------------";
        for (int i = 0; i < strlen(g2H22); i++)
        {
            Sleep(8);
            printf("%c", g2H22[i]); //----------------------
        }

        char g2H23[100] = "\n\t\t\t\t ";
        strcat(g2H23, playerOne);
        char g2H24[] = " YOU CHEATED...OVERWRITING NOT ALLOWED \n";
        strcat(g2H23, g2H24);
        for (int i = 0; i < strlen(g2H23); i++)
        {
            Sleep(8);
            printf("%c", g2H23[i]); // (playerOne) YOU CHEATED...OVERWRITING NOT ALLOWED
        }

        char g2H25[100] = "\n\t\t\t\t ";
        strcat(g2H25, playerOne);
        char g2H26[] = "'s TURN ENTER POSITION OTHER THAN ";
        strcat(g2H25, g2H26);
        for (int i = 0; i < strlen(g2H25); i++)
        {
            Sleep(8);
            printf("%c", g2H25[i]); // (playerOne)'s TURN ENTER POSITION OTHER THAN n1
        }
        printf("%d : ", n1);
        scanf("%d", &n1);
        printf("\n");
        while (n1 <= 0 || n1 > 9)
        {
            for (int i = 0; i < strlen(g2H21); i++)
            {
                Sleep(8);
                printf("%c", g2H21[i]); // WRONG POSITION...RE-ENTER FROM 1-9 :
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
    char g2H27[50] = "";
    strcat(g2H27, playerTwo);
    char g2H28[] = "'s TURN ";
    strcat(g2H27, g2H28);
    for (int i = 0; i < strlen(g2H27); i++)
    {
        Sleep(8);
        printf("%c", g2H27[i]);
    }
    char g2H29[] = "\n\t\t\t\t ENTER POSITION : ";
    for (int i = 0; i < strlen(g2H29); i++)
    {
        Sleep(8);
        printf("%c", g2H29[i]); // ENTER POSITION :
    }
    scanf("%d", &n2);
    char g2H30[] = "\n\t\t\t\t WRONG POSITION...RE-ENTER FROM 1-9 : ";
    char g2H31[] = "\n\t\t\t\t ----------------------------------------------\n";

    while (n2 <= 0 || n2 > 9)
    {
        for (int i = 0; i < strlen(g2H30); i++)
        {
            Sleep(8);
            printf("%c", g2H30[i]); // WRONG POSITION...RE-ENTER FROM 1-9 :
        }
        scanf("%d", &n2);
    }

    while (isTrue(n2))
    {
        for (int i = 0; i < strlen(g2H31); i++)
        {
            Sleep(8);
            printf("%c", g2H31[i]); //----------------------
        }

        char g2H32[100] = "\n\t\t\t\t ";
        strcat(g2H32, playerTwo);
        char g2H33[] = " YOU CHEATED...OVERWRITING NOT ALLOWED \n";
        strcat(g2H32, g2H33);
        for (int i = 0; i < strlen(g2H32); i++)
        {
            Sleep(8);
            printf("%c", g2H32[i]); //  (playerTwo) YOU CHEATED...OVERWRITING NOT ALLOWED
        }

        char g2H34[100] = "\n\t\t\t\t ";
        strcat(g2H34, playerTwo);
        char g2H35[] = "'s TURN ENTER POSITION OTHER THAN ";
        strcat(g2H34, g2H35);
        for (int i = 0; i < strlen(g2H34); i++)
        {
            Sleep(8);
            printf("%c", g2H34[i]); // (playerOne)'s TURN ENTER POSITION OTHER THAN n1
        }
        printf("%d : ", n2);
        scanf("%d", &n2);
        printf("\n");
        while (n2 <= 0 || n2 > 9)
        {
            for (int i = 0; i < strlen(g2H30); i++)
            {
                Sleep(8);
                printf("%c", g2H30[i]); // WRONG POSITION...RE-ENTER FROM 1-9 :
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

    char g2H31[60] = "\n\n\t\t\t\t\t\t\t\t\t ";
    strcat(g2H31, playerOne);
    char g2H32[] = " WON THE GAME...!!!\n"; // concatenates (playerOne) &  WON THE GAME...!!!
    strcat(g2H31, g2H32);

    char g2H33[60] = "\n\n\t\t\t\t\t\t\t\t\t ";
    strcat(g2H33, playerTwo);
    char g2H34[] = " WON THE GAME...!!!\n"; // concatenates (playerTwo) &  WON THE GAME...!!!
    strcat(g2H33, g2H34);

    if ((ArrayPositions[0] == ch1 && ArrayPositions[3] == ch1 && ArrayPositions[6] == ch1))
    {
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(g2H31); i++)
        {
            Sleep(8);
            printf("%c", g2H31[i]); // (playerOne) WON THE GAME...!!!
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
        for (int i = 0; i < strlen(g2H33); i++)
        {
            Sleep(8);
            printf("%c", g2H33[i]); // (playerTwo) WON THE GAME...!!!
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
        for (int i = 0; i < strlen(g2H31); i++)
        {
            Sleep(8);
            printf("%c", g2H31[i]); // (playerOne) WON THE GAME...!!!
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
        for (int i = 0; i < strlen(g2H33); i++)
        {
            Sleep(8);
            printf("%c", g2H33[i]); // (playerTwo) WON THE GAME...!!!
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
        for (int i = 0; i < strlen(g2H31); i++)
        {
            Sleep(8);
            printf("%c", g2H31[i]); // (playerOne) WON THE GAME...!!!
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
        for (int i = 0; i < strlen(g2H33); i++)
        {
            Sleep(8);
            printf("%c", g2H33[i]); // (playerTwo) WON THE GAME...!!!
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
        for (int i = 0; i < strlen(g2H31); i++)
        {
            Sleep(8);
            printf("%c", g2H31[i]); // (playerOne) WON THE GAME...!!!
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
        for (int i = 0; i < strlen(g2H33); i++)
        {
            Sleep(8);
            printf("%c", g2H33[i]); // (playerTwo) WON THE GAME...!!!
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
        for (int i = 0; i < strlen(g2H31); i++)
        {
            Sleep(8);
            printf("%c", g2H31[i]); // (playerOne) WON THE GAME...!!!
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
        for (int i = 0; i < strlen(g2H33); i++)
        {
            Sleep(8);
            printf("%c", g2H33[i]); // (playerTwo) WON THE GAME...!!!
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
        for (int i = 0; i < strlen(g2H31); i++)
        {
            Sleep(8);
            printf("%c", g2H31[i]); // (playerOne) WON THE GAME...!!!
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
        for (int i = 0; i < strlen(g2H33); i++)
        {
            Sleep(8);
            printf("%c", g2H33[i]); // (playerTwo) WON THE GAME...!!!
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
        for (int i = 0; i < strlen(g2H31); i++)
        {
            Sleep(8);
            printf("%c", g2H31[i]); // (playerOne) WON THE GAME...!!!
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
        for (int i = 0; i < strlen(g2H33); i++)
        {
            Sleep(8);
            printf("%c", g2H33[i]); // (playerTwo) WON THE GAME...!!!
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
        for (int i = 0; i < strlen(g2H31); i++)
        {
            Sleep(8);
            printf("%c", g2H31[i]); // (playerOne) WON THE GAME...!!!
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
        for (int i = 0; i < strlen(g2H33); i++)
        {
            Sleep(8);
            printf("%c", g2H33[i]); // (playerTwo) WON THE GAME...!!!
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
        char g2H41[] = "\n\n\t\t\t\t\t\t\t\t\t IT'S A TIE...!!!\n";
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design); // design = 178
        }
        for (int i = 0; i < strlen(g2H41); i++)
        {
            Sleep(8);
            printf("%c", g2H41[i]); // (IT'S A TIE...!!!
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
    //------------------------------------------ MENU ------------------------------------------------------------------
menu:
    printf("\n\n\n\t\t\t\t\t\t\t ");
    for (int i = 0; i < 50; i++)
    {
        Sleep(10);
        printf("%c", design); // design=178
    }
    for (int i = 0; i < strlen(head); i++)
    {
        Sleep(10);
        printf("%c", head[i]); // WELCOME TO THE GAME WORLD
    }
    printf("\n\n\t\t\t\t\t\t\t ");
    for (int i = 0; i < 50; i++)
    {
        Sleep(10);
        printf("%c", design); // design=178
    }
    for (int i = 0; i < strlen(h1); i++)
    {
        Sleep(10);
        printf("%c", h1[i]); // 1.ROCK PAPER SCISSORS
    }
    for (int i = 0; i < strlen(h2); i++)
    {
        Sleep(10);
        printf("%c", h2[i]); // 2.TIC TAC TOE
    }
    for (int i = 0; i < strlen(h3); i++)
    {
        Sleep(10);
        printf("%c", h3[i]); // 3.C/C++ QUIZ COMPETITON
    }
    for (int i = 0; i < strlen(h4); i++)
    {
        Sleep(10);
        printf("%c", h4[i]); // 4.GUESS THE NUMBER
    }
    for (int i = 0; i < strlen(h5); i++)
    {
        Sleep(10);
        printf("%c", h5[i]); // 5.GUESS THE FRUIT
    }
    for (int i = 0; i < strlen(h6); i++)
    {
        Sleep(10);
        printf("%c", h6[i]); // 6.EXIT THE PROGRAM
    }
    printf("\n\n\t\t\t\t\t\t\t");
    for (int i = 0; i < 50; i++)
    {
        Sleep(10);
        printf("%c", design); // design=178
    }
    for (int i = 0; i < strlen(h7); i++)
    {
        Sleep(10);
        printf("%c", h7[i]); // ENTER YOUR CHOICE
    }

    scanf("%d", &choice);

    while (choice <= 0 || choice >= 7) // this loop prevents user input other than 1 to 6
    {
        for (int i = 0; i < strlen(h8); i++)
        {
            Sleep(8);
            printf("%c", h8[i]); // WRONG INPUT...RE-ENTER YOUR CHOICE (FROM 1 TO 6 ) :
        }
        scanf("%d", &choice);
    }

    switch (choice)
    {
        //--------------------------------------------------------- GAME 1 ROCK, PAPER & SCISSORS ---------------------------------------------------------------------

    case 1:
        printf("\n\n\t\t\t\t\t\t\t ");
        for (int i = 0; i < strlen(Loading); i++)
        {
            Sleep(100);               // the pgm sleeps for 100 millisecs
            printf("%c", Loading[i]); // LOADING...
        }
        for (int i = 0; i < 39; i++)
        {
            Sleep(140);           // the pgm sleeps for 140 millisecs
            printf("%c", design); // design=178
        }
        Sleep(500);
        system("cls"); // clears the console screen

        do
        {
            printf("\n\t\t\t\t");
            for (int i = 0; i < 100; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            printf("\n\t\t\t\t");
            for (int i = 0; i < 30; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            for (int i = 0; i < strlen(g1H1); i++)
            {
                Sleep(10);
                printf("%c", g1H1[i]); // WELCOME TO ROCK,PAPER & SCISSORS GAME
            }
            for (int i = 0; i < 31; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            printf("\n\t\t\t\t");
            for (int i = 0; i < 100; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            for (int i = 0; i < strlen(g1H2); i++)
            {
                Sleep(10);
                printf("%c", g1H2[i]); // RULES ARE SIMPLE :
            }
            for (int i = 0; i < strlen(g1H3); i++)
            {
                Sleep(10);
                printf("%c", g1H3[i]); // 1. ROCK VS SCISSORS = ROCK WINS
            }
            for (int i = 0; i < strlen(g1H4); i++)
            {
                Sleep(10);
                printf("%c", g1H4[i]); // 2. PAPER VS SCISSORS = SCISSORS WINS
            }
            for (int i = 0; i < strlen(g1H5); i++)
            {
                Sleep(10);
                printf("%c", g1H5[i]); // 3. PAPER VS ROCK = PAPER WINS
            }
            for (int i = 0; i < strlen(g1H6); i++)
            {
                Sleep(10);
                printf("%c", g1H6[i]); // 4.THERE WILL BE 3 TURNS AND PLAYER WITH HIGHEST POINTS WILL BE THE WINNER
            }
            for (int i = 0; i < strlen(g1H7); i++)
            {
                Sleep(10);
                printf("%c", g1H7[i]); // 5.ENTER R = ROCK, P = PAPER,S = SCISSORS
            }
            printf("\n\t\t\t\t");
            for (int i = 0; i < 100; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            for (int i = 0; i < strlen(g1H8); i++)
            {
                Sleep(10);
                printf("%c", g1H8[i]); // ENTER YOUR NAME :
            }
            scanf("%s", name);

            char g1H9[50] = "\n\t\t\t\t ------ ";
            char g1H10[] = "'s TURN ------ ";
            strcat(g1H9, name);
            strcat(g1H9, g1H10);
            char g1H11[] = "\n\t\t\t\t CHOOSE FROM R = ROCK, P = PAPER, S = SCISSORS : ";
            char g1H12[] = "\n\t\t\t\t WRONG INPUT...RE-ENTER FROM R = ROCK, P = PAPER, S = SCISSORS : ";

            for (int f = 1; f <= 3; f++) // this loop runs 3 times as user & computer plays 3 turns
            {
                for (int i = 0; i < strlen(g1H9); i++)
                {
                    Sleep(8);
                    printf("%c", g1H9[i]); // ------ Username's Turn ------
                }
                for (int i = 0; i < strlen(g1H11); i++)
                {
                    Sleep(8);
                    printf("%c", g1H11[i]); // CHOOSE FROM R = ROCK, P = PAPER,S = SCISSORS :
                }
                getchar();
                scanf("%c", &playerInput);
                while (playerInput != 'r' && playerInput != 'R' && playerInput != 'p' && playerInput != 'P' && playerInput != 's' && playerInput != 'S')
                {                                           // this loop prevents user input other than the characters R,P,S,r,p,s
                    for (int i = 0; i < strlen(g1H12); i++) // WRONG INPUT...RE-ENTER FROM R = ROCK, P = PAPER,S = SCISSORS :
                    {
                        Sleep(8);
                        printf("%c", g1H12[i]);
                    }
                    getchar();
                    scanf("%c", &playerInput);
                }
                if (playerInput == 'r' || playerInput == 'R')
                {
                    char tempName[50];
                    strcpy(tempName, name);
                    char g1H13[] = "'s TURN : ROCK ";
                    strcat(tempName, g1H13);

                    printf("\n\t\t\t\t ");
                    for (int i = 0; i < strlen(tempName); i++)
                    {
                        Sleep(8);
                        printf("%c", tempName[i]); // (Username)'s TURN : ROCK
                    }
                }
                else if (playerInput == 'p' || playerInput == 'P')
                {
                    char tempName[50];
                    strcpy(tempName, name);
                    char g1H14[] = "'s TURN : PAPER ";
                    strcat(tempName, g1H14);
                    printf("\n\t\t\t\t ");
                    for (int i = 0; i < strlen(tempName); i++)
                    {
                        Sleep(8);
                        printf("%c", tempName[i]); // (Username)'s TURN : PAPER
                    }
                }
                else
                {
                    char tempName[50];
                    strcpy(tempName, name); // taken a temproray string to copy name in to //
                    char g1H15[] = "'s TURN : SCISSOR ";
                    strcat(tempName, g1H15);
                    printf("\n\t\t\t\t ");
                    for (int i = 0; i < strlen(tempName); i++)
                    {
                        Sleep(8);
                        printf("%c", tempName[i]); // (Username)'s TURN : SCISSOR
                    }
                }

                srand(time(NULL));            // this fn gives a different seed value for the random generator function,as time changes every time the fn is called
                whatDidComputer = rand() % 3; // random number generator inbuilt function in library which generators number from 0 to 2

                char g1H16[] = "\n\t\t\t\t !!! COMPUTER WINS !!!\n";
                char g1H17[50] = "\n\t\t\t\t !!! ";
                strcat(g1H17, name);
                char g1H18[] = " WINS !!!\n";
                strcat(g1H17, g1H18);
                char g1H19[] = "\n\t\t\t\t ----- IT'S A TIE -----\n";

                if (whatDidComputer == 0)
                {
                    char g1H20[] = "\n\t\t\t\t COMPUTER'S TURN : ROCK";
                    for (int i = 0; i < strlen(g1H20); i++)
                    {
                        Sleep(8);
                        printf("%c", g1H20[i]); // COMPUTER'S TURN : ROCK
                    }
                }
                else if (whatDidComputer == 1)
                {
                    char g1H21[] = "\n\t\t\t\t COMPUTER'S TURN : PAPER";
                    for (int i = 0; i < strlen(g1H21); i++)
                    {
                        Sleep(8);
                        printf("%c", g1H21[i]); // COMPUTER'S TURN : PAPER
                    }
                }
                else
                {
                    char g1H22[] = "\n\t\t\t\t COMPUTER'S TURN : SCISSOR";
                    for (int i = 0; i < strlen(g1H22); i++)
                    {
                        Sleep(8);
                        printf("%c", g1H22[i]); // COMPUTER'S TURN : SCISSOR
                    }
                }

                if ((playerInput == 'r' || playerInput == 'R') && whatDidComputer == 1) // paper
                {
                    for (int i = 0; i < strlen(g1H16); i++)
                    {
                        Sleep(8);
                        printf("%c", g1H16[i]); // !!! COMPUTER WINS !!!
                    }
                    computerCounter++;
                }
                else if ((playerInput == 'r' || playerInput == 'R') && whatDidComputer == 2) // scissor
                {
                    for (int i = 0; i < strlen(g1H17); i++)
                    {
                        Sleep(8);
                        printf("%c", g1H17[i]); // !!! (Username) WINS !!!
                    }
                    userCounter++;
                }
                else if ((playerInput == 'p' || playerInput == 'P') && whatDidComputer == 0) // rock
                {
                    for (int i = 0; i < strlen(g1H17); i++)
                    {
                        Sleep(8);
                        printf("%c", g1H17[i]); // !!! (Username) WINS !!!
                    }
                    userCounter++;
                }
                else if ((playerInput == 'p' || playerInput == 'P') && whatDidComputer == 2) // scissors
                {
                    for (int i = 0; i < strlen(g1H16); i++)
                    {
                        Sleep(8);
                        printf("%c", g1H16[i]); // !!! COMPUTER WINS !!!
                    }
                    computerCounter++;
                }
                else if ((playerInput == 's' || playerInput == 'S') && whatDidComputer == 0) // rock
                {
                    for (int i = 0; i < strlen(g1H16); i++)
                    {
                        Sleep(8);
                        printf("%c", g1H16[i]); // !!! COMPUTER WINS !!!
                    }
                    computerCounter++;
                }
                else if ((playerInput == 's' || playerInput == 'S') && whatDidComputer == 1) // paper
                {
                    for (int i = 0; i < strlen(g1H17); i++)
                    {
                        Sleep(8);
                        printf("%c", g1H17[i]); // !!! (Username) WINS !!!
                    }
                    userCounter++;
                }
                else
                {
                    for (int i = 0; i < strlen(g1H19); i++)
                    {
                        Sleep(8);
                        printf("%c", g1H19[i]); // ----- IT'S A TIE -----
                    }
                }
            }
            printf("\n\t\t\t\t");
            for (int i = 0; i < 100; i++)
            {
                Sleep(8);
                printf("%c", design);
            }

            char g1H23[] = "\n\n\t\t\t\t SCORE TABLE";
            for (int i = 0; i < strlen(g1H23); i++)
            {
                Sleep(8);
                printf("%c", g1H23[i]); // SCORE TABLE
            }

            char tempName2[50] = "\n\t\t\t\t ";
            strcat(tempName2, name);
            char g1H24[] = "'s SCORE : ";
            strcat(tempName2, g1H24);

            for (int i = 0; i < strlen(tempName2); i++)
            {
                Sleep(8);
                printf("%c", tempName2[i]); // (Username)'s SCORE :
            }
            printf("%d", userCounter); // (Username)'s SCORE : userCounter

            char g1H25[] = "\n\t\t\t\t COMPUTER's SCORE : ";
            for (int i = 0; i < strlen(g1H25); i++)
            {
                Sleep(8);
                printf("%c", g1H25[i]); // COMPUTER's SCORE :
            }
            printf("%d\n", computerCounter); // (Username)'s SCORE : computerCounter

            if (userCounter > computerCounter)
            {
                printf("\n\t\t\t\t");
                for (int i = 1; i <= 36; i++)
                {
                    Sleep(8);
                    printf("%c", design); // design = 178
                }

                char g1H26[200] = " THE WINNER IS ";
                strcat(g1H26, name);

                for (int i = 0; i < strlen(g1H26); i++)
                {
                    Sleep(8);
                    printf("%c", g1H26[i]); // --- THE WINNER IS (Username) ---
                }
                printf(" ");
                for (int i = 1; i <= 43; i++)
                {
                    Sleep(8);
                    printf("%c", design); // design = 178
                }
            }
            else if (computerCounter > userCounter)
            {
                printf("\n\t\t\t\t");
                for (int i = 1; i <= 36; i++)
                {
                    Sleep(8);
                    printf("%c", design); // design = 178
                }
                char g1H27[] = " THE WINNER IS THE COMPUTER ";
                for (int i = 0; i < strlen(g1H27); i++)
                {
                    Sleep(8);
                    printf("%c", g1H27[i]); // --- THE WINNER IS THE COMPUTER ---
                }
                for (int i = 1; i <= 36; i++)
                {
                    Sleep(8);
                    printf("%c", design); // design = 178
                }
            }
            else
            {
                printf("\n\t\t\t\t");
                for (int i = 1; i <= 44; i++)
                {
                    Sleep(8);
                    printf("%c", design); // design = 178
                }
                char g1H28[] = " IT'S A TIE ";
                for (int i = 0; i < strlen(g1H28); i++)
                {
                    Sleep(8);
                    printf("%c", g1H28[i]); // --- IT'S A TIE ---
                }
                for (int i = 1; i <= 44; i++)
                {
                    Sleep(8);
                    printf("%c", design); // design = 178
                }
            }

            char g1H29[] = "\n\n\t\t\t\t TO START A NEW GAME ENTER Y FOR YES OR N FOR NO : ";
            for (int i = 0; i < strlen(g1H29); i++)
            {
                Sleep(8);
                printf("%c", g1H29[i]); // TO START A NEW GAME ENTER Y FOR YES OR N FOR NO :
            }
            getchar();
            scanf("%c", &newGame);

            char g1H30[] = "\n\t\t\t\t WRONG INPUT...RE-ENTER TO START A NEW GAME ENTER Y FOR YES OR N FOR NO : ";
            while (newGame != 'Y' && newGame != 'y' && newGame != 'n' && newGame != 'N')
            { // this loop prevents user from giving an input other than Y,N,y,n
                for (int i = 0; i < strlen(g1H30); i++)
                {
                    Sleep(8);
                    printf("%c", g1H30[i]); // WRONG INPUT...RE-ENTER TO START A NEW GAME ENTER Y FOR YES OR N FOR NO :
                }
                getchar();
                scanf("%c", &newGame);
            }

            if (newGame == 'Y' || newGame == 'y')
            { // this if resets the point counter to zero and system("cls") clears the output on console
                userCounter = 0, computerCounter = 0;
                system("cls");
            }

        } while (newGame != 'N' && newGame != 'n');
        getchar();
        byeBye();
        system("cls");
        goto menu;
        break;

        //----------------------------------------------------------------------------------------------------------------------------

    case 2:
        printf("\n\n\t\t\t\t\t\t\t ");
        for (int i = 0; i < strlen(Loading); i++)
        {
            Sleep(100);
            printf("%c", Loading[i]); // LOADING...
        }
        for (int i = 0; i < 39; i++)
        {
            Sleep(140);
            printf("%c", design); // design=178
        }
        Sleep(500);
        getchar();
        system("cls");
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
        for (int i = 0; i < strlen(g2H1); i++)
        {
            Sleep(10);
            printf("%c", g2H1[i]); // WELCOME TO TIC-TAC-TOE GAME
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
        for (int i = 0; i < strlen(g2H2); i++)
        {
            Sleep(10);
            printf("%c", g2H2[i]); // RULES ARE SIMPLE :
        }
        for (int i = 0; i < strlen(g2H3); i++)
        {
            Sleep(10);
            printf("%c", g2H3[i]); // 1.THE GAME IS PLAYED ON A GRID OF 3X3 SQUARES.
        }
        for (int i = 0; i < strlen(g2H4); i++)
        {
            Sleep(10);
            printf("%c", g2H4[i]); // 2.PLAYER 1 HAS TO CHOOSE BETWEEN 'x' OR 'o' AND THE OTHER MARK LEFT WILL BE ASSIGNED TO PLAYER 2.
        }
        for (int i = 0; i < strlen(g2H5); i++)
        {
            Sleep(10);
            printf("%c", g2H5[i]); // 3.AFTER CHOOSING MARKS'S PLAYER 1 STARTS THE GAME BY MAKING MARKS ON POSITIONS (1-9).
        }
        for (int i = 0; i < strlen(g2H6); i++)
        {
            Sleep(10);
            printf("%c", g2H6[i]); // 4.THE FIRST PLAYER TO GET 3 MARKS IN ROW (UP,DOWN,ACROSS OR DIAGONALLY) WILL BE THE WINNER.
        }
        for (int i = 0; i < strlen(g2H7); i++)
        {
            Sleep(10);
            printf("%c", g2H7[i]); // 5.IF A PLAYER TRIES TO MARK A POSITION WHICH IS ALREADY MARKED IT WILL BE CONSIDERED AS CHEATING .
        }
        for (int i = 0; i < strlen(g2H8); i++)
        {
            Sleep(10);
            printf("%c", g2H8[i]); // 6.WHEN ALL 9 SQUARES ARE FULL,THE GAME IS OVER.IF NO PLAYER HAS 3 MARKS IN A ROW,THE GAME ENDS IN A TIE.
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
        char g2H10[] = "\n\t\t\t\t ENTER PLAYER 1's MARK (x or o) : ";
        for (int i = 0; i < strlen(g2H10); i++)
        {
            Sleep(8);
            printf("%c", g2H10[i]); // ENTER PLAYER 1's MARK (x or o) :
        }
        scanf("%c", &ch1);
        getchar();
        char g2H11[] = "\n\t\t\t\t WRONG INPUT...RE-ENTER PLAYER 1's MARK (x or o) : ";
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
                for (int i = 0; i < strlen(g2H11); i++)
                {
                    Sleep(8);
                    printf("%c", g2H11[i]); // WRONG INPUT...RE-ENTER PLAYER 1's MARK (x or o) :
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
        char g2H12[] = "\n\t\t\t\t ENTER PLAYER 2 NAME : ";
        for (int i = 0; i < strlen(g2H12); i++)
        {
            Sleep(8);
            printf("%c", g2H12[i]); // ENTER PLAYER 2 NAME :
        }
        scanf("%s", playerTwo);

        char g2H13[] = "\n\t\t\t\t PLAYER NAMES CAN'T BE SAME !!\n\n\t\t\t\t RE-ENTER PLAYER 2 NAME : ";

        if (strcmp(playerOne, playerTwo) == 0)
        { // this if and while combination prevents same player name input
            while (strcmp(playerOne, playerTwo) == 0)
            {
                for (int i = 0; i < strlen(g2H13); i++)
                {
                    Sleep(8);
                    printf("%c", g2H13[i]); // PLAYER NAMES CAN'T BE SAME !! RE-ENTER PLAYER 2 NAME :
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

        char g2H14[100] = "\n\t\t\t\t PLAYER 1 NAME : ";
        strcat(g2H14, playerOne);
        char g2H15[] = " & MARK : ";
        strcat(g2H14, g2H15);
        for (int i = 0; i < strlen(g2H14); i++)
        {
            Sleep(8);
            printf("%c", g2H14[i]); // PLAYER 1 NAME : playerOne & MARK ch1
        }
        printf("%c", ch1);

        char g2H16[100] = "\n\t\t\t\t PLAYER 2 NAME : ";
        strcat(g2H16, playerTwo);
        char g2H17[] = " & MARK : ";
        strcat(g2H16, g2H17);
        for (int i = 0; i < strlen(g2H16); i++)
        {
            Sleep(8);
            printf("%c", g2H16[i]); // PLAYER 2 NAME : playerTwo & MARK ch2
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
                byeBye();

                system("cls");
                goto menu;
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
                byeBye();
                system("cls");
                goto menu;
            }
        }
        break;

        //------------------------------------------------------------------ QUIZ OF C/C++ -----------------------------

    case 3:
        printf("\n\n\t\t\t\t\t\t\t");
        for (int i = 0; i < strlen(Loading); i++) // LOADING...
        {
            Sleep(100);
            printf("%c", Loading[i]);
        }
        for (int i = 0; i < 39; i++)
        {
            Sleep(140);
            printf("%c", design); // design=178
        }
        Sleep(500);
        system("cls");
    newstart1:
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(10);
            printf("%c", design); // design=178
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 32; i++)
        {
            Sleep(10);
            printf("%c", design); // design=178
        }
        for (int i = 0; i < strlen(g3H1); i++)
        {
            Sleep(10);
            printf("%c", g3H1[i]); //  WELCOME TO QUIZ OF C/C++ LANGUAGE
        }
        for (int i = 0; i < 33; i++)
        {
            Sleep(10);
            printf("%c", design); // design=178
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(10);
            printf("%c", design); // design=178
        }
        for (int i = 0; i < strlen(g3H2); i++)
        {
            Sleep(10);
            printf("%c", g3H2[i]); //  RULES ARE SIMPLE :
        }
        for (int i = 0; i < strlen(g3H3); i++)
        {
            Sleep(10);
            printf("%c", g3H3[i]); //  1. THERE WILL TOTAL 5 QUESTIONS WITH 4 OPTIONS
        }
        for (int i = 0; i < strlen(g3H4); i++)
        {
            Sleep(10);
            printf("%c", g3H4[i]); //  2. ONLY ONE OPTION IS CORRECT.
        }
        for (int i = 0; i < strlen(g3H5); i++)
        {
            Sleep(10);
            printf("%c", g3H5[i]); //  3. PLAYER WITH HIGHEST SCORE WILL WIN.
        }
        for (int i = 0; i < strlen(g3H6); i++)
        {
            Sleep(10);
            printf("%c", g3H6[i]); //  4. FIRST PLAYER WILL GIVE ANSWERS TO 5 QUESTIONS THEN PLAYER 2 WILL ANSWER NEXT 5 QUESTIONS.
        }
        for (int i = 0; i < strlen(g3H7); i++)
        {
            Sleep(10);
            printf("%c", g3H7[i]); // 5. 60 SECONDS TIME WILL BE GIVEN TO EACH QUESTION, COUNTDOWN WLL START AS SOON AS QUESTION IS DISPLAYED.
        }
        for (int i = 0; i < strlen(g3H8); i++)
        {
            Sleep(10);
            printf("%c", g3H8[i]); //  6. IF THERE IS A TIE BETWEEN SCORE OF PLAYER 1 & PLAYER 2, THEN THERE WILL BE AN TIE BREAKER ROUND.
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(10);
            printf("%c", design); // design=178
        }

        char g3H8[] = "\n\n\t\t\t\tENTER PLAYER 1 NAME : ";
        for (int i = 0; i < strlen(g3H8); i++)
        {
            Sleep(8);
            printf("%c", g3H8[i]); // ENTER PLAYER 1 NAME :
        }
        scanf("%s", player1);

        char g3H9[] = "\n\t\t\t\tENTER PLAYER 2 NAME : ";
        for (int i = 0; i < strlen(g3H9); i++)
        {
            Sleep(8);
            printf("%c", g3H9[i]); // ENTER PLAYER 2 NAME :
        }
        scanf("%s", player2);
        getchar();

        char g3H10[] = "\n\t\t\t\tPLAYER NAMES CAN'T BE SAME !!\n\t\t\t\t RE-ENTER PLAYER 2 NAME : ";
        if (strcmp(player1, player2) == 0)
        {
            while (strcmp(player1, player2) == 0)
            { // this if and while combination prevents same player name input
                for (int i = 0; i < strlen(g3H10); i++)
                {
                    Sleep(8);
                    printf("%c", g3H10[i]); // PLAYER NAMES CAN'T BE SAME !! RE-ENTER PLAYER 2 NAME :
                }
                scanf("%s", player2);
            }
        }

        char g3H11[] = "\n\n\t\t\t\t===========================================================";

        for (int g = 1; g <= 5; g++) // this loops starts the quiz for player 1 by displaying 5 questions from the txt file
        {
            printf("\n\t\t\t\t------------------------------------------------");
            printf("\n\t\t\t\t%s's QUESTION %d\n\n", player1, g);

            fptr = fopen(arr[gen_one()], "r");

            while (ch != '@')
            { // this loop prints the question character by character from the txt file opened by fopen on console
                ch = getc(fptr);
                if (ch == '@')
                    break;
                printf("%c", ch);
                if (ch == EOF)
                    break;
            }

            printf("\n\t\t\t\t------------------------------------------------\n\n");

            ans = '~';
            do
            {
                if (recheck != 1)
                {
                    printf("                                CHOOSE YOUR OPTION IN (%d) secs                                \r", timer--);
                    sleep(1);
                }
                if (kbhit())
                {
                    ans = getche();
                }
                if (ans == 'a' || ans == 'A' || ans == 'b' || ans == 'B' || ans == 'c' || ans == 'C' || ans == 'd' || ans == 'D')
                {
                    break;
                }
                if (timer == 0)
                {
                    timeout = 1;
                    break;
                }
                if (ans == esc)
                {
                    quit = 1;
                    break;
                }
                if (ans != 'A' && ans != 'B' && ans != 'C' && ans != 'D' && ans != 'a' && ans != 'b' && ans != 'c' && ans != 'd' && ans != '~')
                {
                    while (ans != 'A' && ans != 'B' && ans != 'C' && ans != 'D' && ans != 'a' && ans != 'b' && ans != 'c' && ans != 'd')
                    { // this while loop prevents user from giving an input other than A,B,C,D,a,b,c,d
                        printf("                                WRONG INPUT...CHOOSE FROM OPTION A,B,C,D CHOOSE YOUR OPTION IN (%d) secs                                \r", timer--);
                        sleep(1);
                        if (kbhit())
                        {
                            ans = getche();
                            if (ans >= 97 && ans <= 100)
                                ans -= 32;
                        }
                        if (timer == 0)
                        {
                            timeout = 1;
                            break;
                        }
                    }
                    recheck = 1;
                }
            } while (ans != '\n' && timeout != 1);

            fflush(stdin);

            if (quit == 1)
            {
                quitGame();
            }

            if (restartFlag == 0)
            {
                restartFlag = -1;
                byeBye();
                system("cls");
                goto menu;
            }
            if (restartFlag == 1)
            {
                system("cls");
                goto newstart1;
            }

            if (ans >= 97 && ans <= 100)
            { // this if converts the user input into capital if the user inputs small mcq options
                ans -= 32;
            }

            while (ch != EOF)
            { // this loop now handles the answer checking & displaying explanation of the correct answer
                ch = getc(fptr);
                if (ch == '$')
                { // scans for $ as after $ the answer of the questions is present in txt file
                    ch = getc(fptr);
                    if (ans == ch)
                    {
                        printf("\n\n\t\t\t\t====================");
                        printf("\n\t\t\t\tYOU CHOOSED OPTION %c", ch);
                        printf("\n\t\t\t\tCORRECT ANSWER...!!!");
                        printf("\n\t\t\t\t====================\n");
                        playerOnePoint++;
                        fclose(fptr);
                    }
                    else if (timeout == 1)
                    {
                        printf("\n\n\t\t\t\t=======================");
                        printf("\n\t\t\t\tTIMEOUT...YOU ARE OUT OF TIME..!!!\n");
                        printf("\n\t\t\t\tCORRECT OPTION IS %c", ch);
                        printf("\n\t\t\t\t=======================\n");
                        while (ch != EOF)
                        {
                            ch = getc(fptr);
                            if (ch == '~')
                            { // scans for the ~ and displays character by character the explanation till the EOF
                                while (ch != EOF)
                                {
                                    ch = getc(fptr);
                                    printf("%c", ch);
                                }
                            }
                        }
                        printf("\n");
                        printf("\n\t\t\t\tPRESS ENTER TO CONTINUE TO NEXT QUESTION...");
                        getchar();
                        fclose(fptr);
                    }
                    else
                    {
                        printf("\n\n\t\t\t\t=======================");
                        printf("\n\t\t\t\tWRONG ANSWER...!!!\n");
                        printf("\n\t\t\t\tCORRECT OPTION IS %c", ch);
                        printf("\n\t\t\t\t=======================\n");
                        while (ch != EOF)
                        {
                            ch = getc(fptr);
                            if (ch == '~')
                            { // scans for the ~ and displays character by character the explanation till the EOF
                                while (ch != EOF)
                                {
                                    ch = getc(fptr);
                                    printf("%c", ch);
                                }
                            }
                        }
                        printf("\n");
                        printf("\n\t\t\t\tPRESS ENTER TO CONTINUE TO NEXT QUESTION...");
                        getchar();
                        fclose(fptr);
                    }
                }
            }
            timer = 59;
            recheck = 0;
            timeout = 0;
        }

        for (int i = 0; i < strlen(g3H11); i++)
        {
            Sleep(8);
            printf("%c", g3H11[i]); // ===================
        }
        printf("\n\n\t\t\t\t%s YOUR TURN ENDS ", player1);
        printf("\n\n\t\t\t\tSCORE : %d ", playerOnePoint);
        printf("\n\n\t\t\t\tACCURACY : %.0f %% ", (((float)playerOnePoint / 5) * 100)); // calculates the accuracy by calculating %
        for (int i = 0; i < strlen(g3H11); i++)
        {
            Sleep(8);
            printf("%c", g3H11[i]); // ===================
        }
        printf("\n");
        for (int i = 0; i < strlen(g3H11); i++)
        {
            Sleep(8);
            printf("%c", g3H11[i]); // ===================
        }

        char g3H22[] = "\n\n\t\t\t\tPRESS ENTER TO CONTINUE TOWARDS ";
        strcat(g3H22, player2);
        char g3H23[] = "'s TURN...";
        strcat(g3H22, g3H23);
        for (int i = 0; i < strlen(g3H22); i++)
        {
            Sleep(8);
            printf("%c", g3H22[i]); // PRESS ENTER TO CONTINUE TOWARDS (player2)'s TURN...
        }
        getchar();

        char g3H24[100] = "\n\t\t\t\t";
        strcat(g3H24, player2);
        char g3H25[] = "'s QUESTION ";
        strcat(g3H24, g3H25);

        for (int h = 1; h <= 1; h++) // this loops starts the quiz for player 1 by displaying 5 questions from the txt file
        {
            printf("\n\t\t\t\t------------------------------------------------");
            printf("\n\t\t\t\t%s's QUESTION %d\n\n", player2, h);

            fptr = fopen(arr[gen_one()], "r");

            while (ch != '@')
            { // this loop prints the question character by character from the txt file opened by fopen on console
                ch = getc(fptr);
                if (ch == '@')
                    break;
                printf("%c", ch);
                if (ch == EOF)
                    break;
            }

            printf("\n\t\t\t\t------------------------------------------------\n\n");
            ans = '~';
            do
            {
                if (kbhit())
                {
                    ans = getche();
                }
                else if (recheck != 1)
                {
                    printf("                                CHOOSE YOUR OPTION IN (%d) secs                                \r", timer--);
                    sleep(1);
                }
                if (ans == 'a' || ans == 'A' || ans == 'b' || ans == 'B' || ans == 'c' || ans == 'C' || ans == 'd' || ans == 'D')
                {
                    break;
                }
                if (timer == 0)
                {
                    timeout = 1;
                    break;
                }
                if (ans == esc)
                {
                    quit = 1;
                    break;
                }
                if (ans != 'A' && ans != 'B' && ans != 'C' && ans != 'D' && ans != 'a' && ans != 'b' && ans != 'c' && ans != 'd' && ans != '~')
                {
                    while (ans != 'A' && ans != 'B' && ans != 'C' && ans != 'D' && ans != 'a' && ans != 'b' && ans != 'c' && ans != 'd')
                    { // this while loop prevents user from giving an input other than A,B,C,D,a,b,c,d
                        printf("                                WRONG INPUT...CHOOSE FROM OPTION A,B,C,D CHOOSE YOUR OPTION IN (%d) secs                                \r", timer--);
                        sleep(1);
                        if (kbhit())
                        {
                            ans = getche();
                        }
                        if (timer == 50)
                        {
                            timeout = 1;
                            break;
                        }
                        if (ans >= 97 && ans <= 100)
                            ans -= 32;
                    }
                    recheck = 1;
                }
            } while (ans != '\n' && timeout != 1);

            fflush(stdin);

            if (quit == 1)
            {
                quitGame();
            }

            if (restartFlag == 0)
            {
                restartFlag = -1;
                byeBye();
                system("cls");
                goto menu;
            }
            if (restartFlag == 1)
            {
                system("cls");
                goto newstart1;
            }

            if (ans >= 97 && ans <= 100)
            { // this if converts the user input into capital if the user inputs small mcq options
                ans -= 32;
            }

            while (ch != EOF)
            { // this loop now handles the answer checking & displaying explanation of the correct answer
                ch = getc(fptr);
                if (ch == '$')
                { // scans for $ as after $ the answer of the questions is present in txt file
                    ch = getc(fptr);
                    if (ans == ch)
                    {
                        printf("\n\n\t\t\t\t====================");
                        printf("\n\t\t\t\tYOU CHOOSED OPTION %c", ch);
                        printf("\n\t\t\t\tCORRECT ANSWER...!!!");
                        printf("\n\t\t\t\t====================\n");
                        playerTwoPoint++;
                        fclose(fptr);
                    }
                    else if (timeout == 1)
                    {
                        printf("\n\n\t\t\t\t=======================");
                        printf("\n\t\t\t\tTIMEOUT...YOU ARE OUT OF TIME..!!!\n");
                        printf("\n\t\t\t\tCORRECT OPTION IS %c", ch);
                        printf("\n\t\t\t\t=======================\n");
                        while (ch != EOF)
                        {
                            ch = getc(fptr);
                            if (ch == '~')
                            { // scans for the ~ and displays character by character the explanation till the EOF
                                while (ch != EOF)
                                {
                                    ch = getc(fptr);
                                    printf("%c", ch);
                                }
                            }
                        }
                        printf("\n");
                        printf("\n\t\t\t\tPRESS ENTER TO CONTINUE TO NEXT QUESTION...");
                        getchar();
                        fclose(fptr);
                    }
                    else
                    {
                        printf("\n\n\t\t\t\t=======================");
                        printf("\n\t\t\t\tWRONG ANSWER...!!!\n");
                        printf("\n\t\t\t\tCORRECT OPTION IS %c", ch);
                        printf("\n\t\t\t\t=======================\n");
                        while (ch != EOF)
                        {
                            ch = getc(fptr);
                            if (ch == '~')
                            { // scans for the ~ and displays character by character the explanation till the EOF
                                while (ch != EOF)
                                {
                                    ch = getc(fptr);
                                    printf("%c", ch);
                                }
                            }
                        }
                        printf("\n");
                        printf("\n\t\t\t\tPRESS ENTER TO CONTINUE TO NEXT QUESTION...");
                        getchar();
                        fclose(fptr);
                    }
                }
            }
            timer = 59; // resets the timer values
            recheck = 0;
            timeout = 0;
        }

        char g3H26[] = "\n\n\t\t\t\t===========================================================";
        for (int i = 0; i < strlen(g3H26); i++)
        {
            Sleep(8);
            printf("%c", g3H26[i]); // ================
        }
        printf("\n\n\t\t\t\t%s YOUR TURN ENDS ", player2);
        printf("\n\n\t\t\t\tSCORE : %d ", playerTwoPoint);
        printf("\n\n\t\t\t\tACCURACY : %.0f %% ", (((float)playerTwoPoint / 5) * 100));
        for (int i = 0; i < strlen(g3H26); i++)
        {
            Sleep(8);
            printf("%c", g3H26[i]); // ================
        }

        char g3H27[] = "\n\n\t\t\t\t=====================================\n";
        for (int i = 0; i < strlen(g3H27); i++)
        {
            Sleep(8);
            printf("%c", g3H27[i]); // ================
        }
        printf("\n\t\t\t\tSCORE TABLE");
        printf("\n\t\t\t\t%s's SCORE : %d & Accuracy %.0f %%", player1, playerOnePoint, (((float)playerOnePoint / 5) * 100));
        printf("\n\t\t\t\t%s's SCORE : %d & Accuracy %.0f %%", player2, playerTwoPoint, (((float)playerTwoPoint / 5) * 100));
        for (int i = 0; i < strlen(g3H27); i++)
        {
            Sleep(8);
            printf("%c", g3H27[i]); // ================
        }

        char g3H28[] = "\n\n\n\t\t\t\t=-=-==-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
        char g3H29[100] = "\n\n\n\t\t\t\tWINNER OF THIS QUIZ COMPETTION IS ";
        strcat(g3H29, player1);

        if (playerOnePoint > playerTwoPoint)
        {
            for (int i = 0; i < strlen(g3H28); i++)
            {
                Sleep(8);
                printf("%c", g3H28[i]); // =-=-==-=-=-=-=-=-=-
            }
            for (int i = 0; i < strlen(g3H29); i++)
            {
                Sleep(8);
                printf("%c", g3H29[i]); // WINNER OF THIS QUIZ COMPETTION IS (player1)
            }
            for (int i = 0; i < strlen(g3H28); i++)
            {
                Sleep(8);
                printf("%c", g3H28[i]); // =-=-==-=-=-=-=-=-=-
            }
            printf("\n");
            quizAgain();
            if (restartFlag == 0)
            {
                restartFlag = -1;
                byeBye();
                system("cls");
                goto menu;
            }
            if (restartFlag == 1)
            {
                goto newstart1;
            }
        }
        else if (playerOnePoint == playerTwoPoint) //--------------------------------------------------------- TIE BREAKER ROUUND -------------------------
        {
            for (int i = 0; i < strlen(g3H28); i++)
            {
                Sleep(8);
                printf("%c", g3H28[i]); // =-=-==-=-=-=-=-=-=-
            }
            char g3H30[100] = "\n\n\n\t\t\t\tIT'S A TIE BETWEEN ";
            strcat(g3H30, player1);
            char g3H31[] = " & ";
            strcat(g3H30, g3H31);
            strcat(g3H30, player2);

            for (int i = 0; i < strlen(g3H30); i++)
            {
                Sleep(8);
                printf("%c", g3H30[i]); // IT'S A TIE BETWEEN player1 & player2
            }

            char g3H32[] = "\n\n\n\t\t\t\tPRESS ENTER FOR TIE BREAKER ROUND...";
            for (int i = 0; i < strlen(g3H32); i++)
            {
                Sleep(8);
                printf("%c", g3H32[i]); // PRESS ENTER FOR TIE BREAKER ROUND...
            }
            getchar();
            system("cls");

            printf("\n\t\t\t\t");
            for (int i = 0; i < 95; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            printf("\n\t\t\t\t");
            for (int i = 0; i < 34; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            for (int i = 0; i < strlen(g3TH1); i++)
            {
                Sleep(10);
                printf("%c", g3TH1[i]); // WELCOME TIE BREAKER ROUND
            }
            for (int i = 0; i < 34; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            printf("\n\t\t\t\t");
            for (int i = 0; i < 95; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            for (int i = 0; i < strlen(g3TH2); i++)
            {
                Sleep(10);
                printf("%c", g3TH2[i]); // RULES OF TIE BREAKER ROUND ARE :
            }
            for (int i = 0; i < strlen(g3TH3); i++)
            {
                Sleep(10);
                printf("%c", g3TH3[i]); // 1. THERE WILL BE TOTAL 3 QUESTIONS WITH 4 OPTIONS IN THIS ROUND.
            }
            for (int i = 0; i < strlen(g3TH4); i++)
            {
                Sleep(10);
                printf("%c", g3TH4[i]); // 2. ONLY ONE OPTION IS CORRECT.
            }
            for (int i = 0; i < strlen(g3TH5); i++)
            {
                Sleep(10);
                printf("%c", g3TH5[i]); // 3. TO WIN THIS ROUND PLAYER SHOULD SCORE MINIMUM 2 POINTS OUT OF 3.
            }
            for (int i = 0; i < strlen(g3TH6); i++)
            {
                Sleep(10);
                printf("%c", g3TH6[i]); // 4. PLAYER 1 WILL GIVE ANSWERS TO 5 QUESTIONS FIRST THEN PLAYER 2 WILL ANSWER NEXT 5 QUESTIONS.
            }
            for (int i = 0; i < strlen(g3TH7); i++)
            {
                Sleep(10);
                printf("%c", g3TH7[i]); // \n\t\t\t\t5. 60 SECONDS TIME WILL BE GIVEN TO EACH QUESTION, COUNTDOWN WLL START AS SOON AS QUESTION IS DISPLAYED.\n
            }
            printf("\n\t\t\t\t");
            for (int i = 0; i < 95; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }

            playerOnePoint = 0, playerTwoPoint = 0;

            for (int l = 1; l <= 5; l++) // this loops starts the tie breaker round of 5 Q for player 1
            {
                printf("\n\t\t\t\t------------------------------------------------");
                printf("\n\n\t\t\t\t %s's TIE BREAKER QUESTION %d\n\n", player1, l);

                fptr = fopen(tieArr[gen_two()], "r");

                while (ch != '@')
                { // this loop prints the question character by character from the txt file opened by fopen on console
                    ch = getc(fptr);
                    if (ch == '@')
                        break;
                    printf("%c", ch);
                    if (ch == EOF)
                        break;
                }

                printf("\n\t\t\t\t------------------------------------------------\n\n");

                ans = '~';
                timeout = 0;
                do
                {
                    if (kbhit())
                    {
                        ans = getche();
                    }
                    else if (recheck != 1)
                    {
                        printf("                                CHOOSE YOUR OPTION IN (%d) secs                                \r", timer--);
                        sleep(1);
                    }
                    if (ans == 'a' || ans == 'A' || ans == 'b' || ans == 'B' || ans == 'c' || ans == 'C' || ans == 'd' || ans == 'D')
                    {
                        break;
                    }
                    if (timer == 0)
                    {
                        timeout = 1;
                        break;
                    }
                    if (ans == esc)
                    {
                        quit = 1;
                        break;
                    }
                    if (ans != 'A' && ans != 'B' && ans != 'C' && ans != 'D' && ans != 'a' && ans != 'b' && ans != 'c' && ans != 'd' && ans != '~')
                    {
                        while (ans != 'A' && ans != 'B' && ans != 'C' && ans != 'D' && ans != 'a' && ans != 'b' && ans != 'c' && ans != 'd')
                        { // this while loop prevents user from giving an input other than A,B,C,D,a,b,c,d
                            printf("                                WRONG INPUT...CHOOSE FROM OPTION A,B,C,D CHOOSE YOUR OPTION IN (%d) secs                                \r", timer--);
                            sleep(1);
                            if (kbhit())
                            {
                                ans = getche();
                            }
                            if (timer == 50)
                            {
                                timeout = 1;
                                break;
                            }
                            if (ans >= 97 && ans <= 100)
                                ans -= 32;
                        }
                        recheck = 1;
                    }
                } while (ans != '\n' && timeout != 1);

                fflush(stdin);

                if (quit == 1)
                {
                    quitGame();
                }

                if (restartFlag == 0)
                {
                    restartFlag = -1;
                    byeBye();
                    system("cls");
                    goto menu;
                }
                if (restartFlag == 1)
                {
                    system("cls");
                    goto newstart1;
                }

                if (ans >= 97 && ans <= 100)
                { // this if converts the user input into capital if the user inputs small mcq options
                    ans -= 32;
                }

                while (ch != EOF)
                { // this loop now handles the answer checking & displaying explanation of the correct answer
                    ch = getc(fptr);
                    if (ch == '$')
                    { // scans for $ as after $ the answer of the questions is present in txt file
                        ch = getc(fptr);
                        if (ans == ch)
                        {
                            printf("\n\n\t\t\t\t====================");
                            printf("\n\t\t\t\tYOU CHOOSED OPTION %c", ch);
                            printf("\n\t\t\t\tCORRECT ANSWER...!!!");
                            printf("\n\t\t\t\t====================\n");
                            playerOnePoint++;
                            fclose(fptr);
                        }
                        else if (timeout == 1)
                        {
                            printf("\n\n\t\t\t\t=======================");
                            printf("\n\t\t\t\tTIMEOUT...YOU ARE OUT OF TIME..!!!\n");
                            printf("\n\t\t\t\tCORRECT OPTION IS %c", ch);
                            printf("\n\t\t\t\t=======================\n");
                            while (ch != EOF)
                            {
                                ch = getc(fptr);
                                if (ch == '~')
                                { // scans for the ~ and displays character by character the explanation till the EOF
                                    while (ch != EOF)
                                    {
                                        ch = getc(fptr);
                                        printf("%c", ch);
                                    }
                                }
                            }
                            printf("\n");
                            printf("\n\t\t\t\tPRESS ENTER TO CONTINUE TO NEXT QUESTION...");
                            getchar();
                            fclose(fptr);
                        }
                        else
                        {
                            printf("\n\n\t\t\t\t=======================");
                            printf("\n\t\t\t\tWRONG ANSWER...!!!\n");
                            printf("\n\t\t\t\tCORRECT OPTION IS %c", ch);
                            printf("\n\t\t\t\t=======================\n");
                            while (ch != EOF)
                            {
                                ch = getc(fptr);
                                if (ch == '~')
                                { // scans for the ~ and displays character by character the explanation till the EOF
                                    while (ch != EOF)
                                    {
                                        ch = getc(fptr);
                                        printf("%c", ch);
                                    }
                                }
                            }
                            printf("\n");
                            printf("\n\t\t\t\tPRESS ENTER TO CONTINUE TO NEXT QUESTION...");
                            getchar();
                            fclose(fptr);
                        }
                    }
                }
                timer = 59;
                recheck = 0;
                timeout = 0;
            }

            for (int i = 0; i < strlen(g3H26); i++)
            {
                Sleep(8);
                printf("%c", g3H26[i]); // ===================
            }
            printf("\n\n\t\t\t\t%s YOUR TIE BREAKER TURN ENDS ", player1);
            printf("\n\n\t\t\t\tTIE BREAKER SCORE IS %d", playerOnePoint);
            printf("\n\n\t\t\t\tTIE BREAKER ACCURACY : %.0f %% ", (((float)playerOnePoint / 5) * 100));
            for (int i = 0; i < strlen(g3H26); i++)
            {
                Sleep(8);
                printf("%c", g3H26[i]); // ===================
            }
            for (int i = 0; i < strlen(g3H26); i++)
            {
                Sleep(8);
                printf("%c", g3H26[i]); // ===================
            }

            char g3H35[] = "\n\n\t\t\t\tPRESS ENTER TO CONTINUE TOWARDS ";
            strcat(g3H35, player2);
            char g3H36[] = "'s TURN...";
            strcat(g3H35, g3H36);
            for (int i = 0; i < strlen(g3H35); i++)
            {
                Sleep(8);
                printf("%c", g3H35[i]); // PRESS ENTER TO CONTINUE TOWARDS (player2)'s TURN...
            }
            getchar();

            for (int m = 1; m <= 5; m++) // this loops starts the tie breaker round of 5 Q for player 2
            {
                printf("\n\t\t\t\t------------------------------------------------");
                printf("\n\n\t\t\t\t %s's TIE BREAKER QUESTION %d\n", player2, m);

                fptr = fopen(tieArr[gen_two()], "r");

                while (ch != '@')
                { // this loop prints the question character by character from the txt file opened by fopen on console
                    ch = getc(fptr);
                    if (ch == '@')
                        break;
                    printf("%c", ch);
                    if (ch == EOF)
                        break;
                }

                printf("\n\t\t\t\t------------------------------------------------\n\n");

                ans = '~';
                timeout = 0;
                do
                {
                    if (kbhit())
                    {
                        ans = getche();
                    }
                    else if (recheck != 1)
                    {
                        printf("                                CHOOSE YOUR OPTION IN (%d) secs                                \r", timer--);
                        sleep(1);
                    }
                    if (ans == 'a' || ans == 'A' || ans == 'b' || ans == 'B' || ans == 'c' || ans == 'C' || ans == 'd' || ans == 'D')
                    {
                        break;
                    }
                    if (timer == 0)
                    {
                        timeout = 1;
                        break;
                    }
                    if (ans == esc)
                    {
                        quit = 1;
                        break;
                    }
                    if (ans != 'A' && ans != 'B' && ans != 'C' && ans != 'D' && ans != 'a' && ans != 'b' && ans != 'c' && ans != 'd' && ans != '~')
                    {
                        while (ans != 'A' && ans != 'B' && ans != 'C' && ans != 'D' && ans != 'a' && ans != 'b' && ans != 'c' && ans != 'd')
                        { // this while loop prevents user from giving an input other than A,B,C,D,a,b,c,d
                            printf("                                WRONG INPUT...CHOOSE FROM OPTION A,B,C,D CHOOSE YOUR OPTION IN (%d) secs                                \r", timer--);
                            sleep(1);
                            if (kbhit())
                            {
                                ans = getche();
                            }
                            if (timer == 50)
                            {
                                timeout = 1;
                                break;
                            }
                            if (ans >= 97 && ans <= 100)
                                ans -= 32;
                        }
                        recheck = 1;
                    }
                } while (ans != '\n' && timeout != 1);

                fflush(stdin);

                if (quit == 1)
                {
                    quitGame();
                }

                if (restartFlag == 0)
                {
                    restartFlag = -1;
                    byeBye();
                    system("cls");
                    goto menu;
                }
                if (restartFlag == 1)
                {
                    system("cls");
                    goto newstart1;
                }

                if (ans >= 97 && ans <= 100)
                { // this if converts the user input into capital if the user inputs small mcq options
                    ans -= 32;
                }

                while (ch != EOF)
                { // this loop now handles the answer checking & displaying explanation of the correct answer
                    ch = getc(fptr);
                    if (ch == '$')
                    { // scans for $ as after $ the answer of the questions is present in txt file
                        ch = getc(fptr);
                        if (ans == ch)
                        {
                            printf("\n\n\t\t\t\t====================");
                            printf("\n\t\t\t\tYOU CHOOSED OPTION %c", ch);
                            printf("\n\t\t\t\tCORRECT ANSWER...!!!");
                            printf("\n\t\t\t\t====================\n");
                            playerTwoPoint++;
                            fclose(fptr);
                        }
                        else if (timeout == 1)
                        {
                            printf("\n\n\t\t\t\t=======================");
                            printf("\n\t\t\t\tTIMEOUT...YOU ARE OUT OF TIME..!!!\n");
                            printf("\n\t\t\t\tCORRECT OPTION IS %c", ch);
                            printf("\n\t\t\t\t=======================\n");
                            while (ch != EOF)
                            {
                                ch = getc(fptr);
                                if (ch == '~')
                                { // scans for the ~ and displays character by character the explanation till the EOF
                                    while (ch != EOF)
                                    {
                                        ch = getc(fptr);
                                        printf("%c", ch);
                                    }
                                }
                            }
                            printf("\n");
                            printf("\n\t\t\t\tPRESS ENTER TO CONTINUE TO NEXT QUESTION...");
                            getchar();
                            fclose(fptr);
                        }
                        else
                        {
                            printf("\n\n\t\t\t\t=======================");
                            printf("\n\t\t\t\tWRONG ANSWER...!!!\n");
                            printf("\n\t\t\t\tCORRECT OPTION IS %c", ch);
                            printf("\n\t\t\t\t=======================\n");
                            while (ch != EOF)
                            {
                                ch = getc(fptr);
                                if (ch == '~')
                                { // scans for the ~ and displays character by character the explanation till the EOF
                                    while (ch != EOF)
                                    {
                                        ch = getc(fptr);
                                        printf("%c", ch);
                                    }
                                }
                            }
                            printf("\n");
                            printf("\n\t\t\t\tPRESS ENTER TO CONTINUE TO NEXT QUESTION...");
                            getchar();
                            fclose(fptr);
                        }
                    }
                }
                timer = 59;
                recheck = 0;
                timeout = 0;
            }

            for (int i = 0; i < strlen(g3H26); i++)
            {
                Sleep(8);
                printf("%c", g3H26[i]); // ================
            }
            printf("\n\n\t\t\t\t%s YOUR TIE BREAKER TURN ENDS ", player1);
            printf("\n\n\t\t\t\tTIE BREAKER SCORE IS %d", playerOnePoint);
            printf("\n\n\t\t\t\tTIE BREAKER ACCURACY : %.0f %% ", (((float)playerOnePoint / 5) * 100));
            for (int i = 0; i < strlen(g3H26); i++)
            {
                Sleep(8);
                printf("%c", g3H26[i]); // ================
            }

            for (int i = 0; i < strlen(g3H27); i++)
            {
                Sleep(8);
                printf("%c", g3H27[i]); // ================
            }
            printf("\n\t\t\t\tTIE BREAKER SCORE TABLE");
            printf("\n\t\t\t\t%s's SCORE : %d & TIE BREAKER ACCURACY : %.0f %% ", player1, playerOnePoint, (((float)playerOnePoint / 5) * 100));
            printf("\n\t\t\t\t%s's SCORE : %d & TIE BREAKER ACCURACY : %.0f %% ", player2, playerTwoPoint, (((float)playerTwoPoint / 5) * 100));
            for (int i = 0; i < strlen(g3H27); i++)
            {
                Sleep(8);
                printf("%c", g3H27[i]); // ================
            }

            char g3H39[100] = "\n\n\n\t\t\t\tWINNER OF THIS QUIZ COMPETTION IS ";
            strcat(g3H39, player2);

            if (playerOnePoint > playerTwoPoint)
            {
                for (int i = 0; i < strlen(g3H28); i++)
                {
                    Sleep(8);
                    printf("%c", g3H28[i]); // =-=-==-=-=-=-=-=-=-
                }
                for (int i = 0; i < strlen(g3H29); i++)
                {
                    Sleep(8);
                    printf("%c", g3H29[i]); // WINNER OF THIS QUIZ COMPETTION IS (player1)
                }
                for (int i = 0; i < strlen(g3H28); i++)
                {
                    Sleep(8);
                    printf("%c", g3H28[i]); // =-=-==-=-=-=-=-=-=-
                }
                printf("\n");
                quizAgain();
                if (restartFlag == 0)
                {
                    restartFlag = -1;
                    byeBye();
                    system("cls");
                    goto menu;
                }
                if (restartFlag == 1)
                {
                    goto newstart1;
                }
            }
            else if (playerTwoPoint > playerOnePoint)
            {
                char g3H39[100] = "\n\n\n\t\t\t\tWINNER OF THIS QUIZ COMPETTION IS ";
                strcat(g3H39, player2);
                for (int i = 0; i < strlen(g3H28); i++)
                {
                    Sleep(8);
                    printf("%c", g3H28[i]); // =-=-==-=-=-=-=-=-=-
                }
                for (int i = 0; i < strlen(g3H39); i++)
                {
                    Sleep(8);
                    printf("%c", g3H39[i]); // WINNER OF THIS QUIZ COMPETTION IS (player2)
                }
                for (int i = 0; i < strlen(g3H28); i++)
                {
                    Sleep(8);
                    printf("%c", g3H28[i]); // =-=-==-=-=-=-=-=-=-
                }
                printf("\n");
                quizAgain();
                if (restartFlag == 0)
                {
                    restartFlag = -1;
                    byeBye();
                    system("cls");
                    goto menu;
                }
                if (restartFlag == 1)
                {
                    goto newstart1;
                }
            }
            else
            {
                char g3H40[150] = "\n\n\n\t\t\t\tAGAIN IT'S A TIE IN TIE-BREAKER ROUND BETWEEN ";
                strcat(g3H40, player1);
                char g3H41[] = " & ";
                strcat(g3H40, g3H41);
                strcat(g3H40, player2);
                for (int i = 0; i < strlen(g3H28); i++)
                {
                    Sleep(8);
                    printf("%c", g3H28[i]); // =-=-==-=-=-=-=-=-=-
                }
                for (int i = 0; i < strlen(g3H40); i++)
                {
                    Sleep(8);
                    printf("%c", g3H40[i]); // AGAIN IT'S A TIE IN TIE-BREAKER ROUND BETWEEN player1 & player2
                }
                for (int i = 0; i < strlen(g3H28); i++)
                {
                    Sleep(8);
                    printf("%c", g3H28[i]); // =-=-==-=-=-=-=-=-=-
                }
                printf("\n");
                quizAgain();
                if (restartFlag == 0)
                {
                    restartFlag = -1;
                    byeBye();
                    system("cls");
                    goto menu;
                }
                if (restartFlag == 1)
                {
                    goto newstart1;
                }
            }
        }
        else
        {
            char g3H41[100] = "\n\n\n\t\t\t\tWINNER OF THIS QUIZ COMPETTION IS ";
            strcat(g3H41, player2);
            for (int i = 0; i < strlen(g3H28); i++)
            {
                Sleep(8);
                printf("%c", g3H28[i]); // =-=-==-=-=-=-=-=-=-
            }
            for (int i = 0; i < strlen(g3H41); i++)
            {
                Sleep(8);
                printf("%c", g3H41[i]); // WINNER OF THIS QUIZ COMPETTION IS (player2)
            }
            for (int i = 0; i < strlen(g3H28); i++)
            {
                Sleep(8);
                printf("%c", g3H28[i]); // =-=-==-=-=-=-=-=-=-
            }
            printf("\n");
            quizAgain();
            if (restartFlag == 0)
            {
                restartFlag = -1;
                byeBye();
                system("cls");
                goto menu;
            }
            if (restartFlag == 1)
            {
                system("cls");
                goto newstart1;
            }
        }
        break;

        // ---------------------------------------------------------- Game 4 Guess the Number -----------------------------------------------------------------

    case 4:
        printf("\n\n\t\t\t\t\t\t\t");
        for (int i = 0; i < strlen(Loading); i++) // LOADING...
        {
            Sleep(100);
            printf("%c", Loading[i]);
        }
        for (int i = 0; i < 39; i++)
        {
            Sleep(140);
            printf("%c", design); // design=178
        }
        Sleep(500);
        system("cls");

        do
        {
            printf("\n\t\t\t\t");
            for (int i = 0; i < 90; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            printf("\n\t\t\t\t");
            for (int i = 0; i < 28; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            for (int i = 0; i < strlen(g4H1); i++)
            {
                Sleep(10);
                printf("%c", g4H1[i]); //  WELCOME TO GUESS THE NUMBER GAME
            }
            for (int i = 0; i < 28; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            printf("\n\t\t\t\t");
            for (int i = 0; i < 90; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            for (int i = 0; i < strlen(g4H2); i++)
            {
                Sleep(10);
                printf("%c", g4H2[i]); //  RULES ARE SIMPLE :
            }
            for (int i = 0; i < strlen(g4H3); i++)
            {
                Sleep(10);
                printf("%c", g4H3[i]); //  1.THE COMPUTER WILL SELECT A NUMBER (FROM 1 TO 10) & YOU HAVE TO GUESS THE NUMBER.
            }
            for (int i = 0; i < strlen(g4H4); i++)
            {
                Sleep(10);
                printf("%c", g4H4[i]); //  2.YOU WILL BE GIVEN 5 ATTEMPTS TO GUESS THE CORRECT NUMBER.
            }
            for (int i = 0; i < strlen(g4H5); i++)
            {
                Sleep(10);
                printf("%c", g4H5[i]); //  3.IF YOU GUESSED THE NUMBER IN 5 ATTEMPTS YOU ARE THE WINNER.
            }
            printf("\n\t\t\t\t");
            for (int i = 0; i < 90; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }

            char g4H6[] = "\n\n\t\t\t\t GUESS THE NUMBER BETWEEN 1 TO 10 \n";
            for (int i = 0; i < strlen(g4H6); i++)
            {
                Sleep(8);
                printf("%c", g4H6[i]); // GUESS THE NUMBER BETWEEN 1 TO 10
            }

            char g4H7[] = "\n\t\t\t\t ENTER YOUR GUESS : ";
            char g4H8[] = "\n\t\t\t\t =-=-==-=-=-=-=-=-=-=-==-=-=-=-=-=-=-";
            char g4H9[] = "\n\t\t\t\t YOU LOST...YOU ARE OUT OF ATTEMPTS";
            char g4H10[] = "\n\t\t\t\t TOO HIGH...TRY AGAIN\n";
            char g4H11[] = "\n\t\t\t\t TOO LOW...TRY AGAIN\n";
            char g4H12[] = "\n\t\t\t\t =-=-==-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-";
            char g4H13[] = "\n\t\t\t\t CONGRATULATIONS, YOU GUESSED THE NUMBER CORRECT IN ";
            char g4H14[] = " ATTEMPTS";

            srand(time(NULL));        // Set the random seed
            number = rand() % 10 + 1; // Generate a random number between 1 and 10

            do
            {
                for (int i = 0; i < strlen(g4H7); i++)
                {
                    Sleep(8);
                    printf("%c", g4H7[i]); // ENTER YOUR GUESS :
                }
                scanf("%d", &guess);
                attempts++;

                if (attempts >= 5 && flag != 1)
                {
                    for (int i = 0; i < strlen(g4H8); i++)
                    {
                        Sleep(8);
                        printf("%c", g4H8[i]); // =-=-==-=-=-=-=-=-=
                    }
                    for (int i = 0; i < strlen(g4H9); i++)
                    {
                        Sleep(8);
                        printf("%c", g4H9[i]); // YOU LOST...YOU ARE OUT OF ATTEMPTS
                    }
                    for (int i = 0; i < strlen(g4H8); i++)
                    {
                        Sleep(8);
                        printf("%c", g4H8[i]); // =-=-==-=-=-=-=-=-=
                    }
                    printf("\n");
                }
                else if (guess > number && flag != 1)
                {
                    for (int i = 0; i < strlen(g4H10); i++)
                    {
                        Sleep(8);
                        printf("%c", g4H10[i]); // TOO HIGH...TRY AGAIN
                    }
                }
                else if (guess < number && flag != 1)
                {
                    for (int i = 0; i < strlen(g4H11); i++)
                    {
                        Sleep(8);
                        printf("%c", g4H11[i]); // TOO LOW...TRY AGAIN
                    }
                }
                else
                {
                    for (int i = 0; i < strlen(g4H12); i++)
                    {
                        Sleep(8);
                        printf("%c", g4H12[i]); // =-=-==-=-=-=-=-
                    }
                    for (int i = 0; i < strlen(g4H13); i++)
                    {
                        Sleep(8);
                        printf("%c", g4H13[i]); // CONGRATULATIONS, YOU GUESSED THE NUMBER CORRECT IN
                    }
                    printf("%d", attempts);
                    for (int i = 0; i < strlen(g4H14); i++)
                    {
                        Sleep(8);
                        printf("%c", g4H14[i]); // ATTEMPTS
                    }
                    for (int i = 0; i < strlen(g4H12); i++)
                    {
                        Sleep(8);
                        printf("%c", g4H12[i]); // =-=-==-=-=-=-=-
                    }
                    flag = 1;
                }

            } while (attempts != 5 && flag != 1);

            char g4H15[] = "\n\n\t\t\t\t -------------------------------------------------------";
            char g4H16[] = "\n\n\t\t\t\t DO YOU WANT TO PLAY AGAIN ( Y FOR YES & N FOR NO ) : ";

            for (int i = 0; i < strlen(g4H15); i++)
            {
                Sleep(8);
                printf("%c", g4H15[i]); // -------------
            }
            for (int i = 0; i < strlen(g4H16); i++)
            {
                Sleep(8);
                printf("%c", g4H16[i]); // DO YOU WANT TO PLAY AGAIN ( Y FOR YES & N FOR NO ) :
            }
            getchar();
            scanf("%c", &wantToPlayAgain);
            for (int i = 0; i < strlen(g4H15); i++)
            {
                Sleep(8);
                printf("%c", g4H15[i]); // -------------
            }

            if (wantToPlayAgain == 'y' || wantToPlayAgain == 'Y')
            {
                flag = 0;
                attempts = 0;
                number = 0;
                guess = 0;
                system("cls");
            }

        } while (wantToPlayAgain != 'N' && wantToPlayAgain != 'n');

        getchar();
        byeBye();
        system("cls");
        goto menu;
        break;

        // --------------------------------------------- Game 5 Guess the fruit --------------------------------------------------

    case 5:
        printf("\n\n\t\t\t\t\t\t\t");
        for (int i = 0; i < strlen(Loading); i++) // LOADING...
        {
            Sleep(100);
            printf("%c", Loading[i]);
        }
        for (int i = 0; i < 39; i++)
        {
            Sleep(140);
            printf("%c", design); // design=178
        }
        Sleep(500);
        system("cls");

        do
        {
            printf("\n\t\t\t\t");
            for (int i = 0; i < 100; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            printf("\n\t\t\t\t");
            for (int i = 0; i < 33; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            for (int i = 0; i < strlen(g5H1); i++)
            {
                Sleep(10);
                printf("%c", g5H1[i]); //  WELCOME TO GUESS THE NUMBER GAME
            }
            for (int i = 0; i < 34; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            printf("\n\t\t\t\t");
            for (int i = 0; i < 100; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }
            for (int i = 0; i < strlen(g5H2); i++)
            {
                Sleep(10);
                printf("%c", g5H2[i]); //  RULES ARE SIMPLE :
            }
            for (int i = 0; i < strlen(g5H3); i++)
            {
                Sleep(10);
                printf("%c", g5H3[i]); //  1. THERE WILL A LIST OF FRUITS.
            }
            for (int i = 0; i < strlen(g5H4); i++)
            {
                Sleep(10);
                printf("%c", g5H4[i]); //  2.YOU WILL BE GIVEN 5 ATTEMPTS TO GUESS THE CORRECT NUMBER.
            }
            for (int i = 0; i < strlen(g5H5); i++)
            {
                Sleep(10);
                printf("%c", g5H5[i]); //  3.IF YOU GUESSED THE NUMBER IN 5 ATTEMPTS YOU ARE THE WINNER.
            }
            for (int i = 0; i < strlen(g5H6); i++)
            {
                Sleep(10);
                printf("%c", g5H6[i]); //  4. ENTER THE SERIAL NUMBER FROM THE LIST.
            }
            printf("\n\t\t\t\t");
            for (int i = 0; i < 100; i++)
            {
                Sleep(10);
                printf("%c", design); // design=178
            }

            srand(time(NULL));
            int random1 = rand() % 8;

            char g5H7[] = "\n\n\t\t\t\t THE FRUIT LIST IS : \n";
            for (int i = 0; i < strlen(g5H7); i++)
            {
                Sleep(10);
                printf("%c", g5H7[i]); //  THE FRUIT LIST IS :
            }

            for (int i = 0; i < 8; i++) // this loop displays all the list of fruits on concole
            {
                Sleep(100);
                printf("\n\t\t\t\t %d.%s", i + 1, str[i]);
            }

            char g5H8[] = "\n\t\t\t\t GUESS THE FRUIT : ";
            char g5H9[] = "\n\t\t\t\t =====================";
            char g5H10[] = "\n\t\t\t\t YOUR GUESS IS CORRECT";
            char g5H11[] = "\n\t\t\t\t YOUR GUESS IS WRONG";

            switch (random1)
            {
            case 0:
                char g5H12[] = "\n\n\t\t\t\t --------------------------------------------------------------------------";
                for (int i = 0; i < strlen(g5H12); i++)
                {
                    Sleep(10);
                    printf("%c", g5H12[i]); //  ---------------
                }
                char g5H13[] = "\n\n\t\t\t\t HINT : INDIA HAS MORE EXPORT FOR THIS FRUIT & MAINLY PRODUCED IN KASHMIR ";
                for (int i = 0; i < strlen(g5H13); i++)
                {
                    Sleep(10);
                    printf("%c", g5H13[i]); //  HINT : INDIA HAS MORE EXPORT FOR THIS FRUIT & MAINLY PRODUCED IN KASHMIR
                }
                for (int i = 0; i < strlen(g5H12); i++)
                {
                    Sleep(10);
                    printf("%c", g5H12[i]); //  ---------------
                }
                printf("\n");
                for (int i = 0; i < strlen(g5H8); i++)
                {
                    Sleep(10);
                    printf("%c", g5H8[i]); //  GUESS THE FRUIT :
                }
                scanf("%d", &userInput);

                if (userInput == (random1 + 1))
                {
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                    for (int i = 0; i < strlen(g5H10); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H10[i]); // YOUR GUESS IS CORRECT
                    }
                    char g5H14[] = "\n\t\t\t\t THE FRUIT IS APPLE ";
                    for (int i = 0; i < strlen(g5H14); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H14[i]); // THE FRUIT IS APPLE
                    }
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                }
                else
                {
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                    for (int i = 0; i < strlen(g5H11); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H11[i]); // YOUR GUESS IS WRONG
                    }
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                }
                break;

            case 1:
                char g5H15[] = "\n\n\t\t\t\t --------------------------------------------------";
                for (int i = 0; i < strlen(g5H15); i++)
                {
                    Sleep(10);
                    printf("%c", g5H15[i]); // ------------
                }
                char g5H16[] = "\n\n\t\t\t\t HINT : IT'S ARTIFICALLY RIPENED BY INJECTING ETHYL";
                for (int i = 0; i < strlen(g5H16); i++)
                {
                    Sleep(10);
                    printf("%c", g5H16[i]); // HINT : IT'S ARTIFICALLY RIPENED BY INJECTING ETHYL
                }
                for (int i = 0; i < strlen(g5H15); i++)
                {
                    Sleep(10);
                    printf("%c", g5H15[i]); // ------------
                }
                printf("\n");
                for (int i = 0; i < strlen(g5H8); i++)
                {
                    Sleep(10);
                    printf("%c", g5H8[i]); //  GUESS THE FRUIT :
                }
                scanf("%d", &userInput);

                if (userInput == (random1 + 1))
                {
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                    for (int i = 0; i < strlen(g5H10); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H10[i]); // YOUR GUESS IS CORRECT
                    }
                    char g5H17[] = "\n\t\t\t\t THE FRUIT IS BANANA ";
                    for (int i = 0; i < strlen(g5H17); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H17[i]); // THE FRUIT IS BANANA
                    }
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                }
                else
                {
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                    for (int i = 0; i < strlen(g5H11); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H11[i]); // YOUR GUESS IS WRONG
                    }
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                }
                break;

            case 2:
                char g5H18[] = "\n\n\t\t\t\t ------------------------------------------------------------------------------";
                for (int i = 0; i < strlen(g5H18); i++)
                {
                    Sleep(10);
                    printf("%c", g5H18[i]); // ----------------------
                }
                char g5H19[] = "\n\n\t\t\t\t HINT : IT HAS MORE WATER CONTENT THAN OTHER FRUITS & MOSTLY PREFERED IN SUMMER";
                for (int i = 0; i < strlen(g5H19); i++)
                {
                    Sleep(10);
                    printf("%c", g5H19[i]); // HINT : IT HAS MORE WATER CONTENT THAN OTHER FRUITS & MOSTLY PREFERED IN SUMMER
                }
                for (int w = 0; w < strlen(g5H18); w++)
                {
                    Sleep(10);
                    printf("%c", g5H18[w]); // ----------------------
                }
                printf("\n");
                for (int i = 0; i < strlen(g5H8); i++)
                {
                    Sleep(10);
                    printf("%c", g5H8[i]); //  GUESS THE FRUIT :
                }
                scanf("%d", &userInput);

                if (userInput == (random1 + 1))
                {
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                    for (int i = 0; i < strlen(g5H10); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H10[i]); // YOUR GUESS IS CORRECT
                    }
                    char g5H20[] = "\n\t\t\t\t THE FRUIT IS WATERMELON ";
                    for (int i = 0; i < strlen(g5H20); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H20[i]); // THE FRUIT IS WATERMELON
                    }
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                }
                else
                {
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                    for (int i = 0; i < strlen(g5H11); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H11[i]); // YOUR GUESS IS WRONG
                    }
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                }
                break;

            case 3:
                char g5H21[] = "\n\n\t\t\t\t ---------------------------";
                for (int i = 0; i < strlen(g5H21); i++)
                {
                    Sleep(10);
                    printf("%c", g5H21[i]); // ---------------------------
                }
                char g5H22[] = "\n\n\t\t\t\t HINT : ALSO KNOWN AS ANJEER";
                for (int i = 0; i < strlen(g5H22); i++)
                {
                    Sleep(10);
                    printf("%c", g5H22[i]); // HINT : ALSO KNOWN AS ANJEER
                }
                for (int i = 0; i < strlen(g5H21); i++)
                {
                    Sleep(10);
                    printf("%c", g5H21[i]); // ---------------------------
                }
                printf("\n");
                for (int i = 0; i < strlen(g5H8); i++)
                {
                    Sleep(10);
                    printf("%c", g5H8[i]); //  GUESS THE FRUIT :
                }
                scanf("%d", &userInput);

                if (userInput == (random1 + 1))
                {
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                    for (int i = 0; i < strlen(g5H10); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H10[i]); // YOUR GUESS IS CORRECT
                    }
                    char g5H23[] = "\n\t\t\t\t THE FRUIT IS FIG ";
                    for (int i = 0; i < strlen(g5H23); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H23[i]); // THE FRUIT IS FIG
                    }
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                }
                else
                {
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                    for (int i = 0; i < strlen(g5H11); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H11[i]); // YOUR GUESS IS WRONG
                    }
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                }
                break;

            case 4:
                char g5H24[] = "\n\n\t\t\t\t ---------------------------------------";
                for (int i = 0; i < strlen(g5H24); i++)
                {
                    Sleep(10);
                    printf("%c", g5H24[i]); // ------------------
                }
                char g5H25[] = "\n\n\t\t\t\t HINT : THIS FRUIT IS THE KING OF FRUITS";
                for (int i = 0; i < strlen(g5H25); i++)
                {
                    Sleep(10);
                    printf("%c", g5H25[i]); // HINT : THIS FRUIT IS THE KING OF FRUITS
                }
                for (int i = 0; i < strlen(g5H24); i++)
                {
                    Sleep(10);
                    printf("%c", g5H24[i]); // ------------------
                }
                printf("\n");
                for (int i = 0; i < strlen(g5H8); i++)
                {
                    Sleep(10);
                    printf("%c", g5H8[i]); //  GUESS THE FRUIT :
                }

                scanf("%d", &userInput);

                if (userInput == (random1 + 1))
                {
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                    for (int i = 0; i < strlen(g5H10); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H10[i]); // YOUR GUESS IS CORRECT
                    }
                    char g5H26[] = "\n\t\t\t\t THE FRUIT IS MANGO ";
                    for (int i = 0; i < strlen(g5H26); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H26[i]); // THE FRUIT IS MANGO
                    }
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                }
                else
                {
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                    for (int i = 0; i < strlen(g5H11); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H11[i]); // YOUR GUESS IS WRONG
                    }
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                }
                break;

            case 5:
                char g5H27[] = "\n\n\t\t\t\t -----------------------------------------------------------------------------------";
                for (int i = 0; i < strlen(g5H27); i++)
                {
                    Sleep(10);
                    printf("%c", g5H27[i]); // ------------------------
                }
                char g5H28[] = "\n\n\t\t\t\t HINT : FROM OUTSIDE IT'S COLOR IS SAME WHILE INSIDE THE FRUIT CAN BE PINK OR WHITE ";
                for (int i = 0; i < strlen(g5H28); i++)
                {
                    Sleep(10);
                    printf("%c", g5H28[i]); // HINT : FROM OUTSIDE IT'S COLOR IS SAME WHILE INSIDE CONTENT CAN BE PINK OR WHITE
                }
                for (int i = 0; i < strlen(g5H27); i++)
                {
                    Sleep(10);
                    printf("%c", g5H27[i]); // ------------------------
                }
                printf("\n");
                for (int i = 0; i < strlen(g5H8); i++)
                {
                    Sleep(10);
                    printf("%c", g5H8[i]); //  GUESS THE FRUIT :
                }

                scanf("%d", &userInput);

                if (userInput == (random1 + 1))
                {
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                    for (int i = 0; i < strlen(g5H10); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H10[i]); // YOUR GUESS IS CORRECT
                    }
                    char g5H29[] = "\n\t\t\t\t THE FRUIT IS GUAVA ";
                    for (int i = 0; i < strlen(g5H29); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H29[i]); // THE FRUIT IS GUAVA
                    }
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                }
                else
                {
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                    for (int i = 0; i < strlen(g5H11); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H11[i]); // YOUR GUESS IS WRONGint
                    }
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                }
                break;

            case 6:
                char g5H30[] = "\n\n\t\t\t\t -------------------------------------";
                for (int i = 0; i < strlen(g5H30); i++)
                {
                    Sleep(10);
                    printf("%c", g5H30[i]); // --------------------
                }
                char g5H31[] = "\n\n\t\t\t\t HINT : WHEN DRIED IS BECOMES RAISINS ";
                for (int i = 0; i < strlen(g5H31); i++)
                {
                    Sleep(10);
                    printf("%c", g5H31[i]); // HINT : WHEN DRIED IS BECOMES RAISINS
                }
                for (int i = 0; i < strlen(g5H30); i++)
                {
                    Sleep(10);
                    printf("%c", g5H30[i]); // --------------------
                }
                printf("\n");
                for (int i = 0; i < strlen(g5H8); i++)
                {
                    Sleep(10);
                    printf("%c", g5H8[i]); //  GUESS THE FRUIT :
                }
                scanf("%d", &userInput);

                if (userInput == (random1 + 1))
                {
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                    for (int i = 0; i < strlen(g5H10); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H10[i]); // YOUR GUESS IS CORRECT
                    }
                    char g5H32[] = "\n\t\t\t\t THE FRUIT IS GRAPES ";
                    for (int i = 0; i < strlen(g5H32); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H32[i]); // THE FRUIT IS GRAPES
                    }
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                }
                else
                {
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                    for (int i = 0; i < strlen(g5H11); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H11[i]); // YOUR GUESS IS WRONG
                    }
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                }
                break;

            case 7:
                char g5H33[] = "\n\n\t\t\t\t --------------------------------";
                for (int i = 0; i < strlen(g5H33); i++)
                {
                    Sleep(10);
                    printf("%c", g5H33[i]); // ----------------
                }
                char g5H34[] = "\n\n\t\t\t\t HINT : MOSTLY USED IN HAIR DYE'S";
                for (int i = 0; i < strlen(g5H34); i++)
                {
                    Sleep(10);
                    printf("%c", g5H34[i]); // HINT : MOSTLY USED IN HAIR DYE'S
                }
                for (int i = 0; i < strlen(g5H33); i++)
                {
                    Sleep(10);
                    printf("%c", g5H33[i]); // ----------------
                }
                printf("\n");
                for (int i = 0; i < strlen(g5H8); i++)
                {
                    Sleep(10);
                    printf("%c", g5H8[i]); //  GUESS THE FRUIT :
                }
                scanf("%d", &userInput);

                if (userInput == (random1 + 1))
                {
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                    for (int i = 0; i < strlen(g5H10); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H10[i]); // YOUR GUESS IS CORRECT
                    }
                    char g5H35[] = "\n\t\t\t\t THE FRUIT IS AMLA ";
                    for (int i = 0; i < strlen(g5H35); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H35[i]); // THE FRUIT IS AMLA
                    }
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                }
                else
                {
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                    for (int i = 0; i < strlen(g5H11); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H11[i]); // YOUR GUESS IS WRONG
                    }
                    for (int i = 0; i < strlen(g5H9); i++)
                    {
                        Sleep(10);
                        printf("%c", g5H9[i]); // =====================
                    }
                }
                break;

            default:
                char g5H36[] = "\n\t\t\t\t OOPS...SOMETHING WENT WRONG !";
                for (int i = 0; i < strlen(g5H36); i++)
                {
                    Sleep(10);
                    printf("%c", g5H36[i]); // OOPS...SOMETHING ENT WRONG !
                }
                break;
            }

            char g5H37[] = "\n\n\t\t\t\t DO YOU WANT TO PLAY AGAIN ( Y FOR YES & N FOR NO ) : ";
            for (int i = 0; i < strlen(g5H37); i++)
            {
                Sleep(10);
                printf("%c", g5H37[i]); // DO YOU WANT TO PLAY AGAIN ( Y FOR YES & N FOR NO ) :
            }

            getchar();
            scanf("%c", &playAgain);

            if (playAgain == 'Y' || playAgain == 'y') system("cls");

        } while (playAgain != 'N' && playAgain != 'n');

        getchar();
        byeBye();
        system("cls");
        goto menu;
        break;

    case 6:
        char h9[] = "\n\n\t\t\t\t\t\t\t BYE...BYE SEE YOU AGAIN...!!!";
        char h10[] = "\n\n\t\t\t\t\t\t\t QUITTING THE PROGRAM...";
        for (int i = 0; i < strlen(h9); i++)
        {
            Sleep(10);
            printf("%c", h9[i]); // BYE...BYE SEE YOU AGAIN...!!!
        }
        for (int i = 0; i < strlen(h10); i++)
        {
            Sleep(10);
            printf("%c", h10[i]); // QUITTING THE PROGRAM...
        }
        for (int i = 0; i < 26; i++)
        {
            Sleep(10);
            printf("%c", design); // design=178
        }
        Sleep(500);
        exit(0);

    default:
        char h11[] = "\n\n\t\t\t\t\t\t\t WRONG INPUT....";
        for (int i = 0; i < strlen(h11); i++)
        {
            Sleep(10);
            printf("%c", h11[i]); // WRONG INPUT....
        }
        for (int i = 0; i < 26; i++)
        {
            Sleep(10);
            printf("%c", design); // design=178
        }
        Sleep(500);
        exit(0);
        break;
    }
    return 0;
}