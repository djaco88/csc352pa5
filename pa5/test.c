#include <stdio.h>
#include "arrayz.h"
#include <stdlib.h>

int main (int argc, char * argv[]){
  double test1[]= {4, 2, 1, 4, 3};
  double test2[]= {4, 1454, 100, 123, 3241};
  long test3[]= {4, 4, 2, 3, 1};
  long test4[]= {5, 2345,4525, 234,6253,21};
  //sum
  printf("sum test one. should be: 13378, got: %ld\n", sum(test4));
  printf("sum test two. should be: 10, got: %ld\n", sum(test3));
  //minil
  printf("minil test one. should be 4, got %ld\n", minil(test3));
  printf("minil test two. should be 5, got %ld\n", minil(test4));
  //minid
  printf("minid test one. should be 2, got %ld\n", minid(test1));
  printf("minid test two. should be 2, got %ld\n", minid(test2));
  //maxil
  printf("maxil test one. should be 1, got %ld\n", maxil(test3));
  printf("maxil test two. should be 4, got %ld\n", maxil(test4));
  //maxid
  printf("maxid test one. should be 3, got %ld\n", maxid(test1));
  printf("maxid test two. should be 4, got %ld\n", maxid(test2));
  //prints
  printad(test1);
  printad(test2);
  printal(test3);
  printal(test4);
  //means
  printf("mean test one. should be 2.5, got %lf\n", mean(test3));
  printf("mean test two. should be 2675.6, got %lf\n", mean(test4));
  //sdevs
  printf("sdev test one. should be 1.1180339887499, got %lf\n", sdev(test3));
  printf("sdev test two. should be 2422.2171331241, got %lf\n", sdev(test4));
  return 0;
}
