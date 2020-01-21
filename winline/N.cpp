//thank you to the  Free Software Foundation for the function attribute "always-inline"
#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;
inline __attribute__((always_inline)) int fn(int a)
{
  int ret = 0;
  for(int i = 0; i<=a; i++){
    ret += i;
  }
  return ret;
}
inline __attribute__((always_inline)) void runEverything(){
  int ret =  fn(100000000);
}
 int main() {
  
  clock_t tStart = clock();
    runEverything();
    printf("Time taken: %f clocks\n", (double)(clock() - tStart));
    return 0;

}
