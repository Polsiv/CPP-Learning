#include <iostream>

using namespace std;

int main() {

int wave1 = 0;
int time = 0;

  cout<<"Ingrese el tiempo"<<endl;
cin>>time;

  while (time < 0){
    cout<<"There's no negative time, insert the time again!"<<endl;
    cin>>time;
  } 

  if (time > 0 && time < 2){

    wave1 = 0;

  cout<<"The wave is "<<wave1<<" Volts"<<endl;
    
  } else {
      wave1 = 3;

  
cout<<"The wave is "<<wave1<<" Volts"<<endl;
  
  }

  
}