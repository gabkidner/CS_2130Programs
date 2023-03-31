//50 50 chance
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//50 - 50 chance

main(){
  char doors[3];
  double stayProb = 0, switchProb = 0;
  int choice, open, winner, oldChoice;
  srand(time(NULL));
  for(int i = 0; i < 100001; i++){
    winner = rand() % 3;
    for(int d = 0; d < 3; d++){
      if(d == winner){
        doors[d] = '$';
      }
      else{
        doors[d] = 'G';
      }
    }
    oldChoice = rand() % 3;
    for(int d = 0; d < 3; d++){
      if(d != oldChoice){
        do{
          open = rand() % 3;
        }while(open == winner || doors[open] != 'G' || open == oldChoice);
      }
    }
    do{
      choice = rand() % 3;
    }while(choice == open);
    if(doors[choice] == '$' && choice == oldChoice){
      stayProb++;
    }
    else if(doors[choice] == 'G' && choice == oldChoice){
      switchProb++;
    }
    else if(doors[choice] == '$' && choice != oldChoice){
      switchProb++;
    }
    else if(doors[choice] == 'G' && choice != oldChoice){
      stayProb++;
    }
  }
  stayProb /= 100000;
  switchProb /= 100000;
  stayProb *= 100;
  switchProb *= 100;
  cout << "Staying Probability: " << round(stayProb) << "%\nSwitching Probability: " <<  round(switchProb) << "%\n";
}
