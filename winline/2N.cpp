#include <iostream>
#include <time.h>
#include <stdio.h>
#include <math.h>
using namespace std;
inline __attribute__((always_inline)) int fn(float a)
{
  int ret = 0;
  for(int i = 0; i<= (int)pow(2,a); i++){
    ret += i;
  }

  return ret;
}
inline __attribute__((always_inline)) void runEverything(){
 // cout<< pow(2, 26.5754247591);
  int temp = fn(26.5754247591);
}
 int main() {
  clock_t tStart = clock();
  runEverything();
  printf("Time taken: %f clocks\n", (double)(clock() - tStart));
    return 0;
}