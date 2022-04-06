#include <stdio.h>
void input_string(char* a, char* b)
{
    printf("Enter the string:\n");
    scanf("%s", a);
    printf("Enter the substring:\n");
    scanf("%s", b);
}

/*
    index of substring in string - If substing is found
    -1 - If substring is not found
*/

int sub_str_posn(char *string, char *substring)
{
  int i, j = 0;
  for (i = 0; string[i] != 0 && substring[j] != 0; i++)
    {
      if (string[i] == substring[j])
        j++;
      else if (j != 0)
        j = 0;
    }
  if (j != 0)
    return i - j;
  return -1;
}

void output(char* string, char* substring, int index)
{
    if (index >= 0)
        printf("The index of %s in %s is %d\n", substring, string, index);
    else
        printf("%s is not found in %s\n", substring, string);
}

int main()
{
    char str[100];
    char substr[100];
    input_string(str, substr);
    int index = sub_str_posn(str, substr);
    output(str, substr, index);
    return 0;
}
