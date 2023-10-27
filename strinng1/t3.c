#include <stdio.h>
#include <string.h>
int main()
{
    char str[50][50];
  
  printf("\n Enter a lower string:");
  gets(str);

  printf("\n your string is:");
  puts(str);

  printf("\n your capital string is %s",strupr(str));


    return 0;
}