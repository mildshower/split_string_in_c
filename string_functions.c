#include "string_functdions.h"
#include <stdlib.h>

unsigned get_string_length(char_ptr string)
{
  unsigned length = 0;
  for (int index = 0; string[index] != '\0'; index++)
  {
    length++;
  }
  return length;
}

char_ptr create_heap_copy(char_ptr string)
{
  unsigned length = get_string_length(string);
  char_ptr string_copy = malloc(sizeof(char) * (length + 1));

  for (int index = 0; index < length + 1; index++)
  {
    string_copy[index] = string[index];
  }

  return string_copy;
}

unsigned count_occurrence(char_ptr string, char token_char)
{
  unsigned count = 0, index;

  for (index = 0; string[index] != '\0'; index++)
  {
    if (string[index] == token_char)
      count++;
  }

  return count;
}

dynamic_string_array *split_string(char_ptr string, char splitter)
{
  char_ptr string_copy = create_heap_copy(string);
  unsigned tokens_count = count_occurrence(string, splitter) + 1;

  dynamic_string_array *splitted_array = create_dynamic_string_array(tokens_count);
  unsigned token_index = 0;
  splitted_array->strings[0] = string_copy;

  for (int index = 0; string_copy[index] != '\0'; index++)
  {
    if (string_copy[index] == splitter)
    {
      splitted_array->strings[++token_index] = (string_copy + index + 1);
      string_copy[index] = '\0';
    }
  }

  return splitted_array;
}