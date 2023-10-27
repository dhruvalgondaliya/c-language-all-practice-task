#include <stdio.h>
#include <string.h>
int main()
{
    char str[50][50];
  
  printf("\n Enter a uppercase string:");
  gets(str);

  printf("\n your uppercase string is:");
  puts(str);

  printf("\n your capital string is %s",strlwr(str));


    return 0;
}