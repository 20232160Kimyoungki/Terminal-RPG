// s_lib.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "s_lib.h"

void heroStats(hero *me) {
    me -> hp = 100;
    me -> atk = 20;
    me -> heal = 10;
    me -> special = 40;
}

int enemyStats(hero *dragon) {
    dragon -> hp = 200;
    dragon ->  atk = 40;
    dragon ->  heal = 20;
    dragon -> special = 80;
}

void battle(hero *me, hero *dragon, char action) {
    //초기상태
    int actNum = -1;
    printf("You used");

    //행동 선택
    switch (action) {
        case 'a' ://Attack
         actNum = 0;
         dragon->hp -= me->atk;
         break;
        case 'h' ://Heal
         actNum = 1;
         me ->hp += me->heal;
         break;
        case 's' ://Special
         actNum = 2;
         dragon->hp -= me->special;
         break;
    }

    if (dragon->hp <=0 )
    return;

   // Dragon 행동
   //행동 선택
   int randomNum = rand() % 3;
    switch (randomNum) {
        case 0 ://Attack
         me->hp -= dragon->atk;
         break;
        case 1 ://Heal
         me ->hp += 5;
         break;
        case 2 ://Special
         me->hp -= (dragon->atk * 2);
         break;
    }

    if (me->hp <= 0)
    return;

}