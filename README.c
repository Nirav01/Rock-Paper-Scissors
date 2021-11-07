#include <stdio.h>
#include <stdlib.h>

enum{ROCK, SCISSORS, PAPER};
void Input()
{
    int input;
    switch (input)
    {
    case 1: printf("ROCK");
        break;
    case 2: printf("SCISSORS");
        break;
    case 3: printf("PAPER");
        break;
    default: 
        break;
    }
}
int main()
{
    char name;
    int i, pInput, win = 0, lose = 0, draw = 0;
    int bot;
    printf("Enter your player name\n");
    scanf("%c", &name);
    printf(" 1 = ROCK \n 2 = SCISSORS \n 3 = PAPER \n");

    for (i=0;i<10;i++)
    {
        printf("Select one of the choice to play the game: 1, 2 or 3\n");
        printf("%c", name);
        printf("'s choice: ");
        scanf("%d", &pInput);
        bot = rand()%3+1;

        printf("\n");
        printf("%c", name);
        printf(" chose");
        Input(pInput);

        printf("\nComputer chose ");
        Input(bot);
        
        if (pInput == bot)
        {
            printf("\nIt is a draw");
            draw++;
        }
        else if(pInput == ROCK && bot == SCISSORS || pInput == SCISSORS && bot == PAPER || pInput == PAPER && bot == ROCK)
        {
            printf("\n");
            printf("%c", name);
            printf(" wins the game!\n");
            win++;
        }
        else
        {
            printf("%c", name);
            printf(" loses the game\n");
            lose++;
        }

    }
    return 0;
}
