#include <iostream>
#include <sstream>
#include <vector>
#include "BinaryTree.h"
using namespace std;


main(){
  BinaryTree tree;
  string input = "50, 75, 25, 15, 60, 35, 90, 42, 20, 27, 5, 55, 95, 80, 70", temp;
  int num, middle;
  stringstream ss(input);
  vector<int>numbers;
  while(getline(ss, temp, ',')){
    numbers.push_back(stoi(temp));
  }
  for(int i:numbers){
    tree.insert(i);
  }
  tree.orders();
}
