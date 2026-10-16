#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void){
    int win = 0, lose = 0;
    char response;
    srand((unsigned)time(NULL));

    do {
        if (play_game()){
            printf("You win!!!\n");
            win++;
        } else {
            printf("You lose!!!\n");
            lose++;
        }
    
        printf("Play again? ");
        scanf(" %c", &response);
        printf("\n");
    } while ( response == 'y' || response == 'Y');

    printf("Wins: %d\tLose: %d", win, lose);

    return 0;
}

int roll_dice(void){
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;
    int sum = dice1 + dice2;
    return sum;
}


bool play_game(void){
    int res = roll_dice();
    printf("You rolled: %d\n", res);

    if (res == 7 || res == 11){
        return true;
    }
    else if (res == 2 || res == 3 || res == 12){
        return false;
    }
    else{
        int point = res;
        printf("Your point is %d\n", point);

        for(;;){
            int roll = roll_dice();
            printf("You rolled: %d\n", roll);

            if (roll == point)
                return true;
            if (roll == 7)
                return false;
        }
    }
}
