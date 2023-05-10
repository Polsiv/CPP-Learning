#include <iostream>
#include <fstream>
using namespace std;

int factorial(int n){

    if(n == 1 || n == 0){
        return 1;
    }

return n * factorial(n - 1);

}

int main(){

int number = 0; 
ifstream input;

input.open("input.txt");

if(input.is_open()){
     cout << "File opened successfully" << endl;
    } else {
    cout << "Error!" << endl;
        }

while(input >> number){

long int output = 0;

    if (number > 0 && number  < 500){
        cout << number << "!" << endl;
        cout << factorial(number) << endl;
    }
}

input.close();

    return 0;
}

