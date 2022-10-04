#include <stdio.h>
#include <string.h>

int main(void)
{
  int i;
  char first_text[1002];
  char second_text[102];
  fgets(first_text, 1002, stdin);
  fgets(second_text, 102, stdin);
  int first_size = strlen(first_text) - 1;
  int second_size = strlen(second_text) - 1;
  for (i = 0; i < first_size; i++)
  {
    if (second_text[i] == first_text[i])
    {
      printf("Essa eh a letra:\n");
    }
  }
  return 0;
}