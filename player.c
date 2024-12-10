#include <stdio.h>
#include "player.h"

void inputPlayers(int p, Player players[]) {
    for (int i = 0; i < p; i++) {
        scanf("%d %s", &players[i].level, players[i].name);
    }
}
