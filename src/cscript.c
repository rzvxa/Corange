#include "cscript.h"
#include "lua/cdebug.h"

static const struct luaL_Reg module_cdebug[] = {{"log", cdebug_log},
                                                {NULL, NULL}};

static int luaopen_engine_libraries(lua_State *L) {
  lua_newtable(L); // create corange module

  int top = lua_gettop(L);

  luaL_newlib(L, module_cdebug);  // creating cdebug table
  lua_setfield(L, top, "cdebug"); // add cdebug to corange module

  return 1;
}

void script_init(void) {
  /* initialize Lua */
  L = luaL_newstate();

  /* load lua libraries */
  luaL_openlibs(L);
  luaopen_table(L);
  luaopen_io(L);
  luaopen_string(L);
  luaopen_math(L);

  /* load engine libraries */
  luaopen_engine_libraries(L);
}

void script_finish(void) { lua_close(L); }
