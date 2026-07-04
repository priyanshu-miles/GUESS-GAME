#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int no_of_guesses = 0;
    int guessed;

    // printf("Random number: %d\n", randomNumber);
    
    do{
        
        printf("Guess The Number\n");
        printf("\n");
        scanf("%d", &guessed);
        if(guessed > randomNumber){
            printf("LOWER NUMBER PLEASE !!\n");
            printf("\n");
        }
        else{
            printf("HIGHER NUMBER PLEASE !!\n");
            printf("\n");
        }
        no_of_guesses++;
    

    }while(guessed != randomNumber);


    printf("YOU GUESS THE NUMBER IN %d GUESSES\n",no_of_guesses);


    return 0;
}