#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>
#define esc 27

int count = 0, playerOnePoint = 0, playerTwoPoint = 0, timer = 59, recheck = 0, timeout = 0, restartFlag = -1, quit = -1;
FILE *fptr;
char design = 178;
char ch,ans,dec;
char player1[15], player2[15];

char *arr[] = {"q1.txt", "q2.txt", "q3.txt", "q4.txt", "q5.txt", "q6.txt", "q7.txt", "q8.txt", "q9.txt", "q10.txt", "q11.txt", "q12.txt", "q13.txt", "q14.txt", "q15.txt", "q16.txt", "q17.txt", "q18.txt", "q19.txt", "q20.txt", "q21.txt", "q22.txt", "q23.txt", "q24.txt", "q25.txt", "q26.txt", "q27.txt", "q28.txt", "q29.txt", "q30.txt", "q31.txt", "q32.txt", "q33.txt", "q34.txt", "q35.txt", "q36.txt", "q37.txt", "q38.txt", "q39.txt", "q40.txt", "q41.txt", "q42.txt", "q43.txt", "q44.txt", "q45.txt", "q46.txt", "q47.txt", "q48.txt", "q49.txt", "q50.txt"};

char *tieArr[] = {"tq1.txt", "tq2.txt", "tq3.txt", "tq4.txt", "tq5.txt", "tq6.txt", "tq7.txt", "tq8.txt", "tq9.txt", "tq10.txt", "tq11.txt", "tq12.txt"};

