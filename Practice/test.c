#include <stdio.h>

int main()
{
  char c, *ptr_c;
  int x, *ptr_int;
  float y, *ptr_y;

  // printf("C: address=%p, content=%c\n", &c, c);
  // printf("x: address=%p, content=%d\n", &x, x);
  // printf("y: address:%p, content=%f\n", &y, y);

  c = 'A';
  x = 7;
  y = 123.45;

  printf("C: address%p, content=%c\n", &c, c);
  printf("x: address=%p, content=%d\n", &x, x);
  printf("y: address:%p, content=%f\n", &y, y);

  ptr_c = &c;
  printf("*ptr_c: address%p, content:%c\n", &ptr_c, ptr_c);
  printf("*ptr_c => %c\n", *ptr_c);


  return (0);


}
