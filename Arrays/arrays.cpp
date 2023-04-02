
#include <iostream>
#include <time.h>
using namespace std;

/* int sumArray;

double num [20] = {1,2,3,4,5,6,7};
cout << num[3] << endl;

num [3] = num[2] / 2;
  
cout << num[3] << endl;

sumArray = num[0] + num[1] + num[2] + num[3] + num[4] + num[5];       

  cout << sumArray;

  const int size = 7;

*/

/*
int a [TAM];
srand (time(NULL));
for (int i = 0; i < TAM ; i++){
a[i] =rand ( %) 100 + 1;

}    for (int i = 0; i < TAM; i++){
 cout << a[i] << " ";
}


 */


int main() {


  int size;
cout<<"Enter the number of values" << endl;
  cin >> size;
  
int array [30];

for (int i = 0; i < size; i++) {
  cout << "Enter the value" << endl;
cin >> array[i];

int max = 0;
int min = 1000;
   

   if (max < array[i]) {
      max = array[i];
    } 
    if (min > array[i]) {
      min = array[i];
      
      }
cout << max << endl;
    } 
  

  }  

  
