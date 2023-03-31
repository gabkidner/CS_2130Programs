#include <iostream>
using namespace std;

void valueSwap(char &);

main(){
  string a, b, c, d, e, s;
  char value = '0';
  for(int i = 0; i < 32; i++){
    if(i%16 == 0){
      valueSwap(value);
    }
    a += value;
  }
  for(int i = 0; i < 32; i++){
    if(i%8 == 0){
      valueSwap(value);
    }
    b += value;
  }
  for(int i = 0; i < 32; i++){
    if(i%4 == 0){
      valueSwap(value);
    }
    c += value;
  }
  for(int i = 0; i < 32; i++){
    if(i%2 == 0){
      valueSwap(value);
    }
    d += value;
  }
  for(int i = 0; i < 32; i++){
    valueSwap(value);
    e += value;

  }

  for(int i = 0; i < 32; i++){
    if(((c[i] =='1' || d[i] == '0')&& b[i] == '1')&& !(d[i] == '1' || a[i] == '1' && e[i] == '1')){
      s += '1';
    }
    else{
      s += '0';
    }
  }
  cout << " a | b | c | d | e | (( c V ~d ) A b ) A ~( d V a A e )\n-------------------------------------------------------" << endl;
  for(int i = 0; i<32; i++){
    cout << " " << a[i] << " | " << b[i] << " | " << c[i] << " | " << d[i] << " | " << e[i] << " |                  " << s[i] << endl;
  }
}

void valueSwap(char &value){
  if(value == '0'){
    value = '1';
  }
  else if(value == '1'){
    value = '0';
  }
}
