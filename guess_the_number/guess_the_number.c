#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>

//------------ GUESS THE NUMBER GAME -------------
int number = 0, guess = 0, attempts = 0, flag = 0;
char wantToPlayAgain;
char design = 178;

char g4H1[] = " WELCOME TO GUESS THE NUMBER GAME ";
char g4H2[] = "\n\n\t\t\t\t RULES ARE SIMPLE : ";
char g4H3[] = "\n\t\t\t\t 1. THE COMPUTER WILL SELECT A NUMBER (FROM 1 TO 10) & YOU HAVE TO GUESS THE NUMBER.";
char g4H4[] = "\n\t\t\t\t 2. YOU WILL BE GIVEN 5 ATTEMPTS TO GUESS THE CORRECT NUMBER.";
char g4H5[] = "\n\t\t\t\t 3. IF YOU GUESSED THE NUMBER IN 5 ATTEMPTS YOU ARE THE WINNER.\n";

int main()
{
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

}