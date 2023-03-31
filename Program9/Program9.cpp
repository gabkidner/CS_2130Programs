#include <iostream>
#include <iomanip>
using namespace std;

main(){
  int twoByTwo[2][2] = {{1, 3}, {3, 4}};
  int twoByThree[2][3] = {{2, 4, 8}, {4, 2, 9}};
  int threeByTwo[3][2] = {{5, 6}, {7, 9}, {4, 2}};
  int threeByThree[3][3] = {{4, 9, 2}, {2, 6, 6}, {1, 6, 8}};
  int r, c, mrows, mcols, nrows, ncols;
  string choice;
  cout << "Select M matrix\nType \"2x2\", \"2x3\", \"3x2\", \"3x3\"" << endl;
  cin >> choice;
  //set M matrix
  if(choice== "2x2"){
    r = 2;
    c = 2;
  }
  else if(choice == "2x3"){
    r = 2;
    c = 3;
  }
  else if(choice == "3x2"){
    r = 3;
    c = 2;
  }
  else if(choice == "3x3"){
    r = 3;
    c = 3;
  }
  int m[r][c];
  mrows = sizeof m / sizeof m[0];
  mcols = sizeof m[0] / sizeof(int);
  for(int r = 0; r < mrows; r++){
    for(int c = 0; c < mcols; c++){
      if(mrows == 2 && mcols == 2){
        m[r][c] = twoByTwo[r][c];
      }
      else if(mrows == 2 && mcols == 3){
        m[r][c] = twoByThree[r][c];
      }
      else if(mrows == 3 && mcols == 2){
        m[r][c] = threeByTwo[r][c];
      }
      else if(mrows == 3 && mcols == 3){
        m[r][c] = threeByThree[r][c];
      }
    }
  }
  //set N matrix
  cout << "\nSelect N matrix\nType \"2x2\", \"2x3\", \"3x2\", \"3x3\"" << endl;
  cin >> choice;
  if(choice== "2x2"){
    r = 2;
    c = 2;
  }
  else if(choice == "2x3"){
    r = 2;
    c = 3;
  }
  else if(choice == "3x2"){
    r = 3;
    c = 2;
  }
  else if(choice == "3x3"){
    r = 3;
    c = 3;
  }
  int n[r][c];
  nrows = sizeof n / sizeof n[0];
  ncols = sizeof n[0] / sizeof(int);
  for(int r = 0; r < nrows; r++){
    for(int c = 0; c < ncols; c++){
      if(nrows == 2 && ncols == 2){
        n[r][c] = twoByTwo[r][c];
      }
      else if(nrows == 2 && ncols == 3){
        n[r][c] = twoByThree[r][c];
      }
      else if(nrows == 3 && ncols == 2){
        n[r][c] = threeByTwo[r][c];
      }
      else if(nrows == 3 && ncols == 3){
        n[r][c] = threeByThree[r][c];
      }
    }
  }
  //math
  char user;
  do{
    cout << "\nadd(a) or multiply(m)" << endl;
    cin >> user;
  }while(user != 'a' && user != 'm');
  int a[mrows][ncols];
  if(mrows != nrows && user == 'a' || mcols != ncols && user == 'a'){
    cout << "\nThat is not possible" << endl;
  }
  else if(mcols != nrows && user == 'm'){
    cout << "\nThat is not possible" << endl;
  }
  else if(user == 'a'){
    for(int r = 0; r < mrows; r++){
      for(int c = 0; c < mcols; c++){
        a[r][c] = m[r][c] + m[r][c];
      }
    }
  }
  else if(user == 'm'){
    int x = 0;
    for(int r = 0; r < mrows; r++){
      x = 0;
      for(int d = 0; d < mrows; d++){
        x = 0;
        for(int c = 0; c < mcols; c++){
          x += m[r][c] * n[c][d];
          int y = mcols - 1;
          if(c == y){
            a[r][d] = x;
          }
        }
      }
    }
  }
    //print m
  for(int r = 0; r < mrows; r++){
    cout << "\n | ";
    for(int c = 0; c < mcols; c++){
      cout << m[r][c] << " ";
    }
    cout << "|";
  }
  if(user == 'a'){
    cout << " + ";
  }
  else if(user == 'm'){
    cout << " * ";
  }
  for(int r = 0; r < nrows; r++){
    if(r > 0){
      cout << "  ";
    }
    cout << "| ";
    for(int c = 0; c < ncols; c++){
      cout << n[r][c] << " ";
    }
    cout << "|\n           ";
  }
  cout << endl;
  for(int r = 0; r < mrows; r++){
    cout << "\n | ";
    for(int c = 0; c < ncols; c++){
      cout << a[r][c] << " ";
    }
    cout << "|";
  }
  cout << endl;
}
