#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

void testSet1();
/*void testSet2();
void testSet3();
void testSet4();
*/

int main() {
  void *u = malloc(8);
  void *v = malloc(68);
  void *x = malloc(5);
  void *y = malloc(33);
  void *z = malloc(33);
  // ex1: malloc() test
  printf("Hello %p\n", u);
  printf("Hello %p\n", v);
  printf("Hello %p\n", x);
  printf("Hello %p\n", y);
  printf("Hello %p\n", z);
  // void *a = malloc(32);
  // printf("Hello %p\n", a);

  return (errno);
}