#include <iostream>
using namespace std;


void swap (int &x, int &y){

int temp = x;   
x = y;
y = temp;

}

int main (){

    int a = 20;
    int b = 1000;


cout << a << endl;
cout << b << endl;

cout << "swapping" << endl;
swap(a, b);

cout << a << endl;
cout << b << endl;

    return 0;
}