#include <stdio.h>
#include "unions_exercise.h"

void format_object(snek_object_t obj, char *buffer) {
  switch (obj.kind) {
    case INTEGER:
      sprintf(buffer, "int:%d", obj.data.v_int);
      return;
    case STRING:
      sprintf(buffer, "string:%s", obj.data.v_string);
      return;
    default:
      printf("UNKNOWN");
      return;
  }
}

snek_object_t new_integer(int i) {
  return (snek_object_t){
    .kind = INTEGER,
    .data = {.v_int = i}
  };
}

snek_object_t new_string(char *str) {
  return (snek_object_t){
    .kind = STRING,
    .data = {.v_string = str}
  };
}
