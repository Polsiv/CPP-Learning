#include <iostream>
using namespace std;


int main() {

  int first [2] [3] = {{16,18,23},{54,91,11}};
  int second [2] [3] = {{24,52,77},{16,19,59}};
int sum [2] [3];

for (int i = 0; i< 2; i++){
  
  for   (int j = 0; j < 3; j++){

  sum [i] [j] = first [i] [j] + second [i] [j];
    
  

    }
  }

  for (int fil = 0; fil < 2; fil ++){
    cout << "\n";
    for (int col = 0; col < 3; col ++){
      cout << sum [fil][col] << " ";
    }
  } 
  
}