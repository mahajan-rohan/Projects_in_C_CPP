#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>

//---------------- GUESS THE FRUIT GAME --------------------------------------------------
char input[20];
char playAgain;
int userInput = 0;
char *str[] = {"APPLE", "BANANA", "WATERMELON", "FIG", "MANGO", "GUAVA", "GRAPES", "AMLA"};
int choice = 0;
char design = 178;
char H1[] = " WELCOME TO GUESS THE FRUIT GAME ";
char H2[] = "\n\n\t\t\t\t RULES ARE SIMPLE : ";
char H3[] = "\n\t\t\t\t 1. THERE WILL A LIST OF FRUITS.";
char H4[] = "\n\t\t\t\t 2. YOU WILL BE PROVIDED WITH A HINT TO GUESS THE FRUIT.";
char H5[] = "\n\t\t\t\t 3. IF YOU GUESSED THE FRUIT IN ONLY 1 ATTEMPT THEN YOU ARE THE WINNER.";
char H6[] = "\n\t\t\t\t 4. ENTER THE SERIAL NUMBER FROM THE LIST.\n";

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
        for (int i = 0; i < 33; i++)
        {
            Sleep(10);
            printf("%c", design); // design=178
        }
        for (int i = 0; i < strlen(H1); i++)
        {
            Sleep(10);
            printf("%c", H1[i]); //  WELCOME TO GUESS THE NUMBER GAME
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
        for (int i = 0; i < strlen(H2); i++)
        {
            Sleep(10);
            printf("%c", H2[i]); //  RULES ARE SIMPLE :
        }
        for (int i = 0; i < strlen(H3); i++)
        {
            Sleep(10);
            printf("%c", H3[i]); //  1. THERE WILL A LIST OF FRUITS.
        }
        for (int i = 0; i < strlen(H4); i++)
        {
            Sleep(10);
            printf("%c", H4[i]); //  2.YOU WILL BE GIVEN 5 ATTEMPTS TO GUESS THE CORRECT NUMBER.
        }
        for (int i = 0; i < strlen(H5); i++)
        {
            Sleep(10);
            printf("%c", H5[i]); //  3.IF YOU GUESSED THE NUMBER IN 5 ATTEMPTS YOU ARE THE WINNER.
        }
        for (int i = 0; i < strlen(H6); i++)
        {
            Sleep(10);
            printf("%c", H6[i]); //  4. ENTER THE SERIAL NUMBER FROM THE LIST.
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
        char H10[] = "\n\t\t\t\t YOUR GUESS IS CORRECT";
        char H11[] = "\n\t\t\t\t YOUR GUESS IS WRONG";

        switch (random1)
        {
        case 0:
            char H12[] = "\n\n\t\t\t\t --------------------------------------------------------------------------";
            for (int i = 0; i < strlen(H12); i++)
            {
                Sleep(10);
                printf("%c", H12[i]); //  ---------------
            }
            char H13[] = "\n\n\t\t\t\t HINT : INDIA HAS MORE EXPORT FOR THIS FRUIT & MAINLY PRODUCED IN KASHMIR ";
            for (int i = 0; i < strlen(H13); i++)
            {
                Sleep(10);
                printf("%c", H13[i]); //  HINT : INDIA HAS MORE EXPORT FOR THIS FRUIT & MAINLY PRODUCED IN KASHMIR
            }
            for (int i = 0; i < strlen(H12); i++)
            {
                Sleep(10);
                printf("%c", H12[i]); //  ---------------
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
                for (int i = 0; i < strlen(H10); i++)
                {
                    Sleep(10);
                    printf("%c", H10[i]); // YOUR GUESS IS CORRECT
                }
                char H14[] = "\n\t\t\t\t THE FRUIT IS APPLE ";
                for (int i = 0; i < strlen(H14); i++)
                {
                    Sleep(10);
                    printf("%c", H14[i]); // THE FRUIT IS APPLE
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
                for (int i = 0; i < strlen(H11); i++)
                {
                    Sleep(10);
                    printf("%c", H11[i]); // YOUR GUESS IS WRONG
                }
                for (int i = 0; i < strlen(g5H9); i++)
                {
                    Sleep(10);
                    printf("%c", g5H9[i]); // =====================
                }
            }
            break;

        case 1:
            char H15[] = "\n\n\t\t\t\t --------------------------------------------------";
            for (int i = 0; i < strlen(H15); i++)
            {
                Sleep(10);
                printf("%c", H15[i]); // ------------
            }
            char H16[] = "\n\n\t\t\t\t HINT : IT'S ARTIFICALLY RIPENED BY INJECTING ETHYL";
            for (int i = 0; i < strlen(H16); i++)
            {
                Sleep(10);
                printf("%c", H16[i]); // HINT : IT'S ARTIFICALLY RIPENED BY INJECTING ETHYL
            }
            for (int i = 0; i < strlen(H15); i++)
            {
                Sleep(10);
                printf("%c", H15[i]); // ------------
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
                for (int i = 0; i < strlen(H10); i++)
                {
                    Sleep(10);
                    printf("%c", H10[i]); // YOUR GUESS IS CORRECT
                }
                char H17[] = "\n\t\t\t\t THE FRUIT IS BANANA ";
                for (int i = 0; i < strlen(H17); i++)
                {
                    Sleep(10);
                    printf("%c", H17[i]); // THE FRUIT IS BANANA
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
                for (int i = 0; i < strlen(H11); i++)
                {
                    Sleep(10);
                    printf("%c", H11[i]); // YOUR GUESS IS WRONG
                }
                for (int i = 0; i < strlen(g5H9); i++)
                {
                    Sleep(10);
                    printf("%c", g5H9[i]); // =====================
                }
            }
            break;

        case 2:
            char H18[] = "\n\n\t\t\t\t ------------------------------------------------------------------------------";
            for (int i = 0; i < strlen(H18); i++)
            {
                Sleep(10);
                printf("%c", H18[i]); // ----------------------
            }
            char H19[] = "\n\n\t\t\t\t HINT : IT HAS MORE WATER CONTENT THAN OTHER FRUITS & MOSTLY PREFERED IN SUMMER";
            for (int i = 0; i < strlen(H19); i++)
            {
                Sleep(10);
                printf("%c", H19[i]); // HINT : IT HAS MORE WATER CONTENT THAN OTHER FRUITS & MOSTLY PREFERED IN SUMMER
            }
            for (int w = 0; w < strlen(H18); w++)
            {
                Sleep(10);
                printf("%c", H18[w]); // ----------------------
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
                for (int i = 0; i < strlen(H10); i++)
                {
                    Sleep(10);
                    printf("%c", H10[i]); // YOUR GUESS IS CORRECT
                }
                char H20[] = "\n\t\t\t\t THE FRUIT IS WATERMELON ";
                for (int i = 0; i < strlen(H20); i++)
                {
                    Sleep(10);
                    printf("%c", H20[i]); // THE FRUIT IS WATERMELON
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
                for (int i = 0; i < strlen(H11); i++)
                {
                    Sleep(10);
                    printf("%c", H11[i]); // YOUR GUESS IS WRONG
                }
                for (int i = 0; i < strlen(g5H9); i++)
                {
                    Sleep(10);
                    printf("%c", g5H9[i]); // =====================
                }
            }
            break;

        case 3:
            char H21[] = "\n\n\t\t\t\t ---------------------------";
            for (int i = 0; i < strlen(H21); i++)
            {
                Sleep(10);
                printf("%c", H21[i]); // ---------------------------
            }
            char H22[] = "\n\n\t\t\t\t HINT : ALSO KNOWN AS ANJEER";
            for (int i = 0; i < strlen(H22); i++)
            {
                Sleep(10);
                printf("%c", H22[i]); // HINT : ALSO KNOWN AS ANJEER
            }
            for (int i = 0; i < strlen(H21); i++)
            {
                Sleep(10);
                printf("%c", H21[i]); // ---------------------------
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
                for (int i = 0; i < strlen(H10); i++)
                {
                    Sleep(10);
                    printf("%c", H10[i]); // YOUR GUESS IS CORRECT
                }
                char H23[] = "\n\t\t\t\t THE FRUIT IS FIG ";
                for (int i = 0; i < strlen(H23); i++)
                {
                    Sleep(10);
                    printf("%c", H23[i]); // THE FRUIT IS FIG
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
                for (int i = 0; i < strlen(H11); i++)
                {
                    Sleep(10);
                    printf("%c", H11[i]); // YOUR GUESS IS WRONG
                }
                for (int i = 0; i < strlen(g5H9); i++)
                {
                    Sleep(10);
                    printf("%c", g5H9[i]); // =====================
                }
            }
            break;

        case 4:
            char H24[] = "\n\n\t\t\t\t ---------------------------------------";
            for (int i = 0; i < strlen(H24); i++)
            {
                Sleep(10);
                printf("%c", H24[i]); // ------------------
            }
            char H25[] = "\n\n\t\t\t\t HINT : THIS FRUIT IS THE KING OF FRUITS";
            for (int i = 0; i < strlen(H25); i++)
            {
                Sleep(10);
                printf("%c", H25[i]); // HINT : THIS FRUIT IS THE KING OF FRUITS
            }
            for (int i = 0; i < strlen(H24); i++)
            {
                Sleep(10);
                printf("%c", H24[i]); // ------------------
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
                for (int i = 0; i < strlen(H10); i++)
                {
                    Sleep(10);
                    printf("%c", H10[i]); // YOUR GUESS IS CORRECT
                }
                char H26[] = "\n\t\t\t\t THE FRUIT IS MANGO ";
                for (int i = 0; i < strlen(H26); i++)
                {
                    Sleep(10);
                    printf("%c", H26[i]); // THE FRUIT IS MANGO
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
                for (int i = 0; i < strlen(H11); i++)
                {
                    Sleep(10);
                    printf("%c", H11[i]); // YOUR GUESS IS WRONG
                }
                for (int i = 0; i < strlen(g5H9); i++)
                {
                    Sleep(10);
                    printf("%c", g5H9[i]); // =====================
                }
            }
            break;

        case 5:
            char H27[] = "\n\n\t\t\t\t -----------------------------------------------------------------------------------";
            for (int i = 0; i < strlen(H27); i++)
            {
                Sleep(10);
                printf("%c", H27[i]); // ------------------------
            }
            char H28[] = "\n\n\t\t\t\t HINT : FROM OUTSIDE IT'S COLOR IS SAME WHILE INSIDE THE FRUIT CAN BE PINK OR WHITE ";
            for (int i = 0; i < strlen(H28); i++)
            {
                Sleep(10);
                printf("%c", H28[i]); // HINT : FROM OUTSIDE IT'S COLOR IS SAME WHILE INSIDE CONTENT CAN BE PINK OR WHITE
            }
            for (int i = 0; i < strlen(H27); i++)
            {
                Sleep(10);
                printf("%c", H27[i]); // ------------------------
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
                for (int i = 0; i < strlen(H10); i++)
                {
                    Sleep(10);
                    printf("%c", H10[i]); // YOUR GUESS IS CORRECT
                }
                char H29[] = "\n\t\t\t\t THE FRUIT IS GUAVA ";
                for (int i = 0; i < strlen(H29); i++)
                {
                    Sleep(10);
                    printf("%c", H29[i]); // THE FRUIT IS GUAVA
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
                for (int i = 0; i < strlen(H11); i++)
                {
                    Sleep(10);
                    printf("%c", H11[i]); // YOUR GUESS IS WRONGint
                }
                for (int i = 0; i < strlen(g5H9); i++)
                {
                    Sleep(10);
                    printf("%c", g5H9[i]); // =====================
                }
            }
            break;

        case 6:
            char H30[] = "\n\n\t\t\t\t -------------------------------------";
            for (int i = 0; i < strlen(H30); i++)
            {
                Sleep(10);
                printf("%c", H30[i]); // --------------------
            }
            char H31[] = "\n\n\t\t\t\t HINT : WHEN DRIED IS BECOMES RAISINS ";
            for (int i = 0; i < strlen(H31); i++)
            {
                Sleep(10);
                printf("%c", H31[i]); // HINT : WHEN DRIED IS BECOMES RAISINS
            }
            for (int i = 0; i < strlen(H30); i++)
            {
                Sleep(10);
                printf("%c", H30[i]); // --------------------
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
                for (int i = 0; i < strlen(H10); i++)
                {
                    Sleep(10);
                    printf("%c", H10[i]); // YOUR GUESS IS CORRECT
                }
                char H32[] = "\n\t\t\t\t THE FRUIT IS GRAPES ";
                for (int i = 0; i < strlen(H32); i++)
                {
                    Sleep(10);
                    printf("%c", H32[i]); // THE FRUIT IS GRAPES
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
                for (int i = 0; i < strlen(H11); i++)
                {
                    Sleep(10);
                    printf("%c", H11[i]); // YOUR GUESS IS WRONG
                }
                for (int i = 0; i < strlen(g5H9); i++)
                {
                    Sleep(10);
                    printf("%c", g5H9[i]); // =====================
                }
            }
            break;

        case 7:
            char H33[] = "\n\n\t\t\t\t --------------------------------";
            for (int i = 0; i < strlen(H33); i++)
            {
                Sleep(10);
                printf("%c", H33[i]); // ----------------
            }
            char H34[] = "\n\n\t\t\t\t HINT : MOSTLY USED IN HAIR DYE'S";
            for (int i = 0; i < strlen(H34); i++)
            {
                Sleep(10);
                printf("%c", H34[i]); // HINT : MOSTLY USED IN HAIR DYE'S
            }
            for (int i = 0; i < strlen(H33); i++)
            {
                Sleep(10);
                printf("%c", H33[i]); // ----------------
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
                for (int i = 0; i < strlen(H10); i++)
                {
                    Sleep(10);
                    printf("%c", H10[i]); // YOUR GUESS IS CORRECT
                }
                char H35[] = "\n\t\t\t\t THE FRUIT IS AMLA ";
                for (int i = 0; i < strlen(H35); i++)
                {
                    Sleep(10);
                    printf("%c", H35[i]); // THE FRUIT IS AMLA
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
                for (int i = 0; i < strlen(H11); i++)
                {
                    Sleep(10);
                    printf("%c", H11[i]); // YOUR GUESS IS WRONG
                }
                for (int i = 0; i < strlen(g5H9); i++)
                {
                    Sleep(10);
                    printf("%c", g5H9[i]); // =====================
                }
            }
            break;

        default:
            char H36[] = "\n\t\t\t\t OOPS...SOMETHING WENT WRONG !";
            for (int i = 0; i < strlen(H36); i++)
            {
                Sleep(10);
                printf("%c", H36[i]); // OOPS...SOMETHING ENT WRONG !
            }
            break;
        }

        char H37[] = "\n\n\t\t\t\t DO YOU WANT TO PLAY AGAIN ( Y FOR YES & N FOR NO ) : ";
        for (int i = 0; i < strlen(H37); i++)
        {
            Sleep(10);
            printf("%c", H37[i]); // DO YOU WANT TO PLAY AGAIN ( Y FOR YES & N FOR NO ) :
        }

        getchar();
        scanf("%c", &playAgain);

        if (playAgain == 'Y' || playAgain == 'y')
            system("cls");

    } while (playAgain != 'N' && playAgain != 'n');
    return 0;
}
