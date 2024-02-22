#ifndef KJENGINE_FIELD_H
#define KJENGINE_FIELD_H

#include <stdio.h>
#include <stdlib.h>

enum TileID {
    TileVoid = 0,
    TileBlank = 1,
    TileHome = 2,
    TileBattle = 3,
    TileDraw = 4,
    TileBonus = 5,
    TileDrop = 6,
    TileWarp = 7,
    TileDrawx2 = 8,
    TileBonusx2 = 9,
    TileDropx2 = 10,
    TileFlatWall = 11,
    TileVoid2 = 12, // i'm not sure why there's 8 voids, or if they're even used
    TileVoid3 = 13,
    TileVoid4 = 14,
    TileVoid5 = 15,
    TileVoid6 = 16,
    TileVoid7 = 17,
    TileDeck = 18,
    TileVoid8 = 19,
    TileBattlex2 = 20,
    TileMove = 21,
    TileMovex2 = 22,
    TileWarpMove = 23,
    TileWarpMovex2 = 24,
    TileIce = 25,
    TileSnow = 26,
    TileHeal = 27,
    TileHealx2 = 28,
    TileEvent = 29, // OJEdit says "Event (Blank Tile)"
    TileUnknown = 30,
    TileCoopBoss = 31,
    TileDamage = 32,
    TileDamagex2 = 33
};

struct Tile {
    enum TileID tileid;
    int movement_bitflag;
    /*
    of the form
    enter| exit
    -----+-----
    SENW | SENW
    */
};

struct Field {
    int height;
    int width;
    struct Tile* map;
};

struct Field load_field_from_file(FILE* f);
void free_field(struct Field f);

#endif
