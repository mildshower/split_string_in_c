#include <stdio.h>
#include "dynamic_string_array.h"
#include "string_functdions.h"

int main(void)
{
  char string[] = "Work.Hard.To.Succeed.In.Life";
  dynamic_string_array *splitted_array = split_string(string, '.');

  for (int index = 0; index < splitted_array->length; index++)
  {
    printf("%s\n", splitted_array->strings[index]);
  }

  return 0;
}