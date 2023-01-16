#include <iostream>
using namespace std;
int main(){

//Reference is an "Alias" or another way to call the variable

int x = 2;

int &z = x;

cout << z << "\n";

//look at the address of x

cout << &x << endl;

return 0;
}   