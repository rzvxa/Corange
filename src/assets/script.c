#include "assets/script.h"

script *script_new() {
  script *s = malloc(sizeof(script));
  return s;
}

void script_delete(script *s) {
  free(s->content);
  free(s);
}

script *lua_load_file(char *filename) {
  SDL_RWops *file = SDL_RWFromFile(filename, "r");
  if (file == NULL) {
    error("Cannot load file %s", filename);
  }

  script *s = script_new();

  Sint64 content_size = SDL_RWsize(file);
  char *content = (char *)malloc(content_size + 1);

  Sint64 nb_read_total = 0, nb_read = 1;

  char *buf = content;
  while (nb_read_total < content_size && nb_read != 0) {
    nb_read = SDL_RWread(file, buf, 1, (content_size - nb_read_total));
    nb_read_total += nb_read;
    buf += nb_read;
  }
  SDL_RWclose(file);
  if (nb_read_total != content_size) {
    free(content);
    return NULL;
  }
  content[nb_read_total] = '\0';
  s->content = content;
  return s;
}
