#include <stdio.h>

int main()
{
  char a;
  printf("Please Enter any character \n");
  scanf("%c",&a);
  
  if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
  {
    printf("%C Alphabet", a);
  }
  else
  {
    printf("%c NO",a);
  }
  return 0;
}
