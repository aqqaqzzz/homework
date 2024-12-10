#ifndef ROOM_H
#define ROOM_H

#include "player.h"

typedef struct {
    int min_level;
    int max_level;
    int player_count;
    Player players[300];
} Room;

int assignRooms(int p, int m, Player players[], Room rooms[]);
void printRooms(int room_count, int m, Room rooms[]);

#endif
