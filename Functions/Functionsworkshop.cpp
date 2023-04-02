#include <iostream>
#include <math.h>

using namespace std;

//By:  / Code: 99127

/*===================================================== PROBLEM #1

double CircleA(double x);
double RectangleA(double x, double y);
double SquareA(double x);
double TriangleA(double x, double y);

int main() {


double sideA, sideB, side;
int choice;

cout << "Enter the shape you want to operate with!" << endl;
cout << "=========================================" << endl;
cout << "1) For Square\n" << "2) For Rectangle\n" << "3) For Triangle\n" << "4)
For Circle\n"; cout << "=========================================" << endl;


cin >> choice;

  switch(choice){

    case 1:
    cout << "Enter the side: " << endl;
    cin >> side;
 SquareA(side);
cout << "The square's area is: " << SquareA(side);
    break;

    case 2:  cout << "Enter the side: " << endl;
    cin >> sideA;
       cout << "Enter the other side side: " << endl;
    cin >> sideB;

RectangleA(sideA, sideB);
      break;
cout << "The Rectangle's area is: " << RectangleA(sideA, sideB);

    case 3:  cout << "Enter the base: " << endl;
    cin >> sideA;
       cout << "Enter the height: " << endl;
    cin >> sideB;

TriangleA(sideA, sideB);
cout << "The triangle's area is: " << TriangleA(sideA, sideB);
    break;

    case 4:  cout << "Enter the radius: " << endl;
    cin >> side;

CircleA(side);
cout << "The circle's area is: " << CircleA(side);

    break;

    default: cout << "You didn't entered a correct number!" << endl;

  }

}

double SquareA(double x){
  double result;
  result = pow(x,2);
  return result;

};

double RectangleA(double x, double y){
  double result;
  result = x * y;
  return result;
}

double TriangleA(double x, double y){
  double result;
  result = (x * y)/2;
  return result;
}


double CircleA(double x){
  double result;
  result = (M_PI * pow(x,2));
  return result;
}

*/



/*================================================================PROBLEM #2

#include <iostream>

using namespace std;
int prime_number(int x){

   int counter = 0, value;

for (int i = 1; i <= x; i++){

        if (x % i == 0){
            counter ++;
        }
    }
     if (counter != 2){
            value = 0;
        }

     if (counter == 2){
    value = 1;
     }
      return value;
    }

int main(){

int i;

cout << "Note that: 1 is for prime numbers & 0 is for non-prime numbers." <<
endl; cout << "Enter the number you want to evaluate: " << endl;

    cin>>i;

    prime_number(i);
    cout << prime_number(i) << endl;
    return 0;
};

*/

//Too lazy to solve problem 3, sorry :(

/*================================================================PROBLEM #4
#include <iostream>

using namespace std;

double salary_tax(double x);

int main (){

double salary = 0;

cout << "Enter your salary!" << endl;
cin >> salary;

salary_tax(salary);

cout << salary_tax(salary) << endl;

return 0;
};



double salary_tax(double x){

double s_discount = 0, tsalary = 0;

if(x <= 1000){

s_discount = x * 0.1;

tsalary = x - s_discount;

}

if (x > 1000 && x <=2000) {

s_discount = x * 0.05;

tsalary = x - s_discount;

}

 if (x > 2000){

s_discount = x * 0.03;

tsalary = x - s_discount;
}

return tsalary;

//else if is a virus!

};

*/

/*============================================================== PROBLEM #5
#include <iostream>

using namespace std;

void avg(double x);

int main()
{

    double y, idk;

    for (int i = 0; i < 3; i++)
    {

        cout << "enter the number " << i+1 << ": " << endl;

        cin >> y;

        idk +=y;

    }
      avg(idk);
}

void avg(double x)
{

    double total, total_avg;

    total += x;

    total_avg = total / 3;

    if (total_avg < 7)
    {

        cout << "Improve ur score!" << endl;
    }
    else
    {
        cout << "Approved!" << endl;
    }
}

*/

