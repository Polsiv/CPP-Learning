#include <iostream>
#include <math.h>

//Trabaé solo en todos los talleres; Alejandro me ayudó a entender algunos puntos, mi código es : 99127.

using namespace std;
int main() {


/*======================= PROBLEM 1



double weight [5];
string name [5]; 

  string winner = " ";
double weightest = 0; 


for (int i = 0; i < 5; i ++) {
  cout << "Enter the name: " << endl;
  cin  >> name [i];
  cout << "Enter the weight: " << endl;
  cin >> weight [i];
    
}    for (int j = 0; j < 5; j ++){

     if (weightest < weight [j]) {
        
       weightest = weight [j];
       winner = name [j];
       }  
    } cout << "The weightest person is: " << winner <<  endl;
 }

*/


  /*======================= PROBLEM 2

double harv [12];
  int counterMonth = 1;

double counterHarv, avg;

int best = 0, worst = 0;
  
  
for(int i = 0; i < 12; i++){

  cout << "Enter the Harvest for the " << counterMonth<< "° Month" << endl;
cin >> harv [i];
  counterMonth ++;
  
  counterHarv += harv[i];
  
    } avg = counterHarv / 12;
  cout << "The total average is: "<< avg << endl;;

for (int i = 0; i < 12; i++){

  if (avg > harv[i]) {
    worst ++;
    
  } if (avg < harv[i]){
    best ++;
  }
}
  cout << "Months above from average: " << best << endl;
   cout << "Months below from average: " << worst << endl;
  
}

*/


    /*======================= PROBLEM 3
  
  int totalscore = 0, counter = 1;
  double avg = 0, tscore = 0, variation = 0, deviation = 0;

  cout << "Enter the amount of scores you're going to evaluate!" << endl;
  cin >> totalscore;

double scores [totalscore];

  for (int i = 0; i < totalscore; i ++){
    
    cout << "Enter the score " << counter << endl;
    cin >> scores [i];
    counter ++;

    tscore+= scores [i];
  }

  avg = tscore / totalscore;

  for (int i = 0; i < totalscore; i++){

     variation = variation + pow(scores[i]-avg,2) ;
    
    
  }

  variation/= totalscore;

  deviation = sqrt(double(variation));

    cout << "the average is: " << avg << endl;
    cout << "the variation  is: " << variation << endl;
    cout << "the deviation is: " << deviation << endl;
  }

// de aquí aprendí a siempre inicializar TODAS las variables con 0

*/

   /*======================= Double array Problem 1

  
int number [2][4];
 int counter = 1, add = 0; 
  


for (int i = 0; i < 2; i++){
  
  counter = 1; 
  
  for (int j = 0; j < 4; j++){
    cout << "Enter the number " << counter << endl;
   
      counter ++;
    
    cin >> number [i][j];
    
      }
    }  

  for (int i = 0; i < 2; i++){
 add = 0;
    cout << endl; // < -- seting the raws
      for (int j = 0; j < 4; j++){
        
        cout << "   " << number[i][j]; // printing numbers 
        add+= number [i][j]; 
    

       if(j==3){
        cout<<"   "<<add; //printing result 
         }
       } 
    }
  }

*/


   /*======================= Double array Problem 2
  
int firstMat [3][3];
  
int secondMat [3][3];

cout << "Reminder: this is an 3x3 array!" << endl;
cout << "===============================" << endl;
cout << "enter the numbers of the first array!" << endl;
for (int i = 0; i < 3; i ++){
  for (int j = 0; j < 3; j++){
    
    cin >> firstMat [i][j];
  }
}
   cout << "Enter the numbers of the second array!" << endl;
  for (int i = 0; i < 3; i ++){
    for (int j = 0; j < 3; j++){
   
    cin >> secondMat [i][j];
  }
}
  
  
  if (firstMat[0][0] == secondMat[0][0] && firstMat[1][1] == secondMat[1][1] && firstMat[2][2] == secondMat[2][2]) {
    cout << "They both have the same main diagonal!" << endl;
  } else {
   cout <<  "They both not have same the main diagonal!" << endl;
  }
  
 }
*/
