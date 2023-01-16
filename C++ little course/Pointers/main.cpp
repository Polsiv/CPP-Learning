/*
1)variable that stores the memory address location of some value
2)https://stackoverflow.com/questions/24777782/c-pointer-declaration-and-assignment
3)https://www.youtube.com/watch?v=T9-agjKW4PQ&list=PLzMcBGfZo4-lmGC8VW0iu6qfMHjy7gLQ3&index=16&ab_channel=TechWithTim 
*/


#include <iostream>
using namespace std;
int main(){


    int x = 2;

    int *y = &x;

    cout << &y << endl;
    cout << y << endl;

cout << "====array=====" << endl;

    int array[3] = {1, 2, 3};
    int *first = array;

 for (int i = 0; i < 3; ++i){

     first = array + i;
     cout << first << endl;

     }

    return 0;
}