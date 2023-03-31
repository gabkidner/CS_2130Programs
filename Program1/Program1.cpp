#include <iostream>
int main(){
  using namespace std;
  string setA = "{1,3,5,6,8}", setB = "{2,3,4,7,9}", AuB = "{", AnB = "{",
         AminusB = "{", anb = " ";
  char chaA, chaB;
  int index1 = 0;
  for (int i = 0; i < setB.length(); i++) {
    chaA = setA[i];
    chaB = setB[i];
    if (isdigit(chaA) || isdigit(chaB)) {
      index1 = i;
      if (chaA == chaB) {
        AuB = AuB.append(setA.substr(index1, 1));
        AnB = AnB.append(setA.substr(index1, 1));
        if (setA.find(chaA)+2 != setA.length()) {
          AuB = AuB.append(",");
          AnB = AnB.append(",");
        }
      }
      if (chaA != chaB) {
        AuB = AuB.append(setA.substr(index1, 1));
        AuB = AuB.append(",");
        AuB = AuB.append(setB.substr(index1, 1));
        AminusB = AminusB.append(setA.substr(index1, 1));
        if (setA.find(chaA)+2 != setA.length()) {
          AuB = AuB.append(",");
        }
        if (setA.find(chaA)+3 != setA.length()){
          AminusB = AminusB.append(",");
        }
      }
    }
  }

  if(AnB[AnB.length()-1]==','){
  	anb = anb.append(AnB.substr(0,AnB.length()-1));
  }
  anb = anb.append("}");
  AuB = AuB.append("}");
  cout << "AUB = " << AuB << "\nAnB =" << anb << "\nA-B = " << AminusB.substr(0,AminusB.length()-1) << "}";
  return 0;
}
