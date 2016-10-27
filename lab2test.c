#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
void testSet1(){
  int i = 5;
  void *x = malloc(i);
  printf("Hello ex1_test %p\n", x);
 // x = malloc(7);
  //printf("Hello %p\n", x);

}
/*void testSet2(){
  int i = 5;
  void *x = malloc(i);
  printf("Hello %p\n", x);
  x = malloc(7);
  printf("Hello %p\n", x);
}
*/
int main() {
  testSet1();
  //testSet2();
  return (errno);
}