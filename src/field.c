#include <math.h>
#include "field.h"

struct Field load_field_from_file(FILE* f) {

    struct Field out;

    // get file size
    fseek(f, 0L, SEEK_END);
    int num_tiles = ftell(f) / 8;
    rewind(f);

    // all boards are square
    out.height = (int) sqrt(num_tiles);
    out.width = (int) sqrt(num_tiles );

    out.map = malloc(sizeof(struct Tile) * num_tiles);

    if (!out.map) {
        //TODO: make this. not this. lmao
        exit(13);
    }

    // this is bad
    // idc
    for (int i = 0; i < num_tiles; i++){

        fread(
            &out.map[i].tileid, 4, 1, f
        );
        fread(
            &out.map[i].movement_bitflag, 4, 1, f
        );

    }

    return out;
}


void free_field(struct Field f){
    free(f.map);
}