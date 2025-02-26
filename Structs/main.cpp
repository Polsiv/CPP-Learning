#include <iostream>

using namespace std;



struct Man {

  string name; 
  string last_name;
  string id;
  int age;
  double temp;
  char sex;
  
};

int main() {

Man p1;

 p1.name = "Paul";
 p1.last_name = "SIlv";
  p1.age = 14;
  p1.sex = 'M';

  cout << "Name: " << p1.name << endl;
  
};
