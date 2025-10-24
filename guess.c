#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));
    random = rand() % 100 +1; // generating numbers from 1 to 100

    printf("welcom to the world of guessing numbers\n");
    do {
        printf("\nplease enter your guess between (1 to 100):");
        scanf("%d", &guess);
        no_of_guess++;
        if (guess < random){
        printf("please guess a larger number.\n");
        }
        else if (guess > random){
        printf("please guess a  smaller number.\n");
        }
        else{
            printf("Congratulations! you have successfully guessed the number in %d attempts",no_of_guess);
        }

        } while  (random != guess);{ 
          if (no_of_guess=1);
          printf("you have guessed the number in the first attempt");
          printf("\nBye Bye thanks for playing.");
          printf("\nDeveloped by sulab.\n");
        }return 0;
}

