#include <stdio.h>
#include "player.h"
#include "room.h"

int main() {
    int p, m;
    Player players[300];
    Room rooms[300];

    scanf("%d %d", &p, &m);
    inputPlayers(p, players);
    int room_count = assignRooms(p, m, players, rooms);
    printRooms(room_count, m, rooms);

    return 0;
}
