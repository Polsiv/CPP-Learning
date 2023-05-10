
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

int number = 0; 
ifstream input;

input.open("input.txt");

if(input.is_open()){
     cout << "File opened successfully" << endl;
    } else {
    cout << "Error!" << endl;
        }


string line;

while (getline(input, line)) {

        number = stoi(line);

        if (number > 0 && number < 500) {
            cout << number << "!" << endl;

            unsigned long long int output = 1;
            for (int i = number; i > 0; i--) {
                output *= i;
            }
            cout << output << endl;
        }
    }

input.close();
    return 0;
}

