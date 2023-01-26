#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream read;
    ofstream write;

    read.open("numbers.txt");

    if (!read.is_open())
    {

        cout << "Not success!\n";
        return 0;
    }

    write.open("result.txt");

    if (!write.is_open())
    {

        cout << "Not success!\n";
        return 0;
    }

    int x = 0;
    int counter = 0;

    while (read >> x)
    {

        counter = counter + x;
        cout << x << endl;
       
    }
    
    write << counter << endl;
    write.close();
    read.close();
}