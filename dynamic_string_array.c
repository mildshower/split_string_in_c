#include <stdlib.h>
#include "dynamic_string_array.h"

dynamic_string_array *create_dynamic_string_array(unsigned length)
{
  dynamic_string_array *array = malloc(sizeof(dynamic_string_array));
  array->strings = malloc(sizeof(char *) * length);
  array->length = length;
  return array;
}