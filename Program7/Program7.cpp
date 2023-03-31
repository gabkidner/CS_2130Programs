#include <iostream>
#include <math.h>
using namespace std;

 long nFactorial(int);
 long rFactorial(int);
 long factorial(int);

main(){
  int n, r, perm, cobRep, cob, blank, top, bottom;
  double permRep;
  cout << "Input n: " << endl;
  cin >> n;
  cout << "\nInput r: " << endl;
  cin >> r;
  permRep = pow(n,r);
  blank = n - r;
  cob = nFactorial(n) / (rFactorial(r) * factorial(blank));
  perm = nFactorial(n) / factorial(blank);
  int newValue = factorial(blank);
  blank = n + r - 1;
  top = factorial(blank);
  bottom = rFactorial(r) * factorial(n-1);
  cobRep = top / bottom;
  cout << "Permutations w/ Repeats: " << permRep << "\nPermutations w/out Repeats: " << perm << "\nCombination w/ Repeats: " << cobRep << "\nCombination w/out Repeats: " << cob << endl;
}

long nFactorial(int n){
  int factor = 1;
  for(int i = n; i >= 1; i--) {
    factor *= i;
  }
  return factor;
}

long rFactorial(int r){
  int factor = 1;
  for(int i = r; i >= 1; i--){
    factor *= i;
  }
  return factor;
}

long factorial(int blank){
  int factor = 1;
  for(int i = blank; i >= 1; i--){
    factor *= i;
  }
  return factor;
}
