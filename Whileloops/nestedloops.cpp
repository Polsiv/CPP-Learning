#include <iostream>
#include <iomanip>
#include <math.h>

//Trabajé solo. 99127 por si mi código es necesario

using namespace std;

int main() {
/*============= FOOR LOOPS PROBLEM 1



double expan;  

cout << "Temperature" << "       " << "Expansion" << endl;
cout << "===========" << "       " << "=========" << endl;


for (int temp = 0; temp <= 40; temp+=5){
  
  expan = (11.7 * pow(10,-6)) * 7365 * (40-temp);
  cout << temp << "                  "  << expan << endl;
  }    
  
}

*/

/*============= FOOR LOOPS PROBLEM 2

double distance = 0, tDistance = 0;

  cout << "Time" << setw(10) <<" Current interval distance " << setw(10)<< "Total distance" << endl;

  cout << "====" << setw(10) << "  =========================  "  << setw(10) << 
" ==========  " << endl;
   
for (int i = 0; i < 11; i++){
        distance = 32 * 0.5 * pow(i, 2);
        tDistance += distance;
          
   cout << i << setw(20)  << distance  << setw(20)  << tDistance << endl;
    }
  
  }

*/


/*============= NESTED FOOR LOOPS PROBLEM 1
  
  double avg = 0, counter = 0, data = 0;

  for (int i = 0; i < 4; i++){

cout << "Enter the data for the  experiment" << " " << i + 1<< ":"<< endl;
 counter = 0 // this is for reseting the counter
      for  (int k = 0; k < 6; k++){

        cout << "Enter the value obtained!" << endl;
        cin >> data;

          counter += data;
      } avg = counter / 6;

    switch(i) {
       case 0: cout<<"Result of the 1st Experiemnt: "<< avg << endl;
         
      break;
      
       case 1: cout<<"Result of the 2nd Experiemnt: "<< avg << endl;
         
      break;
        case 2: cout<<"Result of the 3rd Experiemnt: "<< avg << endl;
          
      break;
       case 3: cout<<"Result of the 4th Experiemnt: "<< avg << endl;
      break; 
    }
    
  }

}

*/

/*============= NESTED FOOR LOOPS PROBLEM 2 (es casi lo mismo que el problema 1)
  
 double avg = 0, counter = 0, data = 0;

  for (int i = 0; i < 5; i++){

cout << "Enter the data for  generator" << " " << i + 1<< ":"<< endl;
    counter = 0; // this is for reseting the counter
      for  (int k = 0; k < 3; k++){

        cout << "Enter the value obtained!" << endl;
        cin >> data;

          counter += data;
      } avg = counter / 3;

    switch(i) {
       case 0: cout<<"Result of the 1st generator: "<< avg << endl;
         
      break;
      
       case 1: cout<<"Result of the 2nd generator: "<< avg << endl;
         
      break;
        case 2: cout<<"Result of the 3rd generator: "<< avg << endl;
          
      break;
       case 3: cout<<"Result of the 4th generator_ "<< avg << endl;
      break;

       case 4: cout<<"Result of the 4th generator: "<< avg << endl;
      break; 


    }
    
  }

}

*/

/* =============== NESTED FOOR LOOPS PROBLEM 3
  
double y;

for (int x = 1; x <6; x++){
  for (int z = 2; z < 7; z++){

    if (z==x) {
      cout << "Dividing by 0 is undefined!" << endl;
    } else {
      y = (x*z)/(x-z) ;
      cout << y << endl;
      
        }
      }
    }
  }

*/


/* =============== DO WHILE PROBLEM 1 ( tuve que usar el bool para que no me saliera el "the score is out of reach" cuando se ponia 999 como input)
  
int counter = 0;
double avg = 0, add = 0, score = 0;
bool switcher = true;

do{

cout << "enter the score!" << endl;
  cin >> score;

  if( score == 999) {
    switcher = false;
  }
  else
  if (score < 0 || score > 100) {
    cout << "The score is out of reach" << endl;
  } else{

    add = add + score;
    counter ++;
  }
  
} while (switcher);

avg = add /counter;
  cout << "The total average is: " << avg << endl;
  }

*/

/* =============== DO WHILE PROBLEM 2 (Lo tuve que buscar en yt, pero ya entendí cómo funciona la lógica)

  int n, rev = 0, rem = 0;
  
  cout<<"Enter the number : ";
  cin>>n;


  do{
   rem = n % 10;
 rev = rev * 10 + rem;
    n /=10;

  }while(n != 0);

  cout <<"The number backwards is: " <<  rev << endl;
}


*/