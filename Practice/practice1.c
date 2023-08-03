#include <stdio.h>

void display();

void display(int a, int b){

  int i;
  int y = a + b;
 for (i = 0; i < 10; i++)
 {
  printf("%d", y);
 }
 
}

int main (){

  int x;
  display(1,2);
  return (0);

}

