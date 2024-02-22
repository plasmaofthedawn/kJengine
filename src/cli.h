#ifndef KJENGINE_CLI_H
#define KJENGINE_CLI_H

#include <stdlib.h>
#include "field.h"

// " #HbcsdwCSDf234567O8BmMpPinhHE?ogG"
extern const char* TILE_CHAR_MAPPING;
extern const wchar_t* MOVEMENT_CHAR_MAPPING;

void print_tiles(struct Field h);
void print_movement(struct Field h);

#endif