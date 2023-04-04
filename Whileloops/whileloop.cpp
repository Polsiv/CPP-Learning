#include <iostream>
using namespace std;

int main() {
  /* =============================== NUMBER 1
  int  counter = 1, end, add = 0;

  cout << "Enter the number!" << endl;

  cin >> end;

  if (end > 0) {
    while (counter <= end){

    add = add + counter ;

    counter = counter + 2;

     }
    } else {

    cout << "Please enter a positive integer!" << endl;
    }
  cout << add;

  */
  /* ==================================== NUMBER 2

 int num, add = 0;

 cout << "Enter the number, enter 0 if you want it to stop!" << endl;
   while (num != 0){


     cin >> num;

     add = add + num;
   }
   cout << "The result is: " << add;

   */

  /* ========================== NUMBER 3
  int n, i = 1, fact = 1;

    cout << "Enter the number!" << endl;

    cin >> n;

    while (n < 0) {
      cout << "Please enter a positive integer!" << endl;
      cin >> n;
    }
      while (i <= n ) {

  fact *= i;
      i++;

      }
  cout << "the factorial of your number is: " << fact << endl;
  }
  */

  /* ==================================== NUMBER 4

   double  counter = 0, years = 0, twice;
  double tax, totalbalance, money;

  cout << "Insert the total currency!" << endl;
  cin >> money;

  twice = money * 2;

  // each loop represents a year
  while (money < twice){

  tax = money * 0.05;

   money += tax;
   years ++;

      }
   cout << "the amount of years it took to reach the twice of your total balance
  deposited is: " << years << "\n and the over would be: " << money << endl;

   }
  */

  /* ======================================== NUMBER 5
 int counter = 0, counterplus = 20;


 char  question ='Y';

 while (counter < 1000){
   cout << "We are starting from 0 to 1000 by groups of 20,want to continue?,
 type Y for yes, type N for No!" << endl; cin >> question;

      if (question == 'Y'){
        while (counter < counterplus){
          counter ++;


          cout << counter << endl;


          }  counterplus += 20;
       } else {
        break;
       }
     }
   }

 */

  /* =================================================== NUMBER 6

  int price = 0, counter = 0, totalpriceisv;

  do {

  cout << "Enter the price!" << endl;

    cin >> price;

    if (price > 0){
      counter += price;

    } else {
      break;
      }
    }while (price > 0);

    totalpriceisv = counter * 0.15;

    cout << "The result of the sum of the numbers is :" << counter << " And the
  ISV is: " << totalpriceisv << endl;


  }

   */

  /*============================================ NUMBER 7
    Alejandro me ayudó en esta, para tenerlo en cuenta.


  int random, number, counter=1, counter2=0;


    srand(time(NULL));

    while(counter<=5){

      random=rand() % 9 + 1;

      cout<<"Enter the number"<<endl;
      cin>>number;

      if(number==random){
      counter2 ++;
    }
      counter++;
    }
    if(counter2==5){
      cout<<"You've won the game!"<<endl;
    }else{
        cout<<"You've lost the game :("<<endl;
    }

    }

  */
