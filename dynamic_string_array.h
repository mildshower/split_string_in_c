#ifndef _DYNAMIC_STRING_H_
#define _DYNAMIC_STRING_H_

typedef struct
{
  char **strings;
  unsigned length;
} dynamic_string_array;

dynamic_string_array *create_dynamic_string_array(unsigned length);

#endif