/*========================================================== PROBLEM #6
  
#include <iostream>

using namespace std;

void avg(double x);

int main()
{

    // Im trying to avoid negative conditions as much as i can, it's painful.

    double y, idk;

    for (int i = 0; i < 3; i++)
    {

        cout << "Enter the voltage " << i + 1 << ": " << endl;

        cin >> y;

        idk += y;
    }
    avg(idk);
}

void avg(double x)
{

    double total, total_avg;

    total += x;

    total_avg = total / 3;



    if (total_avg <= 115)
    {

        cout << "\nOptimal voltage!" << endl;
    }
    if (total_avg > 115 && total_avg <= 220)
    {

        cout << "\nVoltage quite high!" << endl;
    }

    if (total_avg > 220)
    {

        cout << "\nWarning!" << endl;
        
    }
}

*/


/*===================================================================== PROBLEM #7
  


#include <iostream>

using namespace std;

void check(int x);

int main()
{

int eff;

cout << "Enter:" << endl;

cin >> eff;

check(eff);

}

void check(int x){

if( x < 8000){

    cout << "Bruh there's no display message for this statement?" << endl;
}

if (x >= 8000 && x <= 10000) {

    cout << "average consumption" << endl;

}

if (x > 10000) {
    cout << "There's an high consuption of energy!" << endl;
}

}

*/

/*========================================================== PROBLEM #8
  
#include <iostream>

using namespace std;


void leap_year(int x);

int main(){

int year;

cout << "Enter the year!" << endl;

cin >> year;

leap_year(year);

return 0;
}


void leap_year(int x){

if(x % 4 == 0){

    cout << "The year evaluated is indeed, a leap year!" << endl;
} else {
    cout << "Normal year" << endl;
}

}

*/




/*========================================================== PROBLEM #9

#include <iostream>

using namespace std;

void extra_h(double x, double y);

int main()
{

    double h, m;

    cout << "Enter the amount of hours you want to work with!" << endl;

    cin >> h;

    cout << "Enter the amount of money they pay / hour!" << endl;

    cin >> m;

    extra_h(h, m);
}

void extra_h(double x, double y)
{

    int e_hour;
    double t_payment, e_payment;

    if (x < 40)
    {

        t_payment = x * y;

        cout << "Hmm, seems like you worked less than 40 hours, here's your payment though! " << t_payment << endl;
    }
    else
    {

        e_hour = x - 40;
        e_payment = e_hour * 0.25 + (e_hour * y);
        t_payment = 40 * y + (e_payment);

         //test

        //cout << e_hour << endl;
        //cout << e_payment << endl;
        //cout << t_payment << endl;

        cout << "Great job! Seems like you worked more than 40 hours, here's your payment! " << t_payment << endl;
    }
}

*/

/*========================================================== PROBLEM #10
Tried to use std:: (must remove using namespace!)

#include <iostream>
void numberinput(int *number){
    for(int i=0;i<10;i++){
    std::cout<<"enter the number "<<i+1<<": \n";
    std::cin>>number[i];
    }
}
void evennumber(int number[]){
for(int i=0;i<10;i++){
    if(number[i]%2==0 && number[i]!=0)
        std::cout<<"the number "<<number[i]<<" is even\n";
}
}
void highestvalue(int number[]){
    int high=0;
    for(int i=0;i<10;i++){
        if(high<number[i])
            high=number[i];
    }
   std::cout<<"\nthe highest number is "<<high<<"\n";
}
void lowestvalue(int number[]){
    int low=0;
    for(int i=0;i<10;i++){
        if(low>number[i])
            low=number[i];
    }
   std::cout<<"\nthe lowest number is "<<low<<"\n";
}
int main(){
    int number[10];
    numberinput(number);
    evennumber(number);
    highestvalue(number);
    lowestvalue(number);
}
}

*/