#include <iostream>
#include <set>

using namespace std;

int main()
{

    string test = "Testing arrays";

    set<char> testchar;

    for (int i = 0; i < test.size(); ++i){

        char letter = test[i];

        testchar.insert(letter);
    }

    for (auto itr = testchar.begin(); itr != testchar.end(); ++itr){

        cout << *itr << endl;
    }

    return 0;
}