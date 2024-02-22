#include <stdio.h>
#include "src/field.h"
#include "src/cli.h"


int main() {

    // open file
    FILE* f = fopen("maps/field_pudding.fld", "rb");

    if (f == NULL) {
        printf("Invalid file ");
        return -1;
    }

    struct Field h = load_field_from_file(f);

    print_tiles(h);
    print_movement(h);

    free_field(h);
}