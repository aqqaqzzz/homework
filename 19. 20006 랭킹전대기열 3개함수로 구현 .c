#include <stdio.h>
#include <string.h>

typedef struct {
    int level;
    char name[17];
} Player;

typedef struct {
    int min_level, max_level, player_count;
    Player players[300];
} Room;

void inputPlayers(int p, Player players[]) {
    for (int i = 0; i < p; i++) scanf("%d %s", &players[i].level, players[i].name);
}

int assignRooms(int p, int m, Player players[], Room rooms[]) {
    int room_count = 0;
    for (int i = 0; i < p; i++) {
        int matched = 0, level = players[i].level;
        for (int j = 0; j < room_count; j++) {
            if (rooms[j].player_count < m && level >= rooms[j].min_level && level <= rooms[j].max_level) {
                rooms[j].players[rooms[j].player_count++] = players[i];
                matched = 1;
                break;
            }
        }
        if (!matched) {
            rooms[room_count].min_level = level - 10;
            rooms[room_count].max_level = level + 10;
            rooms[room_count].player_count = 1;
            rooms[room_count].players[0] = players[i];
            room_count++;
        }
    }
    return room_count;
}

void printRooms(int room_count, int m, Room rooms[]) {
    for (int i = 0; i < room_count; i++) {
        printf(rooms[i].player_count == m ? "Started!\n" : "Waiting!\n");
        for (int j = 0; j < rooms[i].player_count - 1; j++)
            for (int k = j + 1; k < rooms[i].player_count; k++)
                if (strcmp(rooms[i].players[j].name, rooms[i].players[k].name) > 0) {
                    Player temp = rooms[i].players[j];
                    rooms[i].players[j] = rooms[i].players[k];
                    rooms[i].players[k] = temp;
                }
        for (int j = 0; j < rooms[i].player_count; j++)
            printf("%d %s\n", rooms[i].players[j].level, rooms[i].players[j].name);
    }
}

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
