#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>

//------------------- ROCK,PAPER & SCISSORS GAME -------------
int userCounter = 0, computerCounter = 0, whatDidComputer = 0;
char name[15];
char design = 178;
char playerInput, newGame;
char H1[] = " WELCOME TO ROCK,PAPER & SCISSORS GAME ";
char H2[] = "\n\n\t\t\t\t RULES ARE SIMPLE :";
char H3[] = "\n\t\t\t\t 1. ROCK VS SCISSORS = ROCK WINS";
char H4[] = "\n\t\t\t\t 2. PAPER VS SCISSORS = SCISSORS WINS";
char H5[] = "\n\t\t\t\t 3. PAPER VS ROCK = PAPER WINS";
char H6[] = "\n\t\t\t\t 4. THERE WILL BE 3 TURNS AND PLAYER WITH HIGHEST POINTS WILL BE THE WINNER ";
char H7[] = "\n\t\t\t\t 5. ENTER R = ROCK, P = PAPER, S = SCISSORS\n";
char H8[] = "\n\n\t\t\t\t ENTER YOUR NAME : ";

int main()
{
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
        for (int i = 0; i < strlen(H1); i++)
        {
            Sleep(10);
            printf("%c", H1[i]); // WELCOME TO ROCK,PAPER & SCISSORS GAME
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
        for (int i = 0; i < strlen(H2); i++)
        {
            Sleep(10);
            printf("%c", H2[i]); // RULES ARE SIMPLE :
        }
        for (int i = 0; i < strlen(H3); i++)
        {
            Sleep(10);
            printf("%c", H3[i]); // 1. ROCK VS SCISSORS = ROCK WINS
        }
        for (int i = 0; i < strlen(H4); i++)
        {
            Sleep(10);
            printf("%c", H4[i]); // 2. PAPER VS SCISSORS = SCISSORS WINS
        }
        for (int i = 0; i < strlen(H5); i++)
        {
            Sleep(10);
            printf("%c", H5[i]); // 3. PAPER VS ROCK = PAPER WINS
        }
        for (int i = 0; i < strlen(H6); i++)
        {
            Sleep(10);
            printf("%c", H6[i]); // 4.THERE WILL BE 3 TURNS AND PLAYER WITH HIGHEST POINTS WILL BE THE WINNER
        }
        for (int i = 0; i < strlen(H7); i++)
        {
            Sleep(10);
            printf("%c", H7[i]); // 5.ENTER R = ROCK, P = PAPER,S = SCISSORS
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(10);
            printf("%c", design); // design=178
        }
        for (int i = 0; i < strlen(H8); i++)
        {
            Sleep(10);
            printf("%c", H8[i]); // ENTER YOUR NAME :
        }
        scanf("%s", name);

        char H9[50] = "\n\t\t\t\t ------ ";
        char H10[] = "'s TURN ------ ";
        strcat(H9, name);
        strcat(H9, H10);
        char H11[] = "\n\t\t\t\t CHOOSE FROM R = ROCK, P = PAPER, S = SCISSORS : ";
        char H12[] = "\n\t\t\t\t WRONG INPUT...RE-ENTER FROM R = ROCK, P = PAPER, S = SCISSORS : ";

        for (int f = 1; f <= 3; f++) // this loop runs 3 times as user & computer plays 3 turns
        {
            for (int i = 0; i < strlen(H9); i++)
            {
                Sleep(8);
                printf("%c", H9[i]); // ------ Username's Turn ------
            }
            for (int i = 0; i < strlen(H11); i++)
            {
                Sleep(8);
                printf("%c", H11[i]); // CHOOSE FROM R = ROCK, P = PAPER,S = SCISSORS :
            }
            getchar();
            scanf("%c", &playerInput);
            while (playerInput != 'r' && playerInput != 'R' && playerInput != 'p' && playerInput != 'P' && playerInput != 's' && playerInput != 'S')
            {                                           // this loop prevents user input other than the characters R,P,S,r,p,s
                for (int i = 0; i < strlen(H12); i++) // WRONG INPUT...RE-ENTER FROM R = ROCK, P = PAPER,S = SCISSORS :
                {
                    Sleep(8);
                    printf("%c", H12[i]);
                }
                getchar();
                scanf("%c", &playerInput);
            }
            if (playerInput == 'r' || playerInput == 'R')
            {
                char tempName[50];
                strcpy(tempName, name);
                char H13[] = "'s TURN : ROCK ";
                strcat(tempName, H13);

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
                char H14[] = "'s TURN : PAPER ";
                strcat(tempName, H14);
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
                char H15[] = "'s TURN : SCISSOR ";
                strcat(tempName, H15);
                printf("\n\t\t\t\t ");
                for (int i = 0; i < strlen(tempName); i++)
                {
                    Sleep(8);
                    printf("%c", tempName[i]); // (Username)'s TURN : SCISSOR
                }
            }

            srand(time(NULL));            // this fn gives a different seed value for the random generator function,as time changes every time the fn is called
            whatDidComputer = rand() % 3; // random number generator inbuilt function in library which generators number from 0 to 2

            char H16[] = "\n\t\t\t\t !!! COMPUTER WINS !!!\n";
            char H17[50] = "\n\t\t\t\t !!! ";
            strcat(H17, name);
            char H18[] = " WINS !!!\n";
            strcat(H17, H18);
            char H19[] = "\n\t\t\t\t ----- IT'S A TIE -----\n";

            if (whatDidComputer == 0)
            {
                char H20[] = "\n\t\t\t\t COMPUTER'S TURN : ROCK";
                for (int i = 0; i < strlen(H20); i++)
                {
                    Sleep(8);
                    printf("%c", H20[i]); // COMPUTER'S TURN : ROCK
                }
            }
            else if (whatDidComputer == 1)
            {
                char H21[] = "\n\t\t\t\t COMPUTER'S TURN : PAPER";
                for (int i = 0; i < strlen(H21); i++)
                {
                    Sleep(8);
                    printf("%c", H21[i]); // COMPUTER'S TURN : PAPER
                }
            }
            else
            {
                char H22[] = "\n\t\t\t\t COMPUTER'S TURN : SCISSOR";
                for (int i = 0; i < strlen(H22); i++)
                {
                    Sleep(8);
                    printf("%c", H22[i]); // COMPUTER'S TURN : SCISSOR
                }
            }

            if ((playerInput == 'r' || playerInput == 'R') && whatDidComputer == 1) // paper
            {
                for (int i = 0; i < strlen(H16); i++)
                {
                    Sleep(8);
                    printf("%c", H16[i]); // !!! COMPUTER WINS !!!
                }
                computerCounter++;
            }
            else if ((playerInput == 'r' || playerInput == 'R') && whatDidComputer == 2) // scissor
            {
                for (int i = 0; i < strlen(H17); i++)
                {
                    Sleep(8);
                    printf("%c", H17[i]); // !!! (Username) WINS !!!
                }
                userCounter++;
            }
            else if ((playerInput == 'p' || playerInput == 'P') && whatDidComputer == 0) // rock
            {
                for (int i = 0; i < strlen(H17); i++)
                {
                    Sleep(8);
                    printf("%c", H17[i]); // !!! (Username) WINS !!!
                }
                userCounter++;
            }
            else if ((playerInput == 'p' || playerInput == 'P') && whatDidComputer == 2) // scissors
            {
                for (int i = 0; i < strlen(H16); i++)
                {
                    Sleep(8);
                    printf("%c", H16[i]); // !!! COMPUTER WINS !!!
                }
                computerCounter++;
            }
            else if ((playerInput == 's' || playerInput == 'S') && whatDidComputer == 0) // rock
            {
                for (int i = 0; i < strlen(H16); i++)
                {
                    Sleep(8);
                    printf("%c", H16[i]); // !!! COMPUTER WINS !!!
                }
                computerCounter++;
            }
            else if ((playerInput == 's' || playerInput == 'S') && whatDidComputer == 1) // paper
            {
                for (int i = 0; i < strlen(H17); i++)
                {
                    Sleep(8);
                    printf("%c", H17[i]); // !!! (Username) WINS !!!
                }
                userCounter++;
            }
            else
            {
                for (int i = 0; i < strlen(H19); i++)
                {
                    Sleep(8);
                    printf("%c", H19[i]); // ----- IT'S A TIE -----
                }
            }
        }
        printf("\n\t\t\t\t");
        for (int i = 0; i < 100; i++)
        {
            Sleep(8);
            printf("%c", design);
        }

        char H23[] = "\n\n\t\t\t\t SCORE TABLE";
        for (int i = 0; i < strlen(H23); i++)
        {
            Sleep(8);
            printf("%c", H23[i]); // SCORE TABLE
        }

        char tempName2[50] = "\n\t\t\t\t ";
        strcat(tempName2, name);
        char H24[] = "'s SCORE : ";
        strcat(tempName2, H24);

        for (int i = 0; i < strlen(tempName2); i++)
        {
            Sleep(8);
            printf("%c", tempName2[i]); // (Username)'s SCORE :
        }
        printf("%d", userCounter); // (Username)'s SCORE : userCounter

        char H25[] = "\n\t\t\t\t COMPUTER's SCORE : ";
        for (int i = 0; i < strlen(H25); i++)
        {
            Sleep(8);
            printf("%c", H25[i]); // COMPUTER's SCORE :
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

            char H26[200] = " THE WINNER IS ";
            strcat(H26, name);

            for (int i = 0; i < strlen(H26); i++)
            {
                Sleep(8);
                printf("%c", H26[i]); // --- THE WINNER IS (Username) ---
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
            char H27[] = " THE WINNER IS THE COMPUTER ";
            for (int i = 0; i < strlen(H27); i++)
            {
                Sleep(8);
                printf("%c", H27[i]); // --- THE WINNER IS THE COMPUTER ---
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
            char H28[] = " IT'S A TIE ";
            for (int i = 0; i < strlen(H28); i++)
            {
                Sleep(8);
                printf("%c", H28[i]); // --- IT'S A TIE ---
            }
            for (int i = 1; i <= 44; i++)
            {
                Sleep(8);
                printf("%c", design); // design = 178
            }
        }

        char H29[] = "\n\n\t\t\t\t TO START A NEW GAME ENTER Y FOR YES OR N FOR NO : ";
        for (int i = 0; i < strlen(H29); i++)
        {
            Sleep(8);
            printf("%c", H29[i]); // TO START A NEW GAME ENTER Y FOR YES OR N FOR NO :
        }
        getchar();
        scanf("%c", &newGame);

        char H30[] = "\n\t\t\t\t WRONG INPUT...RE-ENTER TO START A NEW GAME ENTER Y FOR YES OR N FOR NO : ";
        while (newGame != 'Y' && newGame != 'y' && newGame != 'n' && newGame != 'N')
        { // this loop prevents user from giving an input other than Y,N,y,n
            for (int i = 0; i < strlen(H30); i++)
            {
                Sleep(8);
                printf("%c", H30[i]); // WRONG INPUT...RE-ENTER TO START A NEW GAME ENTER Y FOR YES OR N FOR NO :
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
    return 0;
}
