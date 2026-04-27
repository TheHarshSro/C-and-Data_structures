#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

int secret;
void initialise();
void sec_num();
void read_guess();

int main(void) {
    char reply;
    printf("Guess the secret number between 1 - %d\n", MAX);
    initialise();
    do {
        sec_num();
        printf("New Secret number got chosen. \n");
        read_guess();
        printf("Try again? Y/N\n");
        scanf(" %c", &reply);
        printf("\n");
    } while (reply == 'y' || reply == 'Y' );

    return 0;
}

    void initialise() {
        srand(time(NULL));
    }
    
    void sec_num() {
        secret = rand() % MAX + 1;
    }

    void read_guess() {
        int guess, num = 0;
        for ( ; ; ) {
            num++;
            if (num > 10) {        
            printf("Out of tries! Secret was %d\n", secret);
            return;
        }
            printf("Enter guess: ");
            scanf("%d", &guess);
            if ( guess == secret ) {
                printf("You win, the guess was %d\n", guess);
                return;
            } else if (guess < secret) {
                printf("Too low\n");
            } else
                printf("Too high\n");
        }
    }
