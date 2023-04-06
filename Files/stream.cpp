#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;

// read entire line
int main()
{

    // declare stream variables
    ifstream newitem;  // input file
    ofstream newitem1; // outputfile

    // opening input file
    newitem.open("file1.txt"); // open the input file (must be created)

    if (!newitem.is_open())
    {
        cout << "Error opening input file\n";
        return 0;
    }

     //opening output file

    newitem1.open("out.txt");

    if (!newitem1.is_open()){

        cout << "Error opening output file\n";
        return 0;
    }
    
    //read from input file

    int x = 0;

    while(newitem >> x)//it reads line by line
    {
        newitem1 << x * 2 << endl;
    }

    //close files

    newitem1.close();
    newitem.close();


    return 0;
}
