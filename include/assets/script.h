/**
 * :: Script ::
 *
 *    A lua script loaded as char array
 */

#ifndef script_h
#define script_h

#include "cengine.h"

typedef struct {
  char *content;
} script;

script *script_new();
void script_delete(script *s);

script *lua_load_file(char *filename);

#endif // script_h
