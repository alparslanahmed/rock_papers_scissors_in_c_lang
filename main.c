#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Rock beats scissors
// Scissors beats paper
// Paper beats rock

#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"

int result(char player[], char ai[]) {
    if (player[0] == ai[0]) {
        return 0;
    } else if (player[0] == 'r' && ai[0] == 's') {
        return 1;
    } else if (player[0] == 's' && ai[0] == 'p') {
        return 1;
    } else if (player[0] == 'p' && ai[0] == 'r') {
        return 1;
    } else {
        return -1;
    }
}

int main() {
    char gameObjects[6] = {'r', 's', 'p'};

    int playerScore = 0;
    int aiScore = 0;
    int playing = 1;

    printf("q for quit.");

    while (playing) {
        srand(time(NULL));
        int r = rand() % 3;
        char aiChoice[1] = {gameObjects[r]};

        printf("Rock, Paper, Scissors?\n");
        char playerChoice[10];
        scanf(" %s", playerChoice);

        if (playerChoice[0] == 'q') {
            break;
        }

        const res = result(playerChoice, aiChoice);

        if (res == 1) {
            playerScore++;
        } else if (res == -1) {
            aiScore++;
        }
        printf("AI: %c\n", aiChoice[0]);
        printf("Player: %d\nAI: %d\n", playerScore, aiScore);
    }

    return 0;
}


#pragma clang diagnostic pop