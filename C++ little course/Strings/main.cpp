#include <iostream>
#include <string>

using namespace std;
int main(){

//both .size .length works, it's up to you which one you gonna use

string str = "Hi there!";

for (int i =0; i < str.length(); ++i){
    cout << str[i] << endl;
    }

cout << str.length();

    return 0;
}   