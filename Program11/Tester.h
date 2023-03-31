#pragma once
#include <iostream>
using std::string;
using std::ostream;
using std::endl;
using std::cout;

class Tester{
  public:
    Tester(int array[4][4]);
    bool reflexive();
    bool irreflexive();
    bool symetric();
    bool asymetric();
    bool transitive();
    bool equivilance();
    void finalResult();
    friend ostream &operator <<(ostream&, const Tester &);
  private:
    int matrix[4][4];
    string result;
};

Tester::Tester(int array[4][4]){
  for(int r = 0; r < 4; r++){
    for(int c = 0; c < 4; c++){
      matrix[r][c] = array[r][c];
    }
  }
  result = "";
}

bool Tester::reflexive(){
  if(matrix[0][0] == 1 && matrix[1][1] == 1 && matrix[2][2] == 1 && matrix[3][3] == 1){
    return true;
  }
  return false;
}

bool Tester::irreflexive(){
  if(matrix[0][0] == 0 && matrix[1][1] == 0 && matrix[2][2] == 0 && matrix[3][3] == 0){
    return true;
  }
  return false;
}

bool Tester::symetric(){
  for(int r = 0; r < 4; r++){
    for(int c = 0; c < 4; c++){
      if(r != c){
        if(matrix[r][c] != matrix[c][r]){
          return false;
        }
      }
    }
  }
  return true;
}

bool Tester::asymetric(){
  for(int r = 0; r < 4; r++){
    for(int c = 0; c < 4; c++){
      if(r != c && matrix[r][c] == 1){
        if(matrix[r][c] == matrix[c][r]){
          return false;
        }
      }
    }
  }
  return true;
}

bool Tester::transitive(){
  int tru = 0;
  int fal = 0;
  for(int r = 0; r < 4; r++){
    for(int c = 0; c < 4; c++){
      if(matrix[r][c] == 1 && r != c){
        for(int i = 0; i < 4; i++){
          if(c != i && r != i){
            if(matrix[c][i] == 1 && matrix[r][i] == 1){
              tru++;
            }
            else if(matrix[c][i] == 1 && matrix[r][i] == 0){
              fal++;
            }
          }
        }
      }
    }
  }
  if(fal == 0 && tru != 0){
    return true;
  }
  else{
    return false;
  }
}

bool Tester::equivilance(){
  if(transitive() && symetric() && reflexive()){
    return true;
  }
  return false;
}

void Tester::finalResult(){
  if(asymetric()){
    result += "asymetric, ";
  }
  if(asymetric() && !reflexive()){
    result += "antisymetric, ";
  }
  if(reflexive()){
    result += "reflexive";
  }
  else if(irreflexive()){
    result += "irreflexive";
  }
  if(symetric() && !reflexive() && !irreflexive()){
    result += "symetric";
  }
  else if(symetric() && reflexive() || irreflexive()){
    result += ", symetric";
  }
  if(transitive()){
    result += ", transitive";
  }
  if(equivilance()){
    result += ", equivilance";
  }
}

ostream &operator <<(ostream& out, const Tester & res){
  out << res.result << "\n------------------" << endl;
  for(int r = 0; r < 4; r++){
    out << "| ";
    for(int c = 0; c < 4; c++){
      out << res.matrix[r][c] << " | ";
    }
    out << "\n------------------" << endl;
  }
  return out;
}
