#include <iostream>

using namespace std;
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