#include "item.h"
#include "util.h"

#include <stdlib.h>
#include <string.h>

void setup_base_items() {
    // ints -> (top, bottom, left, right, front, back) tiles
    add_new_item("empty", (int[7]){0, 0, 0, 0, 0, 0, 0}, false, false, true, false);
    add_new_item("grass", (int[7]){32, 0, 16, 16, 16, 16, 0}, false, true, false, true);
    add_new_item("sand", (int[7]){1, 1, 1, 1, 1, 1, 0}, false, true, false, true);
    add_new_item("stone", (int[7]){2, 2, 2, 2, 2, 2, 0}, false, true, false, true);
    add_new_item("brick", (int[7]){3, 3, 3, 3, 3, 3, 0}, false, true, false, true);
    add_new_item("wood", (int[7]){36, 4, 20, 20, 20, 20, 0}, false, true, false, true);
    add_new_item("cement", (int[7]){5, 5, 5, 5, 5, 5, 0}, false, true, false, true);
    add_new_item("dirt", (int[7]){6, 6, 6, 6, 6, 6, 0}, false, true, false, true);
    add_new_item("plank", (int[7]){7, 7, 7, 7, 7, 7, 0}, false, true, false, true);
    add_new_item("snow", (int[7]){40, 8, 24, 24, 24, 24, 0}, false, true, false, true);
    add_new_item("glass", (int[7]){9, 9, 9, 9, 9, 9, 0}, false, true, true, true);
    add_new_item("cobble", (int[7]){10, 10, 10, 10, 10, 10, 0}, false, true, false, true);
    add_new_item("light stone", (int[7]){11, 11, 11, 11, 11, 11, 0}, false, true, false, true);
    add_new_item("dark stone", (int[7]){12, 12, 12, 12, 12, 12, 0}, false, true, false, true);
    add_new_item("chest", (int[7]){13, 13, 13, 13, 13, 13, 0}, false, true, false, true);
    add_new_item("leaves", (int[7]){14, 14, 14, 14, 14, 14, 0}, false, true, true, true);
    add_new_item("cloud", (int[7]){15, 15, 15, 15, 15, 15, 0}, false, false, true, false);
    add_new_item("tall grass", (int[7]){0, 0, 0, 0, 0, 0, 48}, true, false, true, true);
    add_new_item("yellow flower", (int[7]){0, 0, 0, 0, 0, 0, 49}, true, false, true, true);
    add_new_item("red flower", (int[7]){0, 0, 0, 0, 0, 0, 50}, true, false, true, true);
    add_new_item("purple flower", (int[7]){0, 0, 0, 0, 0, 0, 51}, true, false, true, true);
    add_new_item("sun flower", (int[7]){0, 0, 0, 0, 0, 0, 52}, true, false, true, true);
    add_new_item("white flower", (int[7]){0, 0, 0, 0, 0, 0, 53}, true, false, true, true);
    add_new_item("blue flower", (int[7]){0, 0, 0, 0, 0, 0, 54}, true, false, true, true);
    add_new_item("color00", (int[7]){176, 176, 176, 176, 176, 176, 0}, false, true, false, true);
    add_new_item("color01", (int[7]){177, 177, 177, 177, 177, 177, 0}, false, true, false, true);
    add_new_item("color02", (int[7]){178, 178, 178, 178, 178, 178, 0}, false, true, false, true);
    add_new_item("color03", (int[7]){179, 179, 179, 179, 179, 179, 0}, false, true, false, true);
    add_new_item("color04", (int[7]){180, 180, 180, 180, 180, 180, 0}, false, true, false, true);
    add_new_item("color05", (int[7]){181, 181, 181, 181, 181, 181, 0}, false, true, false, true);
    add_new_item("color06", (int[7]){182, 182, 182, 182, 182, 182, 0}, false, true, false, true);
    add_new_item("color07", (int[7]){183, 183, 183, 183, 183, 183, 0}, false, true, false, true);
    add_new_item("color08", (int[7]){184, 184, 184, 184, 184, 184, 0}, false, true, false, true);
    add_new_item("color09", (int[7]){185, 185, 185, 185, 185, 185, 0}, false, true, false, true);
    add_new_item("color10", (int[7]){186, 186, 186, 186, 186, 186, 0}, false, true, false, true);
    add_new_item("color11", (int[7]){187, 187, 187, 187, 187, 187, 0}, false, true, false, true);
    add_new_item("color12", (int[7]){188, 188, 188, 188, 188, 188, 0}, false, true, false, true);
    add_new_item("color13", (int[7]){189, 189, 189, 189, 189, 189, 0}, false, true, false, true);
    add_new_item("color14", (int[7]){190, 190, 190, 190, 190, 190, 0}, false, true, false, true);
    add_new_item("color15", (int[7]){191, 191, 191, 191, 191, 191, 0}, false, true, false, true);
    add_new_item("color16", (int[7]){192, 192, 192, 192, 192, 192, 0}, false, true, false, true);
    add_new_item("color17", (int[7]){193, 193, 193, 193, 193, 193, 0}, false, true, false, true);
    add_new_item("color18", (int[7]){194, 194, 194, 194, 194, 194, 0}, false, true, false, true);
    add_new_item("color19", (int[7]){195, 195, 195, 195, 195, 195, 0}, false, true, false, true);
    add_new_item("color20", (int[7]){196, 196, 196, 196, 196, 196, 0}, false, true, false, true);
    add_new_item("color21", (int[7]){197, 197, 197, 197, 197, 197, 0}, false, true, false, true);
    add_new_item("color22", (int[7]){198, 198, 198, 198, 198, 198, 0}, false, true, false, true);
    add_new_item("color23", (int[7]){199, 199, 199, 199, 199, 199, 0}, false, true, false, true);
    add_new_item("color24", (int[7]){200, 200, 200, 200, 200, 200, 0}, false, true, false, true);
    add_new_item("color25", (int[7]){201, 201, 201, 201, 201, 201, 0}, false, true, false, true);
    add_new_item("color26", (int[7]){202, 202, 202, 202, 202, 202, 0}, false, true, false, true);
    add_new_item("color27", (int[7]){203, 203, 203, 203, 203, 203, 0}, false, true, false, true);
    add_new_item("color28", (int[7]){204, 204, 204, 204, 204, 204, 0}, false, true, false, true);
    add_new_item("color29", (int[7]){205, 205, 205, 205, 205, 205, 0}, false, true, false, true);
    add_new_item("color30", (int[7]){206, 206, 206, 206, 206, 206, 0}, false, true, false, true);
    add_new_item("color31", (int[7]){207, 207, 207, 207, 207, 207, 0}, false, true, false, true);
    add_new_item("error", (int[7]){30, 30, 30, 30, 30, 30, 0}, false, true, true, true);
}

