#ifndef _api_h_
#define _api_h_

#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
#include <sglib.h>

// structs
struct module_name_list {
    char *filename;
    struct module_name_list *next_ptr;
};

struct loaded_module_list {
    char *filename;
    lua_State *L;
    struct loaded_module_list *next_ptr;
};

// functions
int clua_init();
int clua_load_modules();
int clua_close();

// global data
struct loaded_module_list *loaded_mods;

#endif
