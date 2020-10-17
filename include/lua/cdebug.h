#ifndef cdebug_h
#define cdebug_h

#include "lua.h"

int cdebug_log(lua_State *L) {
  return luaL_error(L, "clog is not implemented");
}

#endif // cdebug_h
