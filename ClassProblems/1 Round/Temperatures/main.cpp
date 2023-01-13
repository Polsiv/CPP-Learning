
/* Made by:

Juan Silvestre / code: 99127
Juan Vargas / code: 57308

*/

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

/* Ejercicio 1
int main() {

  double meters;
  double centimeters;
  double kilometers;
  double inches;

  cout << "Insert The distance you want to convert (the input value is set to "
          "meters)"
       << endl;

  cin >> meters;

  if (meters < 0) {
    cout << "Theres no negative  meters!" << endl;
  } else {

    centimeters = meters * 100;
    kilometers = meters / 1000;
    inches = meters * (39.37);

    cout << "Your input value equals to " << centimeters << " cemtimeters"
         << endl;
    cout << "Your input value equals to " << kilometers << " kilometers"
         << endl;
    cout << "Your input value equals to " << inches << " inches" << endl;
  }
}

*/

/*====================================*/


/* Ejercicio 2

int main() {

  double temperature;
  double convertion;
  int choice;

  cout << "Insert the temperature" << endl;

  cin >> temperature;

  cout << "Want it to be celcius or Farenheit?, Type 1 for celcius to "
          "Farenheit , Type 2 for "
          "Farenheit to Celcius"
       << endl;

  cin >> choice;

  switch (choice) {

  case 1:
    convertion = (temperature * 9 / 5) + 32;

    cout << "Your temperature in Farenheit is " << convertion << "°" << endl;
    break;
  case 2:
    convertion = (temperature - 32) * 5 / 9;

    cout << "Your temperature in Celcius is " << convertion << "°" << endl;
    break;

  default:
    cout << "Yo didn´t enter a correct value, please try again!" << endl;
  }
}
*/

/*====================================*/

/* ejercicio 3
int main(){
  
int menu;
float area, base, altura, radio, pi = M_PI;
  cout << "seleccione la figura que quiere calcular su area:\n1. Rectangulo\n2.Triangulo\n3.Circulo" << endl; 
  
  cin >> menu;

  if(menu == 1){
    cout << "Ingre la base:" << endl;
    cin >> base;
    cout << "Ingrese la base" << endl;
    cin >> altura;
    area = base*altura;
    cout << "La area del rectangulo es: " << area;
  }
  if(menu == 2){
    cout << "Ingre la base:" << endl;
    cin >> base;
    cout << "Ingrese la base" << endl;
    cin >> altura;
    area = (base*altura)/2;
    cout << "La area del traingulo es: " << area;
  }
  if(menu == 3){
    cout << "Ingrese el radio:" << endl;
    cin >> radio;
    area = pi*(pow(radio,radio));
    cout << "La area del circulo es: " << area;
  }
}
*/


/*====================================*/


/* Ejercicio 4
int main() {

int counter, TotalPeople, age, nationality, Pass, TotalWomen, TotalMen, gender;

  TotalMen = 0;
  Pass = 0;
  counter = 0;
  TotalWomen = 0;

cout << "Insert the amount of people you want to evaulate" << endl;

  cin >> TotalPeople;

  while (counter < TotalPeople)  {

    cout <<"Insert the age" << endl;
    cin >> age;
    cout <<"Insert nationality (Type 1 for Colombia, type 2 for a different one)" << endl;
    cin >> nationality;
    cout << "Insert the gender (Type 1 for Male, otherwise type 2 for female)" << endl;
    cin >> gender;

    cout << "===========================" << endl;


    if (age >17 && age <25 && nationality == 1 && gender == 1) {

    Pass = Pass + 1;
    } 
  
 switch (gender) {

   case 1:  TotalMen = TotalMen + 1;
   break;
   case 2: TotalWomen = TotalWomen + 1;
   break;
 }

   counter = counter + 1; 
  }

  
cout << "The amount of Mens there are is: " << TotalMen << endl;
 cout << "The amount of Women there are is: " << TotalWomen << endl;
 cout << "The amount of people approved is: " << Pass << endl;
  
  return 0;
}
*/



/*====================================*/


/*Ejercicio 5
int main(){
  float x,y,z, promedio;
  cout << "Ingrese los 3 números: " << endl;
  cin >> x;
  cin >> y;
  cin >> z;
  if(x>y and x>z){
    if(y>z){
      cout << "Los números en forma descendente son: " << x << "," << y << "," <<  z << endl;   
      }
    else{
      cout << "Los números en forma descendente son: " << x << "," << z << "," <<  y << endl;      
    }
    promedio = (x*y*z)/3;
    cout << "El promedio es: " << promedio << endl;
  }

  if(y>x and y>z){
    if(x>z){
      cout << "Los números en forma descendente son: " << y << "," << x << "," <<  z << endl;   
      }
    else{
      cout << "Los números en forma descendente son: " << y << "," << z << "," <<  x << endl;      
    }
    promedio = (x*y*z)/3;
    cout << "El promedio es: " << promedio << endl;
  }
  if(z>y and z>x){
    if(x>y){
      cout << "Los números en forma descendente son: " << z << "," << x << "," <<  y << endl;   
      }
    else{
      cout << "Los números en forma descendente son: " << z << "," << y << "," <<  x << endl;      
    }
    promedio = (x*y*z)/3;
    cout << "El promedio es: " << promedio << endl;
  }
}
*/


/*====================================*/

