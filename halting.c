#include<stdio.h>

int main()
{
  int i = 0;
  if(i == 0)
  {
    printf("HALTS");
    main();
  }
  else
  {
    printf("LOOPS");
  }
}