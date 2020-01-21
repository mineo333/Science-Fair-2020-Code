#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;
/*inline __attribute__((always_inline))*/ int fn(int a)
{
  int ret = 0;

  for(int i = 0; i<=a; i++){
    for(int j = 0; j<=a; j++){
      for(int k = 0; k<=a; k++){
      ret += i;
      }
    }
  }
  return ret;
}
/*inline __attribute__((always_inline))*/ void runEverything(){
  int temp = fn(464);
}
 int main() {
  clock_t tStart = clock();
  runEverything();
  printf("Time taken: %f clocks\n", (double)(clock() - tStart));
    return 0;
}
