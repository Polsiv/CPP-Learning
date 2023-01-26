#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // ofstream os("foo.txt");
    // if (os.is_open()) {
    //     os << "Hello World!";
    // }

    ofstream os("foo.txt");
    if (os.is_open()){
        char data[] = "Foo";
        // Writes 3 characters from data -> "Foo".
        cout.write(data, 2);

        ofstream test("lol.txt");

        test << "hdjdkedo";

        return 0;
    }


    int x = 3;

    int arr [x] = {0, 1, 2};
}
