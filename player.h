#ifndef PLAYER_H
#define PLAYER_H

typedef struct {
    int level;
    char name[17];
} Player;

void inputPlayers(int p, Player players[]);

#endif

