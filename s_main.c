// s_main.c
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "s_lib.h"

int main() {
    int action = 0;
    hero me, dragon;

    //
    printf("welcome hero!\n");
    printf("You will fight a dragon!\n");

    //초기상태
    heroStats(&me);
    enemyStats(&dragon);

    while(me.hp >= 0 && dragon.hp >= 0) {
    printf("\n\nYour HP: %d\tDragon HP: %d\n", me.hp, dragon.hp);
    printf("\n\nActions: a= Attack, h= Heal, s =Special\n"),
    scanf("%c", &action);
        
    battle(&me, &dragon, action);
    }

    //결과 출력
    if (me.hp <= 0) {
        printf("You lose!\n");
    } else {
        printf("You win!\n");
    }

}