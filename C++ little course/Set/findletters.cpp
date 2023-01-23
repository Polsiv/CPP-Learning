#include <iostream>
#include <set>

using namespace std;

int main()
{

    string test = "Testing arrays B C A";
    string find = "ABC";

set <char> findletter;

for (int i = 0; i < find.length(); ++i){

char letter = find[i];

findletter.insert(letter);

}

for (int i = 0; i < test.length(); ++i){

char letter = test[i];
findletter.erase(letter);

}


if(findletter.size() > 0){

cout << "Does not have all the letters" << endl;
 
} else {

cout << "It does have all the letters!" << endl;

}
    return 0;
}