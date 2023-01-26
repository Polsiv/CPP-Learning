#include <iostream>

using namespace std;

void forLoop();


pair<int, int> makePair(int x, int y){

    return pair<int, int>(x, y);
}

int add(int x, int y){

    return x + y;
    }

int RandomNum(){
    return 5;
    }


int doMath(int x, int y, int z = 10){
    return (z*x) + y;
}

int main(){

int result = add(10, 20);

cout << "=====Printing result function=====" << endl;
cout << result << endl;
result = RandomNum();

cout << "=====Printing RandomNum Function=====" << endl;
cout << result << endl;
cout << RandomNum() << endl;

cout << "=====Printing doMath Function=====" << endl;
cout << doMath(1, 2) << endl;


cout << "=====Printing makePairfunction=====" << endl;
cout << makePair(10, 30).first << endl;

forLoop();


    return 0;
 }


void forLoop(){

cout << "======ForLoop========" << endl;

for (int i = 0; i < 10; ++i){
    cout << i << endl;
    }
}