/* Ejercicio 6 
int main() {

  int openlect;
  double num1, num2;

  cout << "Insert 2 numbers you want to operate with." << endl;
  cin >> num1 >> num2;

  cout << " To proceed, type any of the numbers shown below ";

  cout << "\n        1 If adition";
   cout <<"\n        2 If substraction";
  cout << "\n        3 If multiplication";
  cout << "\n        4 If division \n";

  cin >> openlect;

  switch (openlect) {

  case 1:
    cout << "Number 1 plus Number 2 equals to:" << num1 + num2;
    break;
  case 2:
    cout << "Number 1 minus Number 2 equals to: " << num1 - num2;
    break;
  case 3:
    cout << "Number 1 multiplied by Number 2 equals to: " << num1 * num2;
    break;

    case 4: 

    if (num2 == 0){
      cout << "Oops! Seems like you tried dividing by 0, which is undefined." << endl;
    } else {
    cout  << "Number 1 divided by Number 2 equals to: " << num1 / num2;
    }
    
    // end of switch
  }

  cout << endl;

  return 0;
}
*/


/*====================================*/


/* Ejercicio 7
int main(){
  int x,y;
  float funcion;
  cout << "introduzca x: \n" << "introduzca y: " << endl;
  cin >> x >> y;
  funcion = (3*x-4);
  if (funcion == y){
    cout << "La pareja pertenecce a la función y=3x-4" << endl;
    }
  else{
   cout << "La pareja no pertenecce a la función y=3x-4" << endl; 
  }
}
*/

/*====================================*/


/* Ejercicio 8  (con while)

int main() {

  int fifty = 50000;
  int twenty = 20000;
  int ten = 10000;
  int five = 5000;
  int two = 2000;
  int sum, fiftyBills, twentyBills, tenBills, fiveBills, twoBills, TotalAmount;

  twentyBills = 0;
  fiftyBills = 0;
  tenBills = 0;
  fiveBills = 0;
  twoBills = 0;
  TotalAmount = 0;
  sum = 0;

  cout << "Insert the amount of money you want to extract" << endl;

  cin >> TotalAmount;

 cout << "=======================" << endl;

  //"Loop" starts ======================================

  if (TotalAmount < 2000) {
    cout << "The value requiered isn't enough for this case" << endl;
  } else {
    while (sum < TotalAmount) {
      fiftyBills++;
      sum = sum + fifty;
    }

    if (sum > TotalAmount) {
      fiftyBills = fiftyBills - 1;
      sum = sum - fifty;
    }
    while (sum < TotalAmount) {
      sum = sum + twenty;
      twentyBills++;
    }

    if (sum > TotalAmount) {
      twentyBills = twentyBills - 1;
      sum = sum - twenty;
    }
    while (sum < TotalAmount) {
      sum = sum + ten;
      tenBills++;
    }
    if (sum > TotalAmount) {
      tenBills = tenBills - 1;
      sum = sum - ten;
    }
    while (sum < TotalAmount) {
      sum = sum + five;
      fiveBills++;
    }
    if (sum > TotalAmount) {
      fiveBills = fiveBills - 1;
      sum = sum - five;
    }
    while (sum < TotalAmount) {
      sum = sum + two;
      twoBills++;

      //"loop" ends
      if (sum > TotalAmount) {

        cout << "the amount of money is not currently available" << endl;

      } 
    }
  } 
        cout << "The total amount of 50Kbills used is: " << fiftyBills << endl;
        cout << "The total amount of 20Kbills used is: " << twentyBills << endl;
        cout << "The total amount of 10Kbills used is: " << tenBills << endl;
        cout << "The total amount of 5Kbills used is: " << fiveBills << endl;
        cout << "The total amount of 2Kbills used is: " << twoBills << endl;
        
  return 0;
}

*/


/*====================================*/


/* Ejercicio 8 (sin while)
int main (){

bool error = false;
 
int counter = 0, fifty = 0, twenty = 0, ten = 0, five = 0, two = 0;
 
cout << "Insert the amount you want to extract!" << endl;

cin >> counter;

if (counter >= 50000) {
  fifty = (counter / 50000);
  counter = counter - (50000 * fifty);
  } 
  if (counter >= 20000) {
  twenty = (counter / 20000);
  counter = counter - (20000 * twenty);
    } 
      if (counter >= 10000) {
  ten = (counter / 10000);
  counter = counter - (10000 * ten);
      }   if (counter >= 5000) {
  five = (counter / 5000);
counter = counter - (5000 * five);
       }      if (counter >= 2000) {
  two = (counter / 2000);
counter = counter - (2000 * two);
         }       if (counter > 0){
          error = true;
         }
          if (error) {
            cout << "This amount of money is not available" << endl;

          } else {
  cout << "The total amount of 50Kbills used is: " << fifty << endl;
        cout << "The total amount of 20Kbills used is: " << twenty << endl;
        cout << "The total amount of 10Kbills used is: " << ten << endl;
        cout << "The total amount of 5Kbills used is: " << five << endl;
        cout << "The total amount of 2Kbills used is: " << two << endl;

    }
}
*/

/*====================================*/


/* EJERCICIO 9
int main(){
  float nota;
  char letra;
  cout << "Introduzca la nota:";
  cin >> nota;
  if(nota >= 0.0 and nota <= 5.9){
    letra = 'D';
    cout << "La nota en letra es: " << letra << endl;
  }
  if(nota >= 6.0 and nota <= 6.9){
    letra = 'A';
    cout << "La nota en letra es: " << letra << endl;
  }
  if(nota >= 7.0 and nota <= 7.9){
    letra = 'B';
    cout << "La nota en letra es: " << letra << endl;
    }
  if(nota >= 8.0 and nota <= 8.9){
    letra = 'S';
    cout << "La nota en letra es: " << letra << endl;
  }
  if(nota >= 9.0 and nota <= 10.0){
    letra = 'E';
    cout << "La nota en letra es: " << letra << endl;
  }
}
*/
  