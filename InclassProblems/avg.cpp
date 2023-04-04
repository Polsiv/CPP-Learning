#include <iostream>

using namespace std;

int main() {

int score, counter = 1, totalS, add = 0;


  double average;

  cout << "Insert the amount of students" << endl;

  cin >> totalS;

  while (counter  <= totalS) {

cout << "Insert the score of the student num " << counter<< endl;

  cin >> score;

    add =  add + score;

    counter ++;

    average = add / totalS;

  }

  cout << "The avg is " << average << endl;
}