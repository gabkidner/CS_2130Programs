#include <iostream>
using namespace std;

void baseCheck(string &, int);

main() {
  string newBase, base16, base8, base2;
  int copyMod=8, copyDiv,  loop = 0;
  int base10, x=20;
  cin >> base10;
  copyDiv = base10;
  do{
    if(loop==0){
      copyMod = base10%16;
    }
    else{
      copyMod = copyDiv%16;
    }
    copyDiv/=16;
    loop++;
    baseCheck(newBase, copyMod);
  }while(copyDiv!=0);
  for(int i = 1; i<=newBase.length(); i++){
    char a = newBase[newBase.length()-i];
    base16+=a;
  }
  copyDiv = base10;
  loop=0;
  newBase.erase();
  do{
    if(loop==0){
      copyMod = base10%8;
    }
    else{
      copyMod = copyDiv%8;
    }
    copyDiv/=8;
    loop++;
    baseCheck(newBase, copyMod);
  }while(copyDiv!=0);
  for(int i = 1; i<=newBase.length(); i++){
    char a = newBase[newBase.length()-i];
    base8+=a;
  }
  copyDiv = base10;
  loop=0;
  newBase.erase();
  do{
    if(loop==0){
      copyMod = base10%2;
    }
    else{
      copyMod = copyDiv%2;
    }
    copyDiv/=2;
    loop++;
    baseCheck(newBase, copyMod);
  }while(copyDiv!=0);
  for(int i = 1; i<=newBase.length(); i++){
    char a = newBase[newBase.length()-i];
    base2+=a;
  }
  cout << "Base16 = " << base16 << "\nBase8 = " << base8 << "\nBase2 = " << base2 << endl;
}

void baseCheck(string &newBase, int copyMod){
  if(copyMod==0){
    newBase+='0';
  }
  else if(copyMod==1){
    newBase+='1';
  }
  else if(copyMod==2){
    newBase+='2';
  }
  else if(copyMod==3){
    newBase+='3';
  }
  else if(copyMod==4){
    newBase+='4';
  }
  else if(copyMod==5){
    newBase+='5';
  }
  else if(copyMod==6){
    newBase+='6';
  }
  else if(copyMod==7){
    newBase+='7';
  }
  else if(copyMod==8){
    newBase+='8';
  }
  else if(copyMod==9){
    newBase+='9';
  }
  else if(copyMod==10){
    newBase+='A';
  }
  else if(copyMod==11){
    newBase+='B';
  }
  else if(copyMod==12){
    newBase+='C';
  }
  else if(copyMod==13){
    newBase+='D';
  }
  else if(copyMod==14){
    newBase+='E';
  }
  else if(copyMod==15){
    newBase+='F';
  }
}
