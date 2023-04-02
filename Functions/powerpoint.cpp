#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


/* PROBLEMS #16-17 =============================================PROBLEM 1

double RightTriangle(double z, double x);


int main() {

double a = 0, b = 0;

 cout << "Enter the first side!" << endl;
cin >> a;

  cout << "Enter the second side!" << endl;
  cin >> b;

  RightTriangle(a, b);

cout << "Here's the result! " <<   RightTriangle(a, b) << endl;
  
}

double RightTriangle(int z, int x){

int result;

result = pow(z, 2) + pow(x, 2);  

result = sqrt(result);  

return result;
  
}

*/


/* ============================================================= PROBLEM 2

double find_absvalue(double);

int main(){

  double x;

  cout << "Enter the number!" << endl;
  cin >> x;

find_absvalue(x);

cout << find_absvalue(x) << endl;
  
}

double find_absvalue(double z){
double re;
  
if( z < 0){
  
    re =  z * (-1);
} else {
  re = z;
  
    }
    return re;
  };

*/

/*=========================================================== PROBLEM 3

double volume(double, double);

int main (){

double lenght, radius;


    cout << "Enter the lenght: " << endl;
    cin >> lenght;
    cout << "Enter the radius: " << endl;
    cin >> radius;

  volume(lenght, radius);

if (lenght < 0 && radius < 0) {
  cout << "There's no negative distances!" << endl;
  } else {
  cout << "The volume is: " << volume(lenght, radius) << endl;
  }
  
}

double volume(double z, double x){ 

  double volume;

  volume = M_PI * pow(x, 2) * z;
  
  return volume;
  
};

*/

/* =============================================================== PROBLEM 4
double cylinder(double a, double b);

int main (){

  double radius, length;

  cout << "Enter the radius!" << endl;
  cin >> radius;
  cout << "Enter the length" << endl;
  cin >> length;

   cylinder (radius, length);

  cout << "The surface is: " <<  cylinder (radius, length) << endl;
}


double cylinder(double a, double b){

double surface;

//Real formula is: 2πrh + 2πr^2
  
surface = ((2 * M_PI) * a * b) + (2*M_PI * (pow(a, 2)));

  return surface;
  
};

*/

/* ===================================================== PROBLEM 5 (?)

double cuadraticFormula (int a, int b, int c, double x);

int main (){

int a, b, c;
double x;

cout <<  "Enter the coefficient A" << endl;
cin >> a;
  cout <<  "Enter the coefficient B" << endl;
cin >> b;
  cout <<  "Enter the coefficient C" << endl;
cin >> c;
  cout << "Enter the value of X" << endl;
  cin >> x;

  cuadraticFormula (a, b, c, x);

    if (a == 0){
      cout << "Note that A can't be equal to 0!" << endl;
    } else {
      cout << "The result is: " <<  cuadraticFormula (a, b, c, x) << endl;
    }
}

double cuadraticFormula (int a, int b, int c, double x){

  double result;

result = (pow(x,2) * a) + (b * x) + c;

  return result;
}

*/

















/* PROBLEMS #11-12 ================================ PROBLEM 1 
void check (int first, double second, double third);

int main (){

int firstn;
double secondn, thirdn;

cout << "Enter the first number!" << endl;
cin >> firstn;
cout << "Enter the second number!" << endl;
cin >> secondn;
cout << "Enter the last number!" << endl;  
cin >> thirdn;

 check (firstn, secondn, thirdn); 
  
}



void check (int first, double second, double third){

cout << first << endl;
cout << second << endl;
cout << third << endl;  

};

*/

/* ======================================================== PROBLEM 2

double by(float x, float y);

int main (){

float a, b;

  cout << "Enter the first number!\n";
  cin >> a;
  cout << "Enter the second number!\n";
  cin >> b;

by(a, b); 

cout << "The result is: " << by(a,b) << endl; 
}

double by(float x, float y){

  float resultby;
  resultby = x*y;
  return resultby;
  
};

*/  

/*================================================ PROBLEM 3

void cuadratic (int a);

int main (){
cout << "  Counter " << "   Cuadratic   " <<  "   cubes    "  << endl;
cout << "  ======= " << "   =========   " <<  "  ====== " << endl;
int z = 10;

cuadratic (z); 


}

void cuadratic (int a){

  for (int i = 1; i <= a; i++){
    cout << setw(5) << i << setw(12)<< pow(i,2) << setw(15) << pow (i,3) << endl;
    
  }
}

*/



/*========================================================================= PROBLEM 4
int findmax (int, int, int);
int findmax (int, int);

int main() {

int first, second, third, idk;
  
  cout << "enter 1" << endl;
  cin>> first;

    cout << "enter 2" << endl;
  cin>> second;

    cout << "enter 3" << endl;
  cin>> third;
 


  idk = findmax (first, second, third);
 cout << idk;

  
}



int findmax (int x, int y, int z){
  if (x > y && x > z){
return x;
    
    } else if  (y > x && y > z) {
    return y;
    } else if (z > x && z > y){
     return z;
    }
  } 


int findmax (int x, int y){
  if (x > y ) {
    cout << "first number is greater " << endl;
    
  } else {
     cout << "second number is greater " << endl;
    }
  }

*/