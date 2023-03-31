#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

main(){
  string user;
  int integer = 0, index;
  vector<int>::iterator it;
  vector<int> x;
  vector<int> inte;
  vector<int> y;
  do{
    user.erase();
    cout << "Type a ordered pair: \"(x,y)\" and type \"stop\" when you are done\n";
    cin >> user;
    for(int i = 1; i < user.length(); i++){
      if(user[i-1] == '('){
        integer = user[i] - 48;
        it = x.end();
        it = x.insert(it, integer);
      }
      if(user[i-1] == ','){
        integer = user[i] - 48;
        it = y.end();
        it = y.insert(it, integer);
      }
    }
  }while(user != "stop" && user != "Stop");
  for(int i = 0; i < x.size(); i++){
    it = inte.end();
    it = inte.insert(it, i);
  }
  for(int i = 0; i < inte.size()-1; i++){
    for(int j = 0; j < inte.size()-1; j++){
      if(x[j] > x[j+1]){
        swap(x[j], x[j+1]);
        swap(inte[j], inte[j+1]);
      }
    }
  }
  //sort y correctly
  for(int i = 0; i < inte.size(); i++){
    if(i != inte[i]){
      swap(y[i], y[inte[i]]);
    }
  }
  cout << "Relation: {";
  for(int i = 0; i < x.size(); i++){
    cout << "(" << x[i];
    if(i != x.size()){
      cout << ",";
    }
    cout << y[i] << ")";
    if(i != x.size()-1){
      cout << ", ";
    }
  }
  cout << "}\nD: ";
  for(int i = 1; i < x.size(); i++){
    if(x[i] != x[i-1]){
      cout << x[i-1];
      if(i != x.size()){
        cout << ", ";
      }
    }
    if(x[x.size()-2] != x[x.size()-1] && i == x.size()-1){
      cout << x[x.size()-1];
    }
  }
  sort(y.begin(), y.end());
  cout << "\nR: ";
  for(int i = 1; i < y.size(); i++){
    if(y[i] != y[i-1]){
      cout << y[i-1];
      if(i != y.size()){
        cout << ", ";
      }
    }
    if(y[y.size()-2] != y[y.size()-1] && i == y.size()-1){
      cout << y[y.size()-1];
    }
  }
}