//-------------- Quiz double question prevention array -------------------------------
int overwriteArray[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
int overwriteTieArray[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
int index1 = 0;
int index2 = 0;

char H1[] = " WELCOME TO QUIZ OF C/C++ LANGUAGE ";
char H2[] = "\n\n\t\t\t\tRULES ARE SIMPLE : ";
char H3[] = "\n\t\t\t\t1. THERE WILL TOTAL 5 QUESTIONS WITH 4 OPTIONS.";
char H4[] = "\n\t\t\t\t2. ONLY ONE OPTION IS CORRECT.";
char H5[] = "\n\t\t\t\t3. PLAYER WITH HIGHEST SCORE WILL WIN.";
char H6[] = "\n\t\t\t\t4. FIRST PLAYER 1 WILL GIVE ANSWERS TO 5 QUESTIONS THEN PLAYER 2 WILL ANSWER NEXT 5 QUESTIONS.";
char H7[] = "\n\t\t\t\t5. 60 SECS TIME WILL BE GIVEN TO EACH QUESTION, COUNTDOWN WLL START AS SOON AS QUESTION IS DISPLAYED.";
char H8[] = "\n\t\t\t\t6. IF THERE IS A TIE BETWEEN SCORE OF PLAYER 1 & PLAYER 2, THEN THERE WILL BE AN TIE BREAKER ROUND.\n";
char H9[] = "\n\t\t\t\t7. PRESS ESC KEY TO QUIT THE QUIZ\n";

char TH1[] = " WELCOME TIE BREAKER ROUND ";
char TH2[] = "\n\n\t\t\t\tRULES OF TIE BREAKER ROUND ARE :";
char TH3[] = "\n\t\t\t\t1. THERE WILL BE TOTAL 3 QUESTIONS WITH 4 OPTIONS IN THIS ROUND.";
char TH4[] = "\n\t\t\t\t2. ONLY ONE OPTION IS CORRECT.";
char TH5[] = "\n\t\t\t\t3. TO WIN THIS ROUND PLAYER SHOULD SCORE MINIMUM 3 POINTS OUT OF 5.";
char TH6[] = "\n\t\t\t\t4. PLAYER 1 WILL GIVE ANSWERS TO 5 QUESTIONS FIRST THEN PLAYER 2 WILL ANSWER NEXT 5 QUESTIONS.";
char TH7[] = "\n\t\t\t\t5. 60 SECS TIME WILL BE GIVEN TO EACH QUESTION, COUNTDOWN WLL START AS SOON AS QUESTION IS DISPLAYED.\n";


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


int main(){
    newstart:
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
        for (int i = 0; i < strlen(H1); i++)
        {
            Sleep(10);
            printf("%c", H1[i]); //  WELCOME TO QUIZ OF C/C++ LANGUAGE
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
        for (int i = 0; i < strlen(H2); i++)
        {
            Sleep(10);
            printf("%c", H2[i]); //  RULES ARE SIMPLE :
        }
        for (int i = 0; i < strlen(H3); i++)
        {
            Sleep(10);
            printf("%c", H3[i]); //  1. THERE WILL TOTAL 5 QUESTIONS WITH 4 OPTIONS
        }
        for (int i = 0; i < strlen(H4); i++)
        {
            Sleep(10);
            printf("%c", H4[i]); //  2. ONLY ONE OPTION IS CORRECT.
        }
        for (int i = 0; i < strlen(H5); i++)
        {
            Sleep(10);
            printf("%c", H5[i]); //  3. PLAYER WITH HIGHEST SCORE WILL WIN.
        }
        for (int i = 0; i < strlen(H6); i++)
        {
            Sleep(10);
            printf("%c", H6[i]); //  4. FIRST PLAYER WILL GIVE ANSWERS TO 5 QUESTIONS THEN PLAYER 2 WILL ANSWER NEXT 5 QUESTIONS.
        }
        for (int i = 0; i < strlen(H7); i++)
        {
            Sleep(10);
            printf("%c", H7[i]); // 5. 60 SECONDS TIME WILL BE GIVEN TO EACH QUESTION, COUNTDOWN WLL START AS SOON AS QUESTION IS DISPLAYED.
        }
        for (int i = 0; i < strlen(H8); i++)
        {
            Sleep(10);
            printf("%c", H8[i]); //  6. IF THERE IS A TIE BETWEEN SCORE OF PLAYER 1 & PLAYER 2, THEN THERE WILL BE AN TIE BREAKER ROUND.
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(10);
            printf("%c", design); // design=178
        }

        char H8[] = "\n\n\t\t\t\tENTER PLAYER 1 NAME : ";
        for (int i = 0; i < strlen(H8); i++)
        {
            Sleep(8);
            printf("%c", H8[i]); // ENTER PLAYER 1 NAME :
        }
        scanf("%s", player1);

        char H9[] = "\n\t\t\t\tENTER PLAYER 2 NAME : ";
        for (int i = 0; i < strlen(H9); i++)
        {
            Sleep(8);
            printf("%c", H9[i]); // ENTER PLAYER 2 NAME :
        }
        scanf("%s", player2);
        getchar();

        char H10[] = "\n\t\t\t\tPLAYER NAMES CAN'T BE SAME !!\n\t\t\t\t RE-ENTER PLAYER 2 NAME : ";
        if (strcmp(player1, player2) == 0)
        {
            while (strcmp(player1, player2) == 0)
            { // this if and while combination prevents same player name input
                for (int i = 0; i < strlen(H10); i++)
                {
                    Sleep(8);
                    printf("%c", H10[i]); // PLAYER NAMES CAN'T BE SAME !! RE-ENTER PLAYER 2 NAME :
                }
                scanf("%s", player2);
            }
        }

        char H11[] = "\n\n\t\t\t\t===========================================================";

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
                system("cls");
            }
            if (restartFlag == 1)
            {
                system("cls");
                goto newstart;
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

        for (int i = 0; i < strlen(H11); i++)
        {
            Sleep(8);
            printf("%c", H11[i]); // ===================
        }
        printf("\n\n\t\t\t\t%s YOUR TURN ENDS ", player1);
        printf("\n\n\t\t\t\tSCORE : %d ", playerOnePoint);
        printf("\n\n\t\t\t\tACCURACY : %.0f %% ", (((float)playerOnePoint / 5) * 100)); // calculates the accuracy by calculating %
        for (int i = 0; i < strlen(H11); i++)
        {
            Sleep(8);
            printf("%c", H11[i]); // ===================
        }
        printf("\n");
        for (int i = 0; i < strlen(H11); i++)
        {
            Sleep(8);
            printf("%c", H11[i]); // ===================
        }

        char H22[] = "\n\n\t\t\t\tPRESS ENTER TO CONTINUE TOWARDS ";
        strcat(H22, player2);
        char H23[] = "'s TURN...";
        strcat(H22, H23);
        for (int i = 0; i < strlen(H22); i++)
        {
            Sleep(8);
            printf("%c", H22[i]); // PRESS ENTER TO CONTINUE TOWARDS (player2)'s TURN...
        }
        getchar();

        char H24[100] = "\n\t\t\t\t";
        strcat(H24, player2);
        char H25[] = "'s QUESTION ";
        strcat(H24, H25);

        for (int h = 1; h <= 5; h++) // this loops starts the quiz for player 1 by displaying 5 questions from the txt file
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
            }
            if (restartFlag == 1)
            {
                system("cls");
                goto newstart;
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

        char H26[] = "\n\n\t\t\t\t===========================================================";
        for (int i = 0; i < strlen(H26); i++)
        {
            Sleep(8);
            printf("%c", H26[i]); // ================
        }
        printf("\n\n\t\t\t\t%s YOUR TURN ENDS ", player2);
        printf("\n\n\t\t\t\tSCORE : %d ", playerTwoPoint);
        printf("\n\n\t\t\t\tACCURACY : %.0f %% ", (((float)playerTwoPoint / 5) * 100));
        for (int i = 0; i < strlen(H26); i++)
        {
            Sleep(8);
            printf("%c", H26[i]); // ================
        }

        char H27[] = "\n\n\t\t\t\t=====================================\n";
        for (int i = 0; i < strlen(H27); i++)
        {
            Sleep(8);
            printf("%c", H27[i]); // ================
        }
        printf("\n\t\t\t\tSCORE TABLE");
        printf("\n\t\t\t\t%s's SCORE : %d & Accuracy %.0f %%", player1, playerOnePoint, (((float)playerOnePoint / 5) * 100));
        printf("\n\t\t\t\t%s's SCORE : %d & Accuracy %.0f %%", player2, playerTwoPoint, (((float)playerTwoPoint / 5) * 100));
        for (int i = 0; i < strlen(H27); i++)
        {
            Sleep(8);
            printf("%c", H27[i]); // ================
        }

        char H28[] = "\n\n\n\t\t\t\t=-=-==-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
        char H29[100] = "\n\n\n\t\t\t\tWINNER OF THIS QUIZ COMPETTION IS ";
        strcat(H29, player1);

        if (playerOnePoint > playerTwoPoint)
        {
            for (int i = 0; i < strlen(H28); i++)
            {
                Sleep(8);
                printf("%c", H28[i]); // =-=-==-=-=-=-=-=-=-
            }
            for (int i = 0; i < strlen(H29); i++)
            {
                Sleep(8);
                printf("%c", H29[i]); // WINNER OF THIS QUIZ COMPETTION IS (player1)
            }
            for (int i = 0; i < strlen(H28); i++)
            {
                Sleep(8);
                printf("%c", H28[i]); // =-=-==-=-=-=-=-=-=-
            }
            printf("\n");
            quizAgain();
            if (restartFlag == 0)
            {
                restartFlag = -1;
            }
            if (restartFlag == 1)
            {
                goto newstart;
            }
        }
        else if (playerOnePoint == playerTwoPoint) //--------------------------------------------------------- TIE BREAKER ROUUND -------------------------
        {
            for (int i = 0; i < strlen(H28); i++)
            {
                Sleep(8);
                printf("%c", H28[i]); // =-=-==-=-=-=-=-=-=-
            }
            char H30[100] = "\n\n\n\t\t\t\tIT'S A TIE BETWEEN ";
            strcat(H30, player1);
            char H31[] = " & ";
            strcat(H30, H31);
            strcat(H30, player2);

            for (int i = 0; i < strlen(H30); i++)
            {
                Sleep(8);
                printf("%c", H30[i]); // IT'S A TIE BETWEEN player1 & player2
            }

            char H32[] = "\n\n\n\t\t\t\tPRESS ENTER FOR TIE BREAKER ROUND...";
            for (int i = 0; i < strlen(H32); i++)
            {
                Sleep(8);
                printf("%c", H32[i]); // PRESS ENTER FOR TIE BREAKER ROUND...
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
            for (int i = 0; i < strlen(TH1); i++)
            {
                Sleep(10);
                printf("%c", TH1[i]); // WELCOME TIE BREAKER ROUND
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
            for (int i = 0; i < strlen(TH2); i++)
            {
                Sleep(10);
                printf("%c", TH2[i]); // RULES OF TIE BREAKER ROUND ARE :
            }
            for (int i = 0; i < strlen(TH3); i++)
            {
                Sleep(10);
                printf("%c", TH3[i]); // 1. THERE WILL BE TOTAL 3 QUESTIONS WITH 4 OPTIONS IN THIS ROUND.
            }
            for (int i = 0; i < strlen(TH4); i++)
            {
                Sleep(10);
                printf("%c", TH4[i]); // 2. ONLY ONE OPTION IS CORRECT.
            }
            for (int i = 0; i < strlen(TH5); i++)
            {
                Sleep(10);
                printf("%c", TH5[i]); // 3. TO WIN THIS ROUND PLAYER SHOULD SCORE MINIMUM 2 POINTS OUT OF 3.
            }
            for (int i = 0; i < strlen(TH6); i++)
            {
                Sleep(10);
                printf("%c", TH6[i]); // 4. PLAYER 1 WILL GIVE ANSWERS TO 5 QUESTIONS FIRST THEN PLAYER 2 WILL ANSWER NEXT 5 QUESTIONS.
            }
            for (int i = 0; i < strlen(TH7); i++)
            {
                Sleep(10);
                printf("%c", TH7[i]); // \n\t\t\t\t5. 60 SECONDS TIME WILL BE GIVEN TO EACH QUESTION, COUNTDOWN WLL START AS SOON AS QUESTION IS DISPLAYED.\n
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
                }
                if (restartFlag == 1)
                {
                    system("cls");
                    goto newstart;
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

            for (int i = 0; i < strlen(H26); i++)
            {
                Sleep(8);
                printf("%c", H26[i]); // ===================
            }
            printf("\n\n\t\t\t\t%s YOUR TIE BREAKER TURN ENDS ", player1);
            printf("\n\n\t\t\t\tTIE BREAKER SCORE IS %d", playerOnePoint);
            printf("\n\n\t\t\t\tTIE BREAKER ACCURACY : %.0f %% ", (((float)playerOnePoint / 5) * 100));
            for (int i = 0; i < strlen(H26); i++)
            {
                Sleep(8);
                printf("%c", H26[i]); // ===================
            }
            for (int i = 0; i < strlen(H26); i++)
            {
                Sleep(8);
                printf("%c", H26[i]); // ===================
            }

            char H35[] = "\n\n\t\t\t\tPRESS ENTER TO CONTINUE TOWARDS ";
            strcat(H35, player2);
            char H36[] = "'s TURN...";
            strcat(H35, H36);
            for (int i = 0; i < strlen(H35); i++)
            {
                Sleep(8);
                printf("%c", H35[i]); // PRESS ENTER TO CONTINUE TOWARDS (player2)'s TURN...
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
                }
                if (restartFlag == 1)
                {
                    system("cls");
                    goto newstart;
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

            for (int i = 0; i < strlen(H26); i++)
            {
                Sleep(8);
                printf("%c", H26[i]); // ================
            }
            printf("\n\n\t\t\t\t%s YOUR TIE BREAKER TURN ENDS ", player1);
            printf("\n\n\t\t\t\tTIE BREAKER SCORE IS %d", playerOnePoint);
            printf("\n\n\t\t\t\tTIE BREAKER ACCURACY : %.0f %% ", (((float)playerOnePoint / 5) * 100));
            for (int i = 0; i < strlen(H26); i++)
            {
                Sleep(8);
                printf("%c", H26[i]); // ================
            }

            for (int i = 0; i < strlen(H27); i++)
            {
                Sleep(8);
                printf("%c", H27[i]); // ================
            }
            printf("\n\t\t\t\tTIE BREAKER SCORE TABLE");
            printf("\n\t\t\t\t%s's SCORE : %d & TIE BREAKER ACCURACY : %.0f %% ", player1, playerOnePoint, (((float)playerOnePoint / 5) * 100));
            printf("\n\t\t\t\t%s's SCORE : %d & TIE BREAKER ACCURACY : %.0f %% ", player2, playerTwoPoint, (((float)playerTwoPoint / 5) * 100));
            for (int i = 0; i < strlen(H27); i++)
            {
                Sleep(8);
                printf("%c", H27[i]); // ================
            }

            char H39[100] = "\n\n\n\t\t\t\tWINNER OF THIS QUIZ COMPETTION IS ";
            strcat(H39, player2);

            if (playerOnePoint > playerTwoPoint)
            {
                for (int i = 0; i < strlen(H28); i++)
                {
                    Sleep(8);
                    printf("%c", H28[i]); // =-=-==-=-=-=-=-=-=-
                }
                for (int i = 0; i < strlen(H29); i++)
                {
                    Sleep(8);
                    printf("%c", H29[i]); // WINNER OF THIS QUIZ COMPETTION IS (player1)
                }
                for (int i = 0; i < strlen(H28); i++)
                {
                    Sleep(8);
                    printf("%c", H28[i]); // =-=-==-=-=-=-=-=-=-
                }
                printf("\n");
                quizAgain();
                if (restartFlag == 0)
                {
                    restartFlag = -1;
                }
                if (restartFlag == 1)
                {
                    goto newstart;
                }
            }
            else if (playerTwoPoint > playerOnePoint)
            {
                char H39[100] = "\n\n\n\t\t\t\tWINNER OF THIS QUIZ COMPETTION IS ";
                strcat(H39, player2);
                for (int i = 0; i < strlen(H28); i++)
                {
                    Sleep(8);
                    printf("%c", H28[i]); // =-=-==-=-=-=-=-=-=-
                }
                for (int i = 0; i < strlen(H39); i++)
                {
                    Sleep(8);
                    printf("%c", H39[i]); // WINNER OF THIS QUIZ COMPETTION IS (player2)
                }
                for (int i = 0; i < strlen(H28); i++)
                {
                    Sleep(8);
                    printf("%c", H28[i]); // =-=-==-=-=-=-=-=-=-
                }
                printf("\n");
                quizAgain();
                if (restartFlag == 0)
                {
                    restartFlag = -1;
                }
                if (restartFlag == 1)
                {
                    goto newstart;
                }
            }
            else
            {
                char H40[150] = "\n\n\n\t\t\t\tAGAIN IT'S A TIE IN TIE-BREAKER ROUND BETWEEN ";
                strcat(H40, player1);
                char H41[] = " & ";
                strcat(H40, H41);
                strcat(H40, player2);
                for (int i = 0; i < strlen(H28); i++)
                {
                    Sleep(8);
                    printf("%c", H28[i]); // =-=-==-=-=-=-=-=-=-
                }
                for (int i = 0; i < strlen(H40); i++)
                {
                    Sleep(8);
                    printf("%c", H40[i]); // AGAIN IT'S A TIE IN TIE-BREAKER ROUND BETWEEN player1 & player2
                }
                for (int i = 0; i < strlen(H28); i++)
                {
                    Sleep(8);
                    printf("%c", H28[i]); // =-=-==-=-=-=-=-=-=-
                }
                printf("\n");
                quizAgain();
                if (restartFlag == 0)
                {
                    restartFlag = -1;
                }
                if (restartFlag == 1)
                {
                    goto newstart;
                }
            }
        }
        else
        {
            char H41[100] = "\n\n\n\t\t\t\tWINNER OF THIS QUIZ COMPETTION IS ";
            strcat(H41, player2);
            for (int i = 0; i < strlen(H28); i++)
            {
                Sleep(8);
                printf("%c", H28[i]); // =-=-==-=-=-=-=-=-=-
            }
            for (int i = 0; i < strlen(H41); i++)
            {
                Sleep(8);
                printf("%c", H41[i]); // WINNER OF THIS QUIZ COMPETTION IS (player2)
            }
            for (int i = 0; i < strlen(H28); i++)
            {
                Sleep(8);
                printf("%c", H28[i]); // =-=-==-=-=-=-=-=-=-
            }
            printf("\n");
            quizAgain();
            if (restartFlag == 0)
            {
                restartFlag = -1;
            }
            if (restartFlag == 1)
            {
                system("cls");
                goto newstart;
            }
        }
}