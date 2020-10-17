#ifndef cscript_h
#define cscript_h

#include "cengine.h"

#include "lauxlib.h"
#include "lua.h"
#include "lualib.h"

static lua_State *L;

/* Init and Finish operations */
void script_init(void);
void script_finish(void);

#endif // cscript_h
