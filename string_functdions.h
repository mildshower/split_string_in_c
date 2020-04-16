#include "dynamic_string_array.h"

#ifndef __STRING_FUNCTIONS_H_
#define __STRING_FUNCTIONS_H_

typedef char *char_ptr;

unsigned get_string_length(char *string);

char *create_heap_copy(char *string);

unsigned count_occurrence(char *string, char token_char);

dynamic_string_array *split_string(char *string, char splitter);

#endif