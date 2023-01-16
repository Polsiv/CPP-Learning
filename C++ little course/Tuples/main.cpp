#include <iostream>
#include <tuple>
using namespace std;


int main(){

tuple <int, int, char> TupleName(1, 2,'A');

cout << get<0>(TupleName);

get<1>(TupleName) = 30;

cout << get<1>(TupleName) << endl;

//Another tuple

tuple <int, int, int> T1;

T1 = make_tuple(1, 2, 3);

tuple <int, int, int> T2 = make_tuple(4, 5, 6);

T1.swap(T2); //swaps the content for both tuples, they both must have the same number of elements

cout << get<0>(T1) << endl;

//Tie

tuple <int, int> Numbers(10, 11);

int z, y;

tie(z, y) = Numbers;

cout << z << endl;
cout << y;

//concatenating tuples

tuple <int, int, int, int, int, int> T3 = tuple_cat(T1, T2);
  
for (int i = 0; i < 5; ++i){

        cout << get<i>(T3) << endl;

    }  

    return 0;
}