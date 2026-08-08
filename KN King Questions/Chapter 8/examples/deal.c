#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void) {
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suits;
    const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't',
                              'j', 'q', 'k', 'a'};
    const char suit_code[] = {'c', 'd', 'h', 's'};

    srand((unsigned) time(NULL));
    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand: ");
    while (num_cards > 0) {
        suits = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if (!in_hand[suits][rank]) {
            in_hand[suits][rank] = true;
            num_cards--;
            printf(" %c%c", rank_code[rank], suit_code[suits]);
        }
    }
    printf("\n");
    return 0;
}
