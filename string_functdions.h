#include "dynamic_string_array.h"

#ifndef __STRING_FUNCTIONS_H_
#define __STRING_FUNCTIONS_H_

typedef char *char_ptr;

unsigned get_string_length(char_ptr string);

char_ptr create_heap_copy(char_ptr string);

unsigned count_occurrence(char_ptr string, char token_char);

dynamic_string_array *split_string(char_ptr string, char splitter);

#endif