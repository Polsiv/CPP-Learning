#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int max_term = 150;
    double small = 1e-10;
    double Sm = 1;
    double sum = 1;
    ofstream numbers;

    numbers.open("numbers.txt");

    for (int m = 1; m < max_term; ++m){
        
        Sm = Sm*  m/(2.0*m+1);
        sum += Sm;

numbers << "O!===== m =====!O"  << endl;
numbers << m << endl;
numbers << "===== Sm =====" << endl;
numbers << Sm << endl;
numbers << "=====Sum======" << endl;
numbers << sum << endl;

        if(Sm < small){
            cout << "number of iterations: " << m << endl;
            break;
        }    
    }
    
cout.precision(10);
cout << 2*sum << endl;

numbers.close();

    return 0;
}