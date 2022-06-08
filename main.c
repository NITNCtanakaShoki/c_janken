#include <stdio.h>
#include <stdlib.h>

int isValidAsHand(int hand)
{
    return 0 <= hand && hand <= 2;
}

int inputPlayerHand()
{
    int playerHand = -1;
    while (!isValidAsHand(playerHand)) {
        printf("手を選んでください[0...グー/1...チョキ/2...パー]: ");
        scanf("%d", &playerHand);
    }
    return playerHand;
}

int computerHand()
{
    return random() % 3;
}

char* handTranslate(int hand)
{
    switch (hand) {
        case 0:
            return "グー";
        case 1:
            return "チョキ";
        case 2:
            return "パー";
        default:
            return "invalid hand translated";
    }
}

void printPlayerHand(int playerHand)
{
    printf("あなたは%sを選びました。\n", handTranslate(playerHand));
}

void printComputerHand(int computerHand)
{
    printf("コンピュータは%sでした。\n", handTranslate(computerHand));
}

char* winner(int playerHand, int computerHand)
{
    switch ((playerHand - computerHand + 3) % 3) {
        case 0:
            return "Draw";
        case 1:
            return "コンピュータ";
        case 2:
            return "あなた";
        default:
            return "Win Lose Error";
    }
}



int main(void) {
    srandomdev();

    for (;;) {
        int player = inputPlayerHand();
        printPlayerHand(player);

        int computer = computerHand();
        printComputerHand(computer);

        if (player == computer) {
            continue;
        }

        printf("%sの勝ちです。\n", winner(player, computer));
        return 0;
    }
}