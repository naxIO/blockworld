#ifndef _api_h_
#define _api_h_

#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
#include <sglib.h>

// functions
int clua_init();
int clua_load_modules();
int clua_close();

// global data
struct loaded_module_list *loaded_mods;

#endif
