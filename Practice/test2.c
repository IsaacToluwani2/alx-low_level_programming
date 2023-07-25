#include <stdio.h>

void modify_my_param(int m)
{
  m = 402;
}

int main()
{
  int n;

  n=98;
  modify_my_param(n);
  return 0;
}
