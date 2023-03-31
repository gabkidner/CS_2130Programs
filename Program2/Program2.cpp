#include <iostream>
using namespace std;

int main() {
  string sentence, output1, output2;
  int ogValue, scenario, hashValue, sentenceNum=0;
  char newLetter;
  getline(cin,sentence);
  for(int i = 0; i<sentence.length(); i++){
    ogValue = sentence[i];
    if(ogValue == 32){
      hashValue = ogValue-1;
      scenario = 1;
    }
    else if(ogValue >= 65&&ogValue <= 90){
      hashValue = ogValue-64;
      scenario = 2;
    }
    else if(ogValue >= 97&&ogValue <= 122){
      hashValue = ogValue-96;
      scenario = 3;
    }
    sentenceNum+= hashValue;
  }
  sentenceNum%=31;
  cout << sentenceNum;
  return 0;
}
