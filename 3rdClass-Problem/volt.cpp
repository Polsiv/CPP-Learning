#include <iostream>

using namespace std;


int main() {
  int wave = 0;
  int time;
  

  cout<<"Insert the time value!"<<endl;
  cin>>time;

  if(time < 0) { cout<<"Negative time? Try again!."<<endl;
    } else if (time >= 0 && time < 2){
    wave = 0; 
    cout<<"the wave has "<<wave<<" volts"<<endl;
    } else if (time > 2){

    wave = 3;
    cout<<"the wave has "<<wave<<" volts"<<endl;
    }
    

}