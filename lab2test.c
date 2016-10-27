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
  testSet1();
  /*testSet2();
	testSet3();
	testSet4();
  */
  return (errno);
}

void testSet1(){
  void *x;
  int i = 1;
  for (;i<=5;i++){
 	x = malloc(i+4);
  	printf("Ex1_test%d Hello %p\n", i, x);
  }
}
/*void testSet2(){
  void *x;
  int i = 5;
  int c = 1;
  for (;i<=10;i++){
 	x = malloc(i);
 	free(x);
  	printf("Ex2_test%d Hello %p\n", c, x);
 	c++;
  }
}
*/
/*void testSet3(){
  void *x;
  int i = 5;
  int c = 1;
  for (;i<=10;i++){
 	x = malloc(i);
 	free(x);
  	printf("Ex3_test%d Hello %p\n", c, x);
 	c++;
  }
}
*/
/*void testSet2(){
  void *x;
  int i = 5;
  int c = 1;
  for (;i<=10;i++){
 	x = malloc(i);
 	free(x);
  	printf("Ex2_test%d Hello %p\n", c, x);
 	c++;
  }
}
*/