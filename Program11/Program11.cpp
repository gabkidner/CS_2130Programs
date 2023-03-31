#include <iostream>
#include "Tester.h"
using namespace std;

main(){
  int a[4][4] = {{1, 1, 0, 0}, {1, 0, 0, 1}, {0, 0, 0, 0}, {0, 1, 0, 1}};
  int b[4][4] = {{1, 0, 0, 0}, {1, 1, 1, 0}, {1, 1, 1, 0}, {1, 0, 0, 1}};
  int c[4][4] = {{0, 1, 0, 0}, {0, 0, 0, 1}, {0, 1, 0, 0}, {1, 0, 0, 0}};
  int d[4][4] = {{1, 0, 1, 1}, {0, 1, 0, 0}, {1, 0, 1, 1}, {1, 0, 1, 1}};
  Tester testA(a);
  Tester testB(b);
  Tester testC(c);
  Tester testD(d);
  testA.finalResult();
  testB.finalResult();
  testC.finalResult();
  testD.finalResult();
  cout << "Matrix A: " << testA << "\nMatrix B: " << testB << "\nMatrix C: " << testC << "\nMatrix D: " << testD;
}
