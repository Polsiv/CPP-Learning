#include <iostream>

using namespace std;

int main()
{

//Continue
    for (int i = 0; i < 10; i++){
        if (i == 4) {
            continue; //it skips the iteration if the statement it's true (in this case it's 4)
        cout << i << "\n";
    }

//break

    cout << "=========" << endl;

    for (int i = 0; i < 20; ++i){

    if (i == 10){
        break; //it ends the code when the statement is true
        }
        cout << i << endl;
    } 

    return 0;
}