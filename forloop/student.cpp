#include <iostream>
using namespace std;

int main() {
int cont, est, score, add, total;
double avg;
for (int est = 1; est <= total ; est++){
   for (int cont = 1;  cont <=3; cont++){
     cout <<" Insert the score" << cont << "Of the student" << est << endl;
     cin >> score;
     cin >> total;
     add = add + score;
   }

avg = add / total ;

  cout<< "The avg of the student " << est << "is " << avg << endl;
  
}
  
}