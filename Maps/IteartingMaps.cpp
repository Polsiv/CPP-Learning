//Iterating through maps

#include <iostream>
#include <map>

using namespace std;
int main(){

map<char, int> NewMap = {
    {'T', 2}, // <- that's a pair
    {'A', 3},
    {'H', 5},
};

for (auto itr = NewMap.begin(); itr != NewMap.end(); ++itr){
    cout << itr->first << endl;
}

}