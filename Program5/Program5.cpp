#include <iostream>
using namespace std;

int main() {
  string andOr, notP, notQ;
  cout << "Do you want to use And or Or? (a/o)" << endl;
  cin >> andOr;
  cout << "Do you want to NOT p? (y/n)" << endl;
  cin >> notP;
  cout << "Do you want to NOT q? (y/n)" << endl;
  cin >> notQ;
  if(andOr[0] == 'a'&&notP[0] == 'n' && notQ[0] == 'n'){
    cout << "p  q  pAq\n1  1   1\n1  0   0\n0  1   0\n0  0   0" << endl;
  }
  else if(andOr[0] == 'o' && notP[0] == 'n' && notQ[0] == 'n'){
    cout << "p  q  pVq\n1  1   1\n1  0   1\n0  1   1\n0  0   0" << endl;
  }
  else if(andOr[0] == 'a' && notP[0] == 'y' && notQ[0] == 'n'){
    cout << "p  q  ~pAq\n1  1    0\n1  0    0\n0  1    1\n0  0    0" << endl;
  }
  else if(andOr[0] == 'o' && notP[0] == 'y' && notQ[0] == 'n'){
    cout << "p | q  ~pVq\n1  1    1\n1 | 0  |  0\n0  1    1\n0  0    1" << endl;
  }
  else if(andOr[0] == 'a' && notP[0] == 'n' && notQ[0] == 'y'){
    cout << "p  q  pA~q\n1  1    0\n1  0    1\n0  1    0\n0  0    0" << endl;
  }
  else if(andOr[0] == 'o' && notP[0] == 'n' && notQ[0] == 'y'){
    cout << "p  q  pV~q\n1  1    1\n1  0    1\n0  1    0\n0  1    1" << endl;
  }
  else if(andOr[0] == 'a' && notP[0] == 'y' && notQ[0] == 'y'){
    cout << "p  q  ~(pAq)\n1  1     0\n1  0     1\n0  1     1\n0  0     1" << endl;
  }
  else if(andOr[0] == 'o' && notP[0] == 'y' && notQ[0] == 'y'){
    cout << "p  q  ~(pVq)\n1  1     0\n1  0     0\n0  1     0\n0  0     1" << endl;
  }
  return 0;
}
