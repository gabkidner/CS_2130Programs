#include <iostream>
using namespace std;

main(){
  int numberOfChar = 5, loop;
  for(int i; i<=4; i++){
    loop = 0;
    while(loop!=numberOfChar){
      cout << "a";
      loop++;
    }
    loop=0;
    while(loop!=numberOfChar){
      cout << "b";
      loop++;
    }
    numberOfChar--;
  }
}
