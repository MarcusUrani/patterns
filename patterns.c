#include <stdio.h>
#include <string.h>

int main(void)
{
  int i;
  char first_text[1001];
  scanf("%s", first_text);
  int first_size = strlen(first_text);
  char second_text[first_size];
  scanf("%s", second_text);
  int second_size = strlen(second_text);
  for (i = 0; i < first_size; i++)
  {
    if (second_text[i] == first_text[i])
    {
      printf("Essa e a letra:\n");
    }
  }
  return 0;
}