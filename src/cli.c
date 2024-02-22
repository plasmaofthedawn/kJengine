#include <locale.h>
#include "cli.h"

const char* TILE_CHAR_MAPPING = " #HbcsdwCSDf234567O8BmMpPinhHE?ogG";
const wchar_t* MOVEMENT_CHAR_MAPPING = L" ╴╵┘╶─└┴╷┐│┤┌┬├┼╸╳┙╳╾╳┵╳┑╳┥╳┭╳┽╳╹┚╳╳┖┸╳╳╽┦╳╳┞╀╳╳┛╳╳╳┹╳╳╳┩╳╳╳╃╳╳╳╺╼┕┶╳╳╳╳┍┮┝┾╳╳╳╳━╳┷╳╳╳╳╳┯╳┿╳╳╳╳╳┗┺╳╳╳╳╳╳┡╄╳╳╳╳╳╳┻╳╳╳╳╳╳╳╇╳╳╳╳╳╳╳╻┒╿┧┎┰┟╁╳╳╳╳╳╳╳╳┓╳┪╳┱╳╅╳╳╳╳╳╳╳╳╳┃┨╳╳┠╂╳╳╳╳╳╳╳╳╳╳┫╳╳╳╉╳╳╳╳╳╳╳╳╳╳╳┏┲┢╆╳╳╳╳╳╳╳╳╳╳╳╳┳╳╈╳╳╳╳╳╳╳╳╳╳╳╳╳┣╊╳╳╳╳╳╳╳╳╳╳╳╳╳╳╋╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳";


void print_tiles(struct Field h) {
     for (int i = 0; i < h.height * h.width; i++) {

        printf("%c", TILE_CHAR_MAPPING[h.map[i].tileid]);

        if ((i + 1) % h.width == 0) {
            printf("\n");
        }
    }
}

void print_movement(struct Field h) {
    setlocale(LC_CTYPE, "en_US.UTF-8");

    for (int i = 0; i < h.height * h.width; i++) {

        int a = printf("%lc", MOVEMENT_CHAR_MAPPING[h.map[i].movement_bitflag]);

        if ((i + 1) % h.width == 0) {
            printf("\n");
        }
    }
}