int item_count() {
    int len = 0;
    SGLIB_LIST_LEN(struct item_list, items, next_ptr, len)
    return len;
}

// returns allocated item id
int add_new_item(const char *name, int tile[7], bool is_plant, bool is_obstacle, bool is_transparent, bool is_destructable) {
    struct tile_ids *tiles = malloc(sizeof(struct tile_ids));
    tiles->top = tile[0];
    tiles->bottom = tile[1];
    tiles->left = tile[2];
    tiles->right = tile[3];
    tiles->front = tile[4];
    tiles->back = tile[5];
    tiles->sprite = tile[6];

    struct item_list *item = malloc(sizeof(struct item_list));
    item->name = name;
    item->id = item_count();
    item->tile = tiles;
    item->is_plant = is_plant;
    item->is_obstacle = is_obstacle;
    item->is_transparent = is_transparent;
    item->is_destructable = is_destructable;

    SGLIB_LIST_ADD(struct item_list, items, item, next_ptr);

    return item->id;
}

struct item_list *get_item_from_id(int id) {
    SGLIB_LIST_MAP_ON_ELEMENTS(struct item_list, items, item, next_ptr, {
        if (item->id == id) {
            return item;
        }
    });
    return NULL;
}

struct item_list *get_item_from_name(char *name) {
    SGLIB_LIST_MAP_ON_ELEMENTS(struct item_list, items, item, next_ptr, {
        if (strncmp(item->name, name, sizeof(item->name) / sizeof(char)) == 0) {
            return item;
        }
    });
    return NULL;
}

bool is_plant(int item_id) {
    struct item_list *item = get_item_from_id(item_id);

    if (item != NULL) {
        return item->is_plant;
    }

    return false;
}

bool is_obstacle(int item_id) {
    item_id = abs(item_id); // TODO: why are we getting negative item ids?
    struct item_list *item = get_item_from_id(item_id);

    if (item != NULL) {
        return item->is_obstacle;
    }

    return false;
}

bool is_transparent(int item_id) {
    item_id = abs(item_id); // TODO: why are we getting negative item ids?
    struct item_list *item = get_item_from_id(item_id);

    if (item != NULL) {
        return item->is_transparent;
    }

    return false;
}

bool is_destructable(int item_id) {
    struct item_list *item = get_item_from_id(item_id);

    if (item != NULL) {
        return item->is_destructable;
    }

    return false;
}
