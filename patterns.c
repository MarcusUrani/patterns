#include <stdio.h>
#include <string.h>

int main(void)
{
  int i, j;
  char first_text[1002];
  char second_text[102];
  fgets(first_text, 1002, stdin);
  fgets(second_text, 102, stdin);
  int first_size = strlen(first_text) - 1;
  int second_size = strlen(second_text) - 1;
  for (i = 0; i <= first_size - second_size; i++)
  {
    int equal = 1;
    for (j = 0; j < second_size; j++)
    {
      if (first_text[i + j] != second_text[j])
      {
        equal = 0;
        break;
      }
    }
    if (equal)
    {
      printf("%d", i);
    }
  }
  printf("\n");
  return 0;
}