#include <stdio.h>

int main(int i, char *array[])
{
  if (!i){
    fprintf(stderr,"yoloooo");
    return -1;
  }
  printf("Hello %s", array[0]);
  return 0;
}
