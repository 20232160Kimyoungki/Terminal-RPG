// s_lib.h
#ifndef S_LIB_H
#define S_LIB_H

typedef struct {
    int hp;
    int atk;
    int heal;
    int special;
} hero;

void heroStats(hero *me);
int enemyStats(hero *dragon);
void battle (hero *me, hero *dragon, char action);

